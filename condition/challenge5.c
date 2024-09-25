#include <stdio.h>


int main (){
    int anne , choices;
    int jours ,mois ,heure , secondes ;
    printf("entre la v de anne:");
     scanf("%d",&anne);
    printf(" 1:mois:\n");
    printf(" 2: jours:\n");
    printf(" 3:heure:\n");
    printf(" 4:secondes:\n");
    scanf("%d",&choices);

     switch(choices){
         
         case 1:mois = anne * 12;
        printf("mois :%d\n",mois);
             break;
        jours =anne * 365;
        case 2:printf("jours :%d\n",jours);
             break;
        heure =  anne *365 * 60;
        case 3:printf("heure :%d\n",heure);
             break;
        secondes = anne  *365 * 60 * 60;
        case 4: printf("secondes :%d\n",secondes);
            break;
        default:printf("aucun resultat");
            break;
 }


    return 0;
}