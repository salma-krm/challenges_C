#include <stdio.h>
typedef struct {
    char nom[50];
    char prenom [20];
    int age ;
    
}user ;
user personne [100];

 int nombre =0;
void donner__les_donnes(){
    printf("veuillez entre le nom ");
    scanf("%s",personne[nombre].nom);
    printf("veuillez entre le prenom ");
    scanf("%s",personne[nombre].prenom);
    printf("veuillez entre  ");
    scanf("%d",&personne[nombre].age);
nombre++;
    
}
void afficher_les_donnes(){
for (int i = 0; i < nombre; i++)
{
   printf(" le nom  est: %s\n",personne[i].nom);
   
    printf(" le prenom est : %s\n ",personne[i].prenom);
    printf(" age est : %d\n ",personne[i].age);
}

    
 
    
    
    
}



int main()

{
    donner__les_donnes();
    afficher_les_donnes();
    
    


    return 0;
}