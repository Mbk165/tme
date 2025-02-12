#include <stdio.h>
#include <assert.h>

int echange(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c;
    return *a,*b;
}

int tri_croissant(int *a, int *b){
    if (*a > *b){
        return echange(a,b);
    } else{
        return *a; *b;
    }
}

int tri_3(int *a, int *b, int *c){
    tri_croissant(a,b);
    tri_croissant(b,c);
    tri_croissant(a,c);
    return *a; *b; *c;
}

int main(){
    int *a, *b, *c;
  
    printf("Saisissez les valeurs de a, b et c :\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Avant echange : a = %d, b = %d\n",a, b);
    
    echange(a,b);
    printf("Apres echange : a = %d, b = %d\n",a, b);
    
    tri_croissant(a,b);
    printf("Par ordre croissant : a = %d, b = %d\n", a, b);

    tri_3(a,b,c);
    printf("Apres tri : a = %d, b = %d, c = %d\n",a, b, c);
    
    return 0;
}
