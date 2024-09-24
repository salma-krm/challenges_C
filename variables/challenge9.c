#include <stdio.h>
#include <math.h>
int main (){
    float Z1,Z2,Y1,Y2,X1,X2 , D;
    printf("la valeur de Z1 est :");
    scanf("%f",&Z1);
    printf("la valeur de Z2 est:");
    scanf("%f",&Z2);
    printf("la valeur de Y1 est:");
    scanf("%f",&Y1);
    printf("la valeur de Y1 est:");
    scanf("%f",&Y2);
    printf("la valeur de X1 est:");
    scanf("%f",&X1);
    printf("la valeur de X2 est:");
    scanf("%f",&X2);
    D=sqrt(pow(X2-X1,2) + pow(Y2-Y1,2) + pow(Z2-Z1,2));
    printf("D=%f",D);
    return 0;
}
