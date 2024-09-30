#include <stdio.h>

int main() {
    int taille;
    printf("entre LA taille ");
        scanf("%d",&taille);
    
    int tab[taille];
    for(int i=0 ; i<taille; i++){
        printf("entre les element de tableau [%d] = ",i+1);
        scanf("%d",&tab[i]);
    }
    
    int m ;
    printf("entre la valeur de m:");
    scanf("%d",&m);
    int x;
    printf("entre la valeur de x:");
    scanf("%d",&x);
    for(int i=0 ; i<taille ; i++){
          if(tab[i]==m){
               tab[i]=x;
        }
    printf("tab [%d] =%d\n ",i+1,tab[i]);
    }
   
    
    return 0;
}