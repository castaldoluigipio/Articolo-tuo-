#include<stdio.h>
#include"articolo.h"



int main(){
    articolo A1;
    articolo A2;
    articolo A3;

   


    art_init(&A1);
    art_init(&A2);
    art_init(&A3);


    art_set_title(&A1, "Napoli campione");
    art_set_text(&A1, "Vince il 3° scudetto della sua storia");
    art_set_title(&A2, "Allerta meteo ad Afragola");
    art_set_text(&A2, "Abbiamo fatto la fine di Venezia");
    
              
    art_print(&A1);
    art_print(&A2);
    return 0;

}