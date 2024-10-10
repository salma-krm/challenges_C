
#include <stdio.h>

int main() {
    float temperateur;
    printf("veuillez entre la valeur de temperateur :");
    scanf("%f",&temperateur);
    if(temperateur>=38)
        printf(" vous avez de la fievre");
    
    else{
        printf(" votre temperateur est normale");
        
    }
    
    
    

    return 0;
}