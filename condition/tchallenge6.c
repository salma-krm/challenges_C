#include <stdio.h>
#include <math.h>

int main() {
     int n ;
     printf(" veuillez entre la valeur de n :");
     scanf("%d",&n);
     if(n<0){
         printf(" negatif");
     }
     else if(n>0){
         printf("positif");
     }else{
         printf("null");
     }
  
      
       
    
   
    return 0;
}