#include"articolo.h"
#include<string.h>
#include<stdio.h>

void art_init(articolo *a){
    a->title[0]='\0';
    a->text[0]='\0';
}

void art_set_title(articolo *a, char dst[]){
    strncpy(a->title,dst,MAX_TITLE);
    a->title[MAX_TITLE-1]='\0';
}

void art_set_text(articolo *a, char dst[]){
    strncpy(a->text,dst,MAX_TEXT);
    a->text[MAX_TEXT-1]='\0';
}

void art_print(articolo *a){
    printf("%s\n",a->title);
    printf("-------\n");
    printf("%s\n",a->text);
}