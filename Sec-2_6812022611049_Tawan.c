#include <stdio.h>
#include <string.h>

int main() {
    int start , stop;

    printf ("Enter start number: ");

    if  (scanf("%d ", &start) !=1 ) return 0;

    printf ("Enter stop number : ");

    if (scanf("%d" , &stop) !=1) return 0 ;

    printf ("start numbwris %d and stop number is %d\n", start, stop);
    printf ("-----------------\n\n");



    printf ("sequence from start to stop : ");
    if (start <= stop) {
        int i = start ;
        while (i<= stop) {

            printf ("%d" , i);
            if (i< stop) printf(" ") ;
            i++ ;

        }
    }else {
        int i = start;
        while (i >=stop) {

            printf ( "%d" , i) ;
            if (i > stop) printf ("") ;
            i-- ;

        }
    }
    printf ("\nthank you.\n") ;

    return 0 ;
    
}
