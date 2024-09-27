#include <stdio.h>

int main() {
    int  tab[7];
    
   for( int i=0 ; i<7 ; i++){
       printf(" donner le n de tab ");
       scanf("%d",&tab[i]);
       
   }
   int max=tab[0];
   for(int  i=0 ; i< 7; i++){
       if(tab[i]>max)
       max = tab[i];
   }
   
   printf("le maximum est :%d",max);

    return 0;
}