#include <stdio.h>

int main() {
    int N1, N2,S;
    
   printf("entre la valeur de N1  :");
   scanf("%d",&N1);
   printf("entre la valeur de N2  :");
   scanf("%d",&N2);
   if ( N1!=N2){
       S = N1+N2;
   }
   else {
       S = (N1+ N2)*3;
   }
   printf("la somme est : %d",S);
   
   
   
   
    

    return 0;
}