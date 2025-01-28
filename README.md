# tme
https://prod.liveshare.vsengsaas.visualstudio.com/join?AD1A534E8547DBA9EF5B7708097E29CE2967
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
