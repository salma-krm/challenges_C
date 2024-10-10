#include <stdio.h>

int main() {
    int taille ;
    printf("donner la taille de tableau:");
    scanf("%d",&taille);
    
   int tab  [taille];
   int i;
   for(i=0 ; i <taille ; i++){
       printf("entre l element du tableau[%d] = ",i);
       scanf("%d",&tab[i]);
   }
   int pos ;
   printf("entre la valeur de position :");
   scanf("%d",&pos);
   for(i=pos ; i <taille ; i++){
       tab[i]=tab[i+1];
   }
   taille--;
   for(i=0 ; i <taille ; i++){
       printf("tab[%d]=%d\n",i,tab[i]);
   }
   
   
    

    return 0;
}