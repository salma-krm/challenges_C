#include <stdio.h>

int main() {
     float yards;
     int  km;
     printf("veuillez entre la valeur de km/h:");
     scanf("%d",&km);
     yards = km * 1093.61;
     printf(" le km en yards est :%.2f",yards);
     

    return 0;
}