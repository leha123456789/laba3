#include<stdio.h>
#include<string.h>
#include"Music.h"
music *poisk(char *str,music *head){
    while(head !=NULL){
        if(!strcmp(head->album,str))
        	break;
        else head=head->next;
    }
    return head;
}

