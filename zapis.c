#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Music.h"
void zapis(music *head){
	int zapis(char*filename){
    		FILE *f;
    		f=fopen(filename,"w");
		while(head !=NULL){
        		fprintf(f,"%s%f%s",head->album,head->year,head->track);
	        	head=deletemusic(head);
    		}
    		fclose(f);
    	}
}

