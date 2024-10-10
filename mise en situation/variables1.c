
#include <stdio.h>

int main() {
    float base , hauteur;
    float l_aire , perimtre ;
    printf("veuillez entre la valeur de base :");
    scanf("%f",&base);
    printf("veuillez entre la valeur de hauteur :");
    scanf("%f",&hauteur);
    l_aire = (base *hauteur)/2;
    perimtre= 3 * base;
    printf("le perimtre est: %.2f\n",perimtre);
    printf("l_aire : %.2f",l_aire);
    
    
    

    return 0;
}