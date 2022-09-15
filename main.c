#include <stdio.h>
#include <stdlib.h>
int* saisie_affiche(int taille){


    int T[taille] , i;

    printf ("\n   saisir les %d elements du tableau:\n", taille);
    for ( i = 0 ; i < taille ; i++ ){
        int e = i+1;
        printf ("\n  element %d: ",e);
        scanf ("%d",&T[i]);
    }
    for ( i = 0 ; i < taille ; i++ ){
        printf ("       %d",T[i]);
    }
    printf ("\n   le tableau triee en ordre croissant: \n");
    return T;
}

tri_ord_cro(int T[100],int taille){

    int i ,  j , temp  ;


        for ( i = 0 ; i<taille ; i++ ){

            for ( j = i ; j<taille ; j++ ){
                if ( T[i] > T[j] ){
                    temp = T[i];
                    T[i] = T[j];
                    T[j] = temp;

            }

        }
    }
    for ( i = 0 ; i<taille ; i++ ){
        printf ("       %d",T[i]);
    }
}


int main () {
    int N;
    printf ("\n       donner la taille de tableau: ");
    scanf ("%d",&N);
    int *T;
    T=saisie_affiche(N);
    for ( int i = 0 ; i<N ; i++ ){
        printf ("       %d ",*(T+i));
    }
    tri_ord_cro(T,N);

}
