#include <stdio.h>
#include <assert.h>
#include <math.h>

int discriminant(int a, int b, int c) {
    return (b * b) - 4 * a * c;
}

void afficheRacines(int a, int b, int c) {
    float res = 0;
    float res1 = 0;
    int d = discriminant(a,b,c);
    if (d<0) {
        printf("Pas de racine reelle");
    } else if (d == 0) {
        res = -b / (2 * a);
        printf("La racine double est %.2f", res);
    } else {
        res = (-b + sqrt(d)) / (2 * a);
        res1 = (-b - sqrt(d)) / (2 * a);
        printf("Les deux racines sont %.2f et %.2f",res,res1);
    }
}


int signeProduit(int a, int b) {

if (a*b == 0) 
{ 
return 0;
}

if (a*b<0) { 
    return -1;
}

return 1;
}


#include <stdio.h>
#define TFAMILLE 57.8
#define TADULTE 22.7
#define TENFANT 10.75

float prixEntree(int a, int e){
  
    float prix;
        if ((a>=2) && (e>=3)){
            prix = TFAMILLE + (a-2)*TADULTE + (e-3)*TENFANT;
        } 
        else{
            prix = a*TADULTE + e*TENFANT;
        }
        return prix;

}
 
   
