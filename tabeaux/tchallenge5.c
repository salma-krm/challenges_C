#include <stdio.h>

int main() {
    int  tab[7];
    
   for( int i=0 ; i<7 ; i++){
       printf(" donner le n de tab ");
       scanf("%d",&tab[i]);
       
   }
   int min=tab[0];
   for(int  i=0 ; i< 7; i++){
       if(tab[i]<min)
       min = tab[i];
   }
   
   printf("le minimum est :%d",min);

    return 0;
}