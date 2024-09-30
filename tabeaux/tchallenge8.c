#include <stdio.h>

int main() {
    int tab1[5],tab2[5];
    int i;
    for( i=0;i<5;i++){
        printf(" donner les donnes de tab [%d] =",i);
        scanf("%d",&tab1[i]);
    }
    
    for( i=0;i<5;i++){
        printf(" tab [%d] =%d\n",i,tab1[i]);
    }
    printf("le copie de tableau 1 dans le tableau 2:\n");
    for( i=0;i<5;i++){
        tab2[i]=tab1[i];
        printf(" tab [%d] =%d\n",i,tab2[i]);
        
    }
    
     
    

    return 0;
}