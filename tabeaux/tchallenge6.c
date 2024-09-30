#include <stdio.h>

int main() {
    int taille;
    printf(" veuillez entre la taille :");
    scanf("%d",&taille);

    
     int tab[taille],i;
    for( i=0 ; i<taille ; i++){
        printf("tab [%d] =",i);
        scanf("%d",&tab[i]);
    }
    int n ;
    printf("entre la valeur de n:");
    scanf("%d",&n);
    int y;
    for( i=0; i <taille ; i++){
        y=n*tab[i];
        printf("%d\n",y);
   }
  

    return 0;
}