#include<stdio.h>
#include"Music.h"
#include<string.h>
#include<stdlib.h>
char* read2 (FILE *f,char *a){
	char *b;
	b=(char*)malloc(sizeof(char)*strlen(a)+1);
	strcpy(b,a);
	return b;
}
music* read (char*filename){
	FILE *f;
	char *k;
	char a[50];
	music *head=NULL;
	f=fopen(filename,"r");
	if(f==NULL)return head;
	while (1){
		music *tmp;
		k=fgets(a,50,f);
		if(k==0)break;
		tmp=(music*)malloc(sizeof(music));
		tmp->album=read2(f,a);
		fgets(a,50,f);
		fscanf(f,"%f",&tmp->year);
		fgets(a,50,f);
		tmp->track=read2(f,a);
		tmp->next=head;
		head=tmp;
	}
	fclose(f);
	return head;
}

