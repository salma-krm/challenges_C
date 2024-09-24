#include <stdio.h>
#include <math.h>
int main() {
    int r;
    float volume;
    const float pi = 3.14;
    printf("entre  r:");
    scanf("%d",&r);
    
    volume = (4/3)*pi*pow(r,3);
    printf("volume = :%.2f",volume);
}