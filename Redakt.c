#include<stdio.h>
#include<stdlib.h>
#include"Music.h"
void redakt(music *head){
	int y;
    	do{
	        printf("Выберете ,что нужно отредактировать:\n"
        	"Редатировать Альбом.[1]\nРедактировать год.[2]\nРедактировать трек.[3]\n"
	        "Выход из режима редактирования.[4]\n");
        	scanf("%d",&y);
	        getchar();
        	switch(y){
			case 1:
				free(head->album);
				printf("Введите новый альбом: ");
				head->album=filevvod();
			break;
			case 2:
				printf("Введите новый год: ");
				scanf("%f",&head->year);
			break;
			case 3:
				free(head->track);
				printf("Введите новый трек: ");
				head->track=filevvod();
			break;
			case 4:
			break;
			default:
				printf("Команды под данным номером не существует.\n");
			break;
	        }
    	}
	while(y !=4);
}
