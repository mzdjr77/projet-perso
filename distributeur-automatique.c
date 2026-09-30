#include <stdio.h>
#include <stdlib.h>

int main (void){
    int boisson1 = 110 ;
    int boisson2 = 200 ; 
    int boisson3 = 150 ;
    int boisson4 = 120 ;
    int choix ; 
    int argent ;
    int monnaie_rendre ; 

    int piece2euros ;
    int piece1euros ;
    int piece50centimes ;
    int piece20centimes ;
    int piece10centimes ;
    int piece5centimes ;
    int piece1centimes ;
printf("======== DISTRIBUTEUR ======== \n");

printf("1 - Eau       : 110 centimes \n");
printf("2 - Coca-Cola : 200 centimes \n");
printf("3 - Ice-Tea   : 150 centimes \n");
printf("4 - Cafe      : 120 centimes \n");

printf("Choisis ta boisson : ");
scanf("%d" , &choix);
if (choix == 1){
    printf("Tu as choisis Eau \n");
    choix = boisson1;
}
else if (choix == 2 ){
    printf("Tu as choisis Coca-Cola \n");
    choix = boisson2 ; 
}
else if (choix == 3 ){
    printf("Tu as choisis Ice-Tea \n");
    choix = boisson3;
}
else if (choix == 4 ){
    printf("Tu as choisis Cafe \n");
    choix = boisson4;
}
else {
    printf("Cette boisson n'existe pas.\n");
    return EXIT_FAILURE;
}
printf("Prix : %d centimes.\n" , choix);


printf("Insere ton argent : ");
scanf("%d" , &argent );

if (argent < choix){
    printf("Argent Insuffisant ! \n");
    monnaie_rendre = choix - argent ;
    printf("Il te manque %d centimes \n" , monnaie_rendre);
    }

if (argent == choix ) {
    printf("Payement accepte. \n");
    printf("Aucune monnaie a rendre. \n");
}


if (argent > choix ) {
    printf("Payement accepte. \n");
    monnaie_rendre = argent - choix ;

    
    printf("La monnaie a rendre est de %d centimes \n" , monnaie_rendre );
    

    piece2euros = monnaie_rendre / 200 ;
    printf("On va te rendre %d piece de 2 euros \n", piece2euros);
    monnaie_rendre = monnaie_rendre % 200 ; 

    piece1euros = monnaie_rendre / 100 ;
    printf("On va te rendre %d piece de 1 euros \n" , piece1euros);
    monnaie_rendre = monnaie_rendre % 100; 

    piece50centimes = monnaie_rendre / 50 ; 
    printf("On va te rendre %d piece de 50 centimes \n" , piece50centimes);
    monnaie_rendre = monnaie_rendre % 50; 

    piece20centimes = monnaie_rendre / 20 ;
    printf("On va te rendre %d piece de 20 centimes \n" , piece20centimes);
    monnaie_rendre = monnaie_rendre % 20 ;


    piece10centimes = monnaie_rendre / 10 ;
    printf("On va te rendre %d piece de 10 centimes \n" , piece10centimes);
    monnaie_rendre = monnaie_rendre  % 10 ;

     piece5centimes = monnaie_rendre / 5 ;
    printf("On va te rendre %d piece de 5 centimes \n" , piece5centimes);
    monnaie_rendre = monnaie_rendre  % 5 ;


    piece1centimes = monnaie_rendre / 1 ;
    printf("On va te rendre %d piece de 1 centimes \n" , piece1centimes);
    monnaie_rendre = monnaie_rendre  % 1 ;


}
return EXIT_SUCCESS ; 
}
