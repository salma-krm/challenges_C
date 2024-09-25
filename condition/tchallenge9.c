#include <stdio.h>

int main() {
   int Al;
   printf("entre la valeur de n:");
   scanf("%d",&Al);
   if(Al>=65 && Al<=90){
       printf("majiscule");
   }
   else if (Al>=97 && Al<=122){
       printf("maniscule");
   }
   else{
       printf("n pas un alphabet");
   }

    return 0;
}