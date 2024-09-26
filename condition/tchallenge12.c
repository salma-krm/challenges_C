#include <stdio.h>

int main() {
    int HH1,MM1,SS1;
    int HH2, MM2, SS2;
    printf(" entre  HH1 ET MM1 ET SS1:");
    scanf("%d:%d:%d",&HH1,&MM1,&SS1); 
    printf(" entre  HH2 ET MM2 ET SS2:");
    scanf("%d:%d:%d",&HH2,&MM2,&SS2);
    if(HH1 > HH2){
        printf("Le deuxième instant vient avant le premier");
    }
    else if(HH1 == HH2){
        if(MM1> MM1){
            printf("Le deuxième instant vient avant le premier");
        }
        else if(MM1== MM1){
            if(SS1>SS1){
                printf("Le deuxième instant vient avant le premier");
            }
            else if (SS1==SS1){
                printf("Il s'agit du même instant");
            }
            else {
                printf("Le premier instant vient avant le deuxième");
                
            }
            
            
        }else{
            printf("Le premier instant vient avant le deuxième");
        }
        
    }
    else{
        printf("Le premier instant vient avant le deuxième");
    }
   

    return 0;
}