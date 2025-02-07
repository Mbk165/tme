#include <stdio.h>
#include <assert.h>

int jours(int nc, int ptotale, float pai){
    /*Hyp: 0<=pai<=100 */
    int c = 1;
    float pourcent = ((1.*c) / ptotale) * 100;
    int i = 0;
    while (pourcent <= pai){
        c = c + nc*c;
        pourcent = ((1.*c) / ptotale) * 100;
        i++;
    }
    //printf("nombre de jours pour que %.2f pourcent de la population soit contaminée = %d\n", pai, i);
    return i;
}

float pourcentage(int nc, int ptotale, int nj){
int c = 1;
    float pourcent = ((1.*c) / ptotale)*100;
    int i = 1;
    while (i <= nj){
        c = c + nc*c;
        pourcent = ((1.*c) / ptotale)*100;
        i++;
    } 
    if (pourcent>=100){
        pourcent = 100.00;
    }
    return pourcent;
}


int main(){
    assert(jours(5,10000,100.00) == 6);
    //assert(pourcentage(5,10000,2) == 0.36);
    pourcentage(5,10000,3);
    return 0;
}
