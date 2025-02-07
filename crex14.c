#include <stdio.h>
#include <assert.h>

#define TFAMILLE 57.8
#define TADULTE 22.7
#define TENFANT 10.75


float prixEntree(int na, int ne){
 float prix = 0;
    while (na >= 2 && ne >= 2) {
        if (na >= 2 && ne >= 3) {
            prix = prix  + TFAMILLE;
            na = na -2;
            ne = ne - 3;
        } else if (na >= 2 && ne == 2) {
            prix = prix + TFAMILLE;
            na = na -2;
            ne = ne -2;
        } else {
            break;
        }
    }
    prix =prix + na * TADULTE;
    prix = prix + ne * TENFANT;
    return prix;
}




/*float prixEntree(int na, int ne){
     float prix;
    if ((na>=2) && (ne>=3)){
        prix = TFAMILLE + (na-2)*TADULTE + (ne-3)*TENFANT;
    } 
    else{
        prix = na*TADULTE + ne*TENFANT;
    }
    return prix;
} */

int main() {
  //int nb_a = 2, nb_e = 3;
  
  /*scanf("%d",&nb_a);
  scanf("%d",&nb_e);
  
  printf("(%d adulte(s), %d enfant(s)) = %.2f livres\n",nb_a,nb_e,prixEntree(nb_a,nb_e));*/
  printf("%.2f \n",prixEntree(2,3));
  
  return 0;

}
