#include <stdio.h>
#include <assert.h>
#include <math.h>

float discriminant(int a, int b, int c) {
    int d = b * b - 4 * a * c;
    float res = 0;
    float res1 = 0;
    if (d<0) {
        return 0;
    } else if (d == 0) {
        res = -b / (2 * a);
    } else {
        res = (-b + sqrt(d)) / (2 * a);
        res1 = (-b - sqrt(d)) / (2 * a);
        return res;
        return res1;
    }
}

int afficheRacines (int a, int b,int c){
    int d = b * b - 4 * a * c;
    if (d<0){
        printf("le polynome n'a pas de racine réelle");
    }else{
        if (d=0){
            printf("le polynome admet une racine double %f", discriminant(a,b,c));
        }
        else{
            printf("le polynome admet deux racine%f",discriminant(a,b,c));
        }
    }
    return 0;
}
}

int main(){
    assert(discriminant(-7, 5, -1) == 0);
    assert(discriminant(4, 6, 1) == -0.0191 -1.309);
    assert(discriminant(4, 4, 1) == -0.5;
    assert(afficheRacine(-7,5,1) == "le polynome n'a pas de racine réelle");
    assert(afficheRacine(4,6,1) == "le polynome admet une racine double -0.5");
    assert(afficheRacine(4,6,1) == "le polynome admet deux racine -0.0191 -1.309");
    
    return 0;   
}
