#include <stdio.h>

int main() {
     int n ;
    printf("veuillez entre la valeur de n :");
    scanf("%d",&n);
    int comp;
        if(n>0 ){
            for(int i=2 ; i<n-1 ; i++){
                if(n%i==0){
                    comp=0;
                    break;
                }
            }
        }
        if(comp==0){
            printf("n pas premier");
        }
        else {
            printf( "n est premier ");
        }
        

    return 0;
}
