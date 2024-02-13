
 /*
 TAULUKON SIIRTÄMINEN
*Call to function eli funktio muuttuja, joka matkustaa molempien ohjelmatason 
välillä ja siirtää tietoaa*
-Sen koko on 2 * 3

TEHTÄVÄT:
-Create 1D table in main programme size 6.
-move 2d table's first row data -> to 1d table in 'main programme'.
-move 2d table's second row data -> to 1d table in 'main programme'.
-Show the 1D table tada in 'aliohjelma'.
STATUS: VIELÄ ON TARKISTETTAVA
 */

#include <stdio.h>

int aliohjelma(int table[2][3]);
int main()
{         

    int tableA[6];  /* 1D table SIZE 6 */
    printf("\n");   

    int tableB[2][3] = {{1, 2, 3}, {4, 5, 6}};  /* 2D table SIZE 3 from teht 23 */
    printf("\n");

    aliohjelma(tableB);
    getchar(); 
    return 0;

}

int aliohjelma(int table[2][3]) 

{
    printf("Aliohjelmassa \n\n");
    for (int rivi = 0; rivi < 2; rivi++) {
        for (int sarake = 0; sarake < 3; sarake++) {
            printf("%i ", table[rivi][sarake]);
        }
        printf("\n");
    }
    return 0;
}
