#include <cini.h>

void carre(int a, int b2){

    int i;
    int x = a + b2;
    for (i=b2;i<=x;i++) {
        CINI_draw_pixel(i,b2, "blue");
        CINI_draw_pixel(b2, i, "red");
        CINI_draw_pixel(x, i, "black");
        CINI_draw_pixel(i, x, "green");
    }
}

void carres_remontant(int a, int b){
    CINI_open_window( 400, 400, "carré" );
    CINI_fill_window("white");
    int i=b;
    carre(a, b);
    while (){
        int i;
    int x = a + b2;
    for (i=b2;i<=x;i++) {
        CINI_draw_pixel(i,b2, "blue");
        CINI_draw_pixel(b2, i, "red");
        CINI_draw_pixel(x, i, "black");
        CINI_draw_pixel(i, x, "green");
    }
    }
}
int main() {
    carres_remontant(100,200);

    CINI_loop();
    return 0;
}
