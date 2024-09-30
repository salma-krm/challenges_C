#include <stdio.h>

int main() {
    int tab[6],n;
    
    for(int i=0 ; i<6 ; i++){
        printf("entre valeur de tab [%d]:",i);
        scanf("%d",&tab[i]);
    }
    printf("veuillez entre la valeur de n:");
    scanf("%d",&n);
    
    printf("verifier que n present dans le tableau ou non:\n");
    int x =0;
    for(int i=0 ; i<6 ; i++){
        if(tab[i]==n){
            x++;
        }
    }
    if(x>0){
        printf("n est present dans le tableau ");
    }
    else {
        printf("n ne pas present dans le tableau");
        
    }
    
     
    
    
     
    

    return 0;
}