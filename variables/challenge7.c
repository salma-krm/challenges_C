#include <stdio.h>

int main() {
    float n1,n2,n3,m,s;
    float poids1 = 2.0, poids2 = 3.0, poids3 = 5.0;
    printf("number 1:");
    scanf("%f",&n1);
    printf("number 2:");
    scanf("%f",&n2);
    printf("number 3:");
    scanf("%f",&n3);
    s = n1 * poids1 + n1 *poids2   +n3 *poids3;
    m = s/3;
    printf("la moyenne est:%d ",m);
    

    return 0;
}