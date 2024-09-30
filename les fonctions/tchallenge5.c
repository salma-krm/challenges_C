#include <stdio.h>

int factorielle(int a){
    int f=1;
    for(int i=1 ; i<=a ;i++){
        f=f*i;
    }
    return f;
    }

int main() {
    int a;
    int f;
    printf("entre la valeur de a :");
    scanf("%d",&a);
     factorielle(a);
    printf("le factorielle  est !%d=%d ",a,factorielle(a));
    
    
    return 0;
}