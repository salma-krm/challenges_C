#include <stdio.h>

int main() {
   float N1 ,N2, N3, N4 ,N5, M  ;
   printf("entre la valeur de N1  :");
   scanf("%f",&N1);
   printf("entre la valeur de N2  :");
   scanf("%f",&N2);
   printf("entre la valeur de N3 :");
   scanf("%f",&N3);
   printf("entre la valeur de N4 :");
   scanf("%f",&N4);
   printf("entre la valeur de N5 :");
   scanf("%f",&N5);
   M=(N1 +N2+ N3+ N4 +N5)/5;
   if(M<10)
       printf(" recale ");
   
   else if(M>=10 && M<12)
       printf(" la mention passable ");
   
   else if (M>=12 && M <14)
       printf(" la mention assez bien  ");
   
   else if(M>=14 && M<=16)
       printf(" la mention bien  ");
   
   else
       printf(" la mention tres bien  ");
   
   
   
   
    

    return 0;
}
   