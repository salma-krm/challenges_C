#include <stdio.h>
#include <string.h>


char *chainedecaractere(char a[]){
    
    
      int last = strlen (a)-1;
      char tmp;
      for(int i=0 ; i<last ; i++){
          tmp = a[last];
          a[last]= a[i];
          a[i]=tmp;
          last--;
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