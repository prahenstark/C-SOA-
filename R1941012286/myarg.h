

int makeargv(const char *s,const char *delim,char ***argvp){
		char *t;
		int ntokens,i;
		const char *snew;
		snew=s+strspn(s,delim);// snew is the real beginning of the string
		t=(char*)malloc((strlen(snew)+1)*sizeof(char));
		if(t==NULL){
			printf("No more available in memory\n");
			return -1;
		}
		strcpy(t,snew);
		//printf("Copied string = %s\n",t);
		// Counting number of tokens
		if(strtok(t,delim)!=NULL){
			for(ntokens=1;strtok(NULL,delim)!=NULL;ntokens++);
		}
		*argvp=(char **)malloc((ntokens+1)*sizeof(char *));
		if(*argvp==NULL){		
			printf("No more available in memory\n");
			return -1;
		}
		strcpy(t,snew); // Again copy
		*(*argvp+0)=strtok(t,delim); // first token		
		for(i=1;i<ntokens;i++){
			*(*argvp+i)=strtok(NULL,delim); // Rest of the tokens
		}
		*(*argvp+ntokens)=NULL;
		return ntokens; // Return the number of tokens
}
