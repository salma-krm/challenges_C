#include <stdio.h>


int main() {
    int taille ;
    printf("entre la valeur de taille");
    scanf("%d",&taille);
     int tab[taille];
    for( int i=0 ; i<taille ; i++){
        printf("entre le tab  : ");
        scanf("%d",&tab[i]);
    }
    for(int i =0 ; i <taille ; i++){
        printf("%d\n",tab[i]);
    }
    

    
    return 0;
}