#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Min -200
#define Max 300 

void init_temp(int temp[]){
    int i;
    for(i=0; i < 31;i++){
        temp[i] = (Min + rand() % (Max - Min + 1));
    }
}



float moy_temp(int temp[]){
    int i;
    float res = 0.0;
    for(i=0;i<31;i++){
        res = res +temp[i];
    }
    return (res)/31;
}

float temp_neg(int temp[]){
    int jour = 0;
    float res = 0.0;
    int i;
    for(i=0;i<31;i++){
        if (temp[i]< 0){
            jour++;
            res = res + temp[i];
        }
    }  
    if(jour == 0){
        printf("Aucune temperature au-dessous de zero");
    }
    return res/jour;
}




int main(){
    srand(time(NULL));
    int temp[31];
    init_temp(temp);
    int i;
    for(i=0; i<31; i++) {
        printf("%d ", temp[i]);
  }

    printf("%f ",moy_temp(temp));
    printf("%f",temp_neg(temp));
    return 0;
}
