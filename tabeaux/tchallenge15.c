#include <stdio.h>

int main() {
    int tab[6],tab1[5],tab2[11];
    for(int i=0 ;i<6 ; i++){
        printf("veuillez entre les element de tab:");
        scanf("%d",&tab[i]);
    }
    for(int i=0 ;i<5; i++){
        printf("veuillez entre les element de tab1:");
        scanf("%d",&tab1[i]);
    }
    
    for(int i=0 ; i <6 ; i++){
        tab2[i]=tab[i];
    }
    
    for(int i=0 ; i <5 ; i++){
        tab2[i + 6]=tab1[i];
    }
    for(int i =0 ; i< 11;i++){
        printf("%d - ",tab2[i]);
    }
    
   
    return 0;
}