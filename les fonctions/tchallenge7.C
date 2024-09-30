#include <stdio.h>
#include <string.h>


char *chainedecaractere(char a[]){
    
    
      int indice = strlen (a)-1;
      char tmp;
      for(int i=0 ; i<indice ; i++){
          tmp = a[indice];
          a[indice]= a[i];
          a[i]=tmp;
        indice--;
      }
      return a;
}


int main() {
    char b[20] ;
    printf("entre b ");
    scanf("%s",b);
    
    printf("%s",chainedecaractere(b));
    
    
    return 0;
}