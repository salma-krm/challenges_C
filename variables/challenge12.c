#include <stdio.h>
#include<string.h>
int main (){
    char nb[20];
    printf("entre la valeur de nb:");
    scanf("%s",nb);
    int i = strlen(nb) -1;
    for(i; i>=0; i--)
    {
        printf("%c",nb[i]);
    }

    return 0;
}
