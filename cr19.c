#include <stdio.h>
#define VAL1 2
#define VAL2 7
#define VAL3 5
#define VAL4 9


void min_max(int a, int *min, int *max) {
    /*min<=max*/
    if (a < *min){
        *min = a;
    } else {
        if ( a>*max){
            *max = a;
        }
    }
}

void stats (int v1, int v2, int v3, int v4, int *min, int *max, float *moy) {
    if (v1<=0){
        *min=-1;
        *max=-1;
        *moy=-1;
    }else if ((v1>0) && (v2>0) && (v3>0) && (v4>0)) {
        *moy=(1.*(v1+v2+v3+v4)) / 4;
        min_max(v1,&v2,&v3);
        min_max(v4,&v2,&v3);
        *min= v2;
        *max= v3;
    }else if ((v1>0) && (v2>0) && (v3>0) && (v4<=0)) {
        *moy= (1.*(v1+v2+v3)) / 3;
        min_max(v1,&v2,&v3);
        *min= v2;
        *max= v3;  
    }else  if ((v1>0) && (v2>0) && (v3<=0)){
        *moy= (1.*(v1+v2))/2;
        if(v1<v2){ *min = v1; *max=v2;}
        else{ *min=v2; *max=v1;}
    }else  if ((v1>0) && (v2<=0)){
        *min=v1;
        *max=v1;
        *moy=v1;
    }
}

void afficher_resultat(float moyenne, int min, int max) {
  printf("max = %d, min = %d, moy = %.2f\n", max, min, moyenne);
}


int main() {
   int min = 3, max = 8; 
   int a, b, c, d;
   float moy;
  
   printf("min = %d, max = %d. Saisissez une valeur entiere :\n", min, max);  
   scanf("%d", &a);  
   min_max(a, &min,&max);
   printf("La plus grande des 3 valeurs est %d, la plus petite %d.\n", max, min);  

   printf("Saisissez trois autres valeurs entieres :\n");  
   scanf("%d", &b);  
   scanf("%d", &c);  
   scanf("%d", &d);  
   
   stats(a,b,c,d, &min,&max,&moy);
   afficher_resultat(moy, min, max);
   return 0;
}