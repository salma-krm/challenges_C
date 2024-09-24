#include <stdio.h>

int main() {
   int n;
   printf("entre  la valeur entre 1et 6:");
   scanf("%d",&n);
   switch(n){
       
        case 1:printf("a");
              break;
        case 2:printf("e");
              break;
        case 3 :printf("u");
               break;
        case 4:printf("i");
              break;
        case 5:printf("o");
             break;
             
        case 6:printf("y");
              break;
        default:printf("n pas un voyelle");
       }
      
  
      
       
    
   
    return 0;
}