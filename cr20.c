#include <stdio.h>
#include <math.h>

int discriminant(int *a, int *b, int *c) {
    return ((*b) * (*b)) - 4 * (*a) * (*c);
}

int nb_racines_delta(int *a, int *b, int *c, float *delta, int *racines) {
    *delta = discriminant(*a,*b,*c)
    if (discriminant(&a,&b,&c)>0){ *racines = 2;}
    else if (discriminant(&a,&b,&c)=0){ *racines = 1;}
    else { *racines = 0;}
    return *delta, *racines;
}


int racines(int *a, int *b, int *c) {
    nb_racines_delta(*a,*b,*c,*delta,*racines);
    float rac1,rac2;
    if (*racines = 2){
        rac1 = (-b + sqrt(*delta)) / (2 * a);
        rac2 = (-b - sqrt(*delta)) / (2 * a);
    }else if (*racines = 1){
        rac1 = -b / (2 * a);
    }
    return *racines, rac1, rac2;
}

int main(){1.*
   int a, b, c;
   int nb_rac; 
   float rac1, rac2;
  
   printf("Entrez les coefficients a (!= 0) b et c du polynome :\n");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
  
   printf("valeur de delta : %d\n", &delta);
   nb_rac = racines(&a,&b,&c);
   if (nb_rac == 2){
      printf("Le polynome a 2 racines : %.3f et %.3f\n", rac1, rac2);
   }
   if (nb_rac == 1){
      printf("Le polynome a 1 racine double : %.3f\n", rac1);
   }
   if (nb_rac == 0){
      printf("Le polynome n'a pas de racine reelle.\n");
   }
   return 0;
}