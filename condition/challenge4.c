#include <stdio.h>
#include <math.h>

int main() {
    float a , b, c,x1,x2;
    float delta;
    printf("entre la v de a:");
    scanf("%f",&a);
    printf("entre la v de b:");
    scanf("%f",&b);
    printf("entre la v de C:");
    scanf("%f",&c);
    delta = (pow(b,2)- 4*(a+c));
    
    if(delta>0){
        x1= (-b +sqrt(delta))/(2*a);
        x2= (-b-sqrt(delta))/(2*a);
        printf("les solutins 1 est :%.2f\n",x1);
        printf("les solutins 2 est :%.2f",x2);
    }
    else if(delta==0){
        x1=-b/2*a;
        printf("les solutins 1 est :%f",x1);
   
        
    }else {
        printf("n pas des solutions ");
    }
    
    
    
 
      
  
      
       
    
   
    return 0;
}