#include <stdio.h>

int main() {
    int tab1[5],tab2[5];
    int i;
    for( i=0;i<5;i++){
        printf(" donner les donnes de tab [%d] =",i);
        scanf("%d",&tab1[i]);
    }
    
    printf("le tableau inverse est  :\n");
    
    for( i=0;i<5;i++){
        tab2[i]=tab1[4-i];
        printf(" tab [%d]=%d\n",i,tab2[i]);
        
    }
    
     
    

    return 0;
}