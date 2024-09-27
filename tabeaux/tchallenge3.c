#include <stdio.h>


int main() {
   int  tab[7];
    int s=0;
   for( int i=0 ; i<7 ; i++){
       printf(" donner le n de tab ");
       scanf("%d",&tab[i]);
       s=s+tab[i];
   }
   printf("la somme est :%d",s);

    
    return 0;
}