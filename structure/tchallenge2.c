#include <stdio.h>
typedef struct student {
    char nom[50];
     char prenom[40];
      
     int notes ;
     
    
}student ;

int main() {
    
     struct student s;
     
     
    printf("entre le nom :");
    scanf("%s",s.nom);
    printf("entre le prenom :");
    scanf("%s",s.prenom);
    printf("entre nombre note ");
    scanf("%d",&s.notes);
    int taille = s.notes;
     int note [taille];
    for(int i=0 ; i <taille ; i++){
        printf("note[%d]=",i+1);
        scanf("%d",&note[i]);
    }
    
    
   
    printf("entre le nom :%s\n",s.nom);
    printf("entre le prenom :%s\n",s.prenom);
    printf("les notes est: \n");
    for( int i=0 ; i <taille ; i++){
        printf("nottte %d =%d \n",i+1,note[i]);
        
    }
    
    
     
        
    
    
    
    
    

    
    
    
    
   
    return 0;
}