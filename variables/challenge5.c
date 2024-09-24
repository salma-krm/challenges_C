#include <stdio.h>

int main() {
     
     float c ;
     printf("veuillez entre le celsuis");
     scanf("%d",&c);
     if(c<0)
         printf("solide");
    else if(c >= 0 && c < 100)
         printf("liquide");
    else
         printf("gaz");
         
     
     
     

    return 0;
}