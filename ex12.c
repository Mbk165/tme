#include <stdio.h>
#include <assert.h>

int position(int a, int b, int c, int d){
    int y = a*c + b;
    if (d < y) {
        return -1;
    }else { if (d == y{
        return 0;
    }else{
            return 1;
        }
    }
}


int main(){
    printf("%d",position(1,2,3,4));
    return 0;
}
