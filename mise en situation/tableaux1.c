
#include <stdio.h>

int main() {
    float tab[5];
    for( int i=0 ; i<5 ; i++){
        printf("veuillez entre la valeur de temperateur :");
        scanf("%f",&tab[i]);
    }
   float max , min ;
   min =tab[0];
   for(int i=0 ; i<5 ; i++){
       if(tab[i]<min){
           min=tab[i];
       }
   }
   max =tab[1];
   for(int i=0 ; i<5 ; i++){
       if(tab[i]>max){
           max=tab[i];
       }
   }
   printf("la plus haute temperateur :%.2f\n",max);
   printf("la plus base temperateur : %.2f",min);
   

    return 0;
}