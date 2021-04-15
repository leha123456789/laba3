#include<stdio.h>
typedef struct music{
	char* album;
	float year;
	char* track;
	struct music* next;
}music;
music* deletemusic(music *head);
music *newmusic(music * head);
music *poisk(char *str,music *head);
char* read2 (FILE *f,char *a);
music* read();
void redakt(music *head);
char* filevvod();
void zapis(music *head);
void menu();

