#include<stdio.h>
#include<stdlib.h>
#include"Music.h"
music *newmusic(music *head){
	music *muzlo=(music*)malloc(sizeof(music));
	printf("Введите название музыки\n");
	muzlo->album=filevvod();
	printf("Введите год\n");
	scanf("%f",&muzlo->year);
        getchar();
	printf("Введите название трека\n");
	muzlo->track=filevvod();
	muzlo->next=head;
	return muzlo;
}

