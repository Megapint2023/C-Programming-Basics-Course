/* Kokonaislukumuuttujan käyttö */

#include <stdio.h>
int main()
{
  int x, y;

  x = 654;    /* = -merkki on sijoitusoperaattori */
  y = -112; 
  printf("X:n arvo on %d\n", x);
  printf("Y:n arvo on %i\n", y);
  getchar();
  return 0;
}

/* 
TEHTÄVÄ:
Muuttujien käyttäminen.

 Kopioi esimerkki-ohjelma kääntäjään sekä testaa sen toiminta.
 
 MUISTA ! Talletus C-muodossa !!!

 Muuta ohjelmaa seuraavasti:
 1. Lisää toinen kokonaisluku-muuttuja ja sijoita muuttujaan luku -112.
 2. Näytä käyttäjälle molemmat luvut käyttäen ohjainmerkkejä %d ja %i.
    (molemmat luvut näytetään kaksi kertaa) 

 Huomautus. Vanhemmilla C-kääntäjillä ohjainmerkeillä %d ja %i oli merkitystä.*/