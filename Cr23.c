#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Min -200
#define Max 300 

void init_temp(int temp[]){
    int i;
    for(i=0; i <= 31;i++){
        temp[i] = (Min + rand() % (Max - Min + 1));
    }
}

int main(){
    int temp[31];
    init_temp(temp);
    int i;
    for(i=0; i<=31; i++) {
        printf("%d ", temp[i]);
  }
     return 0;
}