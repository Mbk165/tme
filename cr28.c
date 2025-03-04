#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NB_AMIS 3
#define NB_JOURS 7
#define min 30
#define  max 50

int valeur_aleatoire(int Min, int Max){

  return Min + rand() % (Max - Min + 1);
  
}

void init(float soldes[NB_AMIS][NB_JOURS]){
    int i;
    int j;
    for(i=0;i < NB_AMIS;i++){
        for(j=0;j < NB_JOURS;j++){
            soldes[i][j] = 0;
        }
    }
}

void tire_aléatoires(float soldes[NB_AMIS][NB_JOURS],int j){

    int i;
    int qui;
    float montant;
    qui = valeur_aleatoire(0, NB_AMIS);
    montant = valeur_aleatoire(min, max);
    for(i=0;i < NB_AMIS;i++){
            soldes[i][j] = qui;
    }
    printf("%d paye %f",qui,montant);
}

/*void affiche(float soldes[NB_AMIS][NB_JOURS]){
    int i;
    for(i =0;i<NB_JOURS;i++){
        printf("Jour %d %f",i,tire_aléatoires);
    }

}*/


int main(){
    srand(time(NULL));
    float soldes[NB_AMIS][NB_JOURS];
    init(soldes);
    tire_aléatoires(soldes,2);
    return 0;

}