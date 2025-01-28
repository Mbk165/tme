#include <stdio.h>
#include <assert.h>

#define TA 22.7
#define TE 10.75
#define TEMOINS5 0
#define TF 57.80

float prixEntree(int a, int e) {
    /*Hypotheses: */
    float prix;
    if ((a>=2) && (e>=2)){
        prix = TF + (a-2)*TA + (e-2)*TE;
    } 
    else{
        prix = a*TA + e*TE;
    }
    return prix;
}

int main(){
    assert(prixEntree(2,3) == 57.80);
    assert(prixEntree(2,2) == 57.80);
    assert(prixEntree(2,1) == 56.15);
    assert(prixEntree(1,3) == 54.95);
    return 0;   
}