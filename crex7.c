#include <stdio.h>
#include <assert.h>

int signeProduit(int a, int b){
    if (a*b == 0) {
        return 0;
    }else {
        if (a*b < 0) {
            return -1;
        } else {
            return 1;
        }
    }
}

int main(){
    assert(signeProduit(1,0) == 0);
    assert(signeProduit(-1,1) == -1);
    assert(signeProduit(1,2) == 1);
}