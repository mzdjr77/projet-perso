#include <stdio.h>
#include <stdlib.h>


int main (void){
    int notes[10];
    int i , note_meilleur , somme = 0 ;
    int  note_plusmauvaise , etudiant_admis , etudiant_nonadmi; 
    int meilleur_etudiant = 1 ;
    float moyenne ;

printf(" ===== NOTES ===== \n");
// liste note etudiant
for(i = 0 ; i < 10 ; i ++){
    printf("Note etudiant %d : " , i + 1);
    scanf("%d" , &notes[i]);
}
// calcul somme note
for(i = 0 ; i < 10 ; i++){
    somme += notes[i];
}
// calcul note meilleur
note_meilleur = notes[0];
for(i=1 ; i < 10 ; i++){
    if(notes[i] > note_meilleur){
        note_meilleur = notes[i];
    }
}
// calcul note plus faible 
note_plusmauvaise = notes[0];
for(i=1 ; i < 10 ; i++){
    if(notes[i] < note_plusmauvaise){
        note_plusmauvaise = notes[i];
    }
}
// calcul etudiant admis 
etudiant_admis = 0;
for(i=0 ; i < 10 ; i++){
    if(notes[i] >= 10){
        etudiant_admis++ ; 
    }
}
// calcul etudiant non admis 
etudiant_nonadmi = 0;
for(i=0 ; i < 10 ; i++){
    if(notes[i] < 10){
        etudiant_nonadmi++ ; 
    }
}
//calcul note meilleur etudiant 
note_meilleur = notes[0];

for(i = 1; i < 10; i++){
    if(notes[i] > note_meilleur){
        note_meilleur = notes[i];
        meilleur_etudiant = i + 1;
    }
}

printf("\n\n");
printf(" ===== BILAN ===== \n");
moyenne = somme / 10.0;
printf("Moyenne : %.2f \n" , moyenne);
printf("Note Meilleur : %d\n" , note_meilleur);
printf("Plus mauvaise note : %d\n" , note_plusmauvaise);
printf("Etudiants admis : %d\n" , etudiant_admis);
printf("Etudiants non admis : %d\n" , etudiant_nonadmi);
printf("Meilleur note obtenues par l'etudiant %d\n" ,meilleur_etudiant );
return EXIT_SUCCESS ;
}