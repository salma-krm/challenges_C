#include <stdio.h>

int main() {
   int A , B ;
   printf(" entre la valeur de A");
   scanf("%d",&A);
   printf(" entre la valeur de B");
   scanf("%d",&B);
   if(A>=65 && A<=90 && B>=65 && B <=90){
       printf(" les lettres A et B majuscile ");
   }
   else{
       printf("n pas un muniscile");
   }
   
    

    return 0;
}