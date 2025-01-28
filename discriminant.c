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

int main(){
    assert(discriminant(-7, 5, -1) == 0);
    assert(discriminant(4, 6, 1) == -0.0191 -1.309);
    assert(discriminant(4, 4, 1) == -0.5;
    return 0;   
}