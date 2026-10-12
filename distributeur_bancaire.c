#include <stdlib.h>
#include <stdio.h>

int main (void){
    int i , consulter , deposer = 0  , retirer , choix = 0 , quitter  ;
    int solde = 1000 ;
    int historique[10];
    int nb_operations = 0;
                // menu
printf(" ===== DISTRIBUTEUR BANCAIRE ===== \n\n");

    printf("1. Consulter le solde\n");
    printf("2. Deposer de l'argent\n");
    printf("3. Retirer de l'argent\n");
    printf("4. Consulter l'historique\n");
    printf("5. Quitter\n");



while (choix != 5){
    printf("\nVotre choix : ");
    scanf("%d", &choix);

// choix consulter solde
if (choix == 1){
    printf("Votre comte bancaire possede : %d euros \n" , solde);
}
        // choix deposer argent
if (choix == 2){
    printf("Votre comte bancaire possede : %d euros \n\n" , solde);
    printf("Vous souhaitez deposer combien d'euros : ");
    scanf("%d" , &deposer);
if (deposer > 0){
    solde += deposer;
    printf("Votre nouveau solde est de : %d euros\n", solde);
}
else {
    printf("Montant invalide !\n");
}
if (nb_operations < 10) {
    historique[nb_operations] = deposer;
    nb_operations++;
}
}

        // choix retirer argent
if (choix == 3){
    printf("Votre comte bancaire possede : %d euros \n\n" , solde);
    printf("Vous souhaitez retirer combien d'euros : ");
    scanf("%d" , &retirer);
if (retirer > 0 && retirer <= solde){
    printf("Le retrait a ete valide !!\n");
    solde -= retirer;
    printf("Votre nouveau solde est de : %d euros\n", solde);
    if (nb_operations < 10) {
        historique[nb_operations] = -retirer;
        nb_operations++;
    }
}
else {
    printf("Le retrait a ete refuse !!\n");
}

}
    // historique
if (choix == 4){
    printf("===== HISTORIQUE =====\n");
    for (i = 0 ; i < nb_operations ; i++){
        printf("%d euros\n" , historique[i]);
    }
}

}
//quitter
printf("Vous avez decider de quitter !! \n\n");
return EXIT_SUCCESS ;
}
