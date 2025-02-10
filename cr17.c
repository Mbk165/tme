#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NB_VALEURS 50
#define VMIN -20
#define VMAX 20

int valeur_aleatoire(int min, int max){
  /*Hyp: *min<=max*/

  return min + rand() % (max - min + 1);
  
}

void pos_neg_zero(int valeur, int *negatif, int *positif, int *zero) {
    if (valeur < 0) {
        (*negatif)++;
    } else if (valeur > 0) {
        (*positif)++;
    } else {
        (*zero)++;
    }
}

int main(){
  
  /* initialisation du générateur de nombres aléatoires */
  srand(time(NULL));
  int negatif = 0, positif = 0, zero = 0;

    printf("Valeurs générées :\n");
    for (int i = 0; i < NB_VALEURS; i++) {
        int val = valeur_aleatoire(VMIN, VMAX);
        printf("%d ", val);
        pos_neg_zero(val, &negatif, &positif, &zero);
    }

    printf("\n\nStatistiques :\n");
    printf("Nombres négatifs : %d\n", negatif);
    printf("Nombres positifs : %d\n", positif);
    printf("Nombres de zéros : %d\n", zero);
  
    
  return 0;
}