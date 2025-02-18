#include <stdio.h>
#include <assert.h>
#define taille 5

/*question 1 et 2*/

int indiceInsert(int tab[],int Taille,int nbE1, int el){
    /*nbE1 < taille*/
    if(nbE1 >= Taille){
        return -1;
    }
    int i;
    for(i = 0; i< nbE1;i++){
            if(tab[i]>el){
                return i;
            }
            if(tab[i] == el){
                return -1;
            }    
               
    }
    return nbE1;
}


int insertElt(int tab[],int el){
    if (indiceInsert(tab,taille,0,el) == -1){
        return 0;
    }
    else {return 1;
    }

}



int main(){
    int tab[1] = {0};
    indiceInsert(tab,taille,0,3);
    return 0;
}