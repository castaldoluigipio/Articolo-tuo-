#ifndef ARTICOLO_H
#define ARTICOLO_H

#define MAX_TITLE 80
#define MAX_TEXT 100

struct articolo {
    char title[MAX_TITLE];
    char text[MAX_TEXT];
};

typedef struct articolo articolo;

void art_set_title(articolo *a, char title[]);
void art_set_text(articolo *a, char text[]);

void art_print(articolo *a);
void art_init(articolo *a);

#endif