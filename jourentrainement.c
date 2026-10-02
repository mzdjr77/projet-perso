#include <stdlib.h>
#include <stdio.h>

int main (void){
    int jour[7];
    int temp_sport;
    int total , moyenne  ;
    int max ;
    int jour_endessous = 0;
    int jour_mini; 
    int jour_min = 1 ;
    int jour_max = 1;
    int jour_sup = 0;


printf(" ===== SUIVI SPORT ===== \n");
/* D'abord tu remplis jour[] */
for (temp_sport = 0; temp_sport < 7; temp_sport++) {

    printf("Minutes jour %d : ", temp_sport + 1);
    scanf("%d", &jour[temp_sport]);
 
}
  total = jour[0] + jour[1] + jour[2] + jour[3] + jour[4] + jour[5] + jour[6] ;
    moyenne = total / 7 ;
    // jour en desus moyenne 
        for (temp_sport = 0; temp_sport < 7; temp_sport++) {

        if (jour[temp_sport] > moyenne) {
            jour_sup++;
        }
            // jour en dessous moyenne
        if (jour[temp_sport] < moyenne) {
            jour_endessous++;
        }
    }

/* Maintenant jour[] est rempli */

max = jour[0];

for (temp_sport = 0; temp_sport < 7; temp_sport++) {

    if (jour[temp_sport] > max) {
        max = jour[temp_sport];
        jour_max = temp_sport + 1; 


    }
}
// jour mini 
jour_mini = jour[0];
for (temp_sport = 0; temp_sport < 7; temp_sport++) {

    if (jour[temp_sport] < jour_mini) {
        jour_mini = jour[temp_sport];
        jour_min = temp_sport + 1 ;
    }

} 

printf("\n\n"); 
printf(" ===== BILAN ===== \n");
printf(" Total : %d minutes\n" , total);
printf(" Moyenne : %d minutes/jour \n" , moyenne);
printf(" La plus grosse seance est de : %d minutes \n " , max);
printf("C'etait le jour %d \n" , jour_max);
printf(" Nombre de jours au-dessus de la moyenne : %d\n " ,jour_sup);



printf("La plus petite seance est de : %d minutes \n " , jour_mini);
printf("C'etait le jour %d \n" , jour_min);
printf("Nombre de jours en-dessous de la moyenne : %d\n " ,jour_endessous);
    return EXIT_SUCCESS ;
}