#include <stdlib.h>
#include <stdio.h>
#include"Music.h"
void main(int argc,char*argv[])
{
  menu(argv[1]);  
  } 
void menu(char*filename)
{
	music *head=NULL;
	music *help;
	music *help2;
	int v;
	head=read(filename);
	read(filename);
	do{
		printf("Вас приветствует программа управления базой данных об музыке в Spotify."
		"Пожалуйста выберите действие:\n"
		"Добавить музыку.[1]\nУдалить музыку.[2]\nВывести информацию о все музыке.[3]\n"
		"Вывести информацию по определенной музыке.[4]\n"
		"Редактировать музыку.[5]\nВыход.[0]\n");
		scanf("%d",&v);
		getchar();
		switch(v)
		{
			case 1:
				head=newmusic(head);
			break;
			case 2:
				help=head;
				help2=head;
				if(help==NULL){
					printf("Еще нет ни одной музыки.\n");
					break;
				}
				printf("Введите название музыки:");
				help=poisk(filevvod(),help);
				if(help==NULL){
					printf("Музыка с данным номером не заведена.\n");
					break;
				}
				if(help==head)
					head=deletemusic(help);
				else{
					while(1){
						if(help2->next==help)
							break;
						else help2=help2->next;
					}
					help2->next=deletemusic(help);
				}
			break;
			case 3:
				help=head;
				if(help==NULL){
					printf("Еще нет ни одной музыки.\n");
					break;
				}
				while(help !=NULL){
					printf("Альбом: %s Год: %f\n Трек: %s\n\n",
					help->album,help->year,help->track);
					help=help->next;
				}
			break;
			case 4:
				help=head;
				if(help==NULL){
					printf("Еще нет ни одной музыки.\n");
					break;
				}
				printf("Введите название музыки:");
				help=poisk(filevvod(),help);
				if(help==NULL){
					printf("Музыка с данным номером не заведена.\n");
					break;
				}
				printf("Альбом: %s Год: %f\n Трек: %s\n\n",
                                        help->album,help->year,help->track);
                                        help=help->next;

			break;
			case 5:
				help=head;
				if(help==NULL){
					printf("Еще нет ни одной музыки.\n");
					break;
				}
				printf("Введите название музыки:");
				help=poisk(filevvod(),help);
				if(help==NULL){
					printf("Музыка с данным номером не заведена.\n");
					break;
				}
				redakt(help);
			break;
			case 0:
				zapis(head);
				printf("\nДо свидания.\n");
			break;
			default:
				printf("Команды под данным номером не существует.\n ");
			break;
		}
		}
		while(v!=0);
}
