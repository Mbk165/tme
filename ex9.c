#include <cini.h>

void diagonale(int x){
    CINI_open_window( 400, 400, "diagonale" );
    int i;
    for (i=0;i<=x;i++) {
        CINI_draw_pixel(i, i, "white");
    }
}

int main() {
    diagonale(400);

    CINI_loop();
    return 0;
}