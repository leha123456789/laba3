#include<stdio.h>
#include<stdlib.h>
#include"Music.h"
music* deletemusic(music *head)
{
    	music *dop;
    	dop=head->next;
    	free(head->album);
    	free(head->track);
    	free(head);
	return dop;
}

