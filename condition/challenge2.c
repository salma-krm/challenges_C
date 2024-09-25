#include <stdio.h>


    int main (){
     char n;
   printf("entre  la valeur entre 1et 6:");
   scanf("%c",&n);
   switch(n){
       
        case 'a':
        case 'u':
        case 'i' :
        case 'y':
        case 'o':
             
        case 'e':printf(" est  un voyelle %c",n);
              break;
        default:printf("n pas un voyelle");
       }

    return 0;
}