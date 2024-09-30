#include <stdio.h>

int main() {
    int tab[5];
    for(int i=0;i<5;i++){
        printf(" donner les donnes de tab [%d] =",i);
        scanf("%d",&tab[i]);
    }
     int temp ;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(tab[j]>tab[i]){
                temp=tab[i];
                tab[i]=tab[j];
                tab[j]=temp;
           }  
        }
    
    }
    printf("le tabeau en ordre croissant:\n");
    for(int i=0;i<5;i++){
        printf("tab[%d] = %d\n",i,tab[i]);
    }
     
    

    return 0;
}
