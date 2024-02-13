#include <stdio.h>

int main () {

float unssi;

  printf("Ohjelma muuttaa unssit grammoiksi.");
  printf("\n"); 

  printf("Ole hyvä syötä unssi arvo ja paina enter: ");
  scanf("%f", &unssi);

  float gram = unssi * 28.35;

 printf ("\n");
 printf ("%.2f unssia on %.2f grammaa\n",  unssi, gram);

 return 0;
}
/* Desimaali-osien näyttäminen

 Tehtävä
 1. Tee ohjelma joka muuttaa annetun unssi-määrän grammoiksi. Tallenna nimellä..
   
   1 unssi on 28.35 grammaa.
	
    laskukaava: gramma = unssi * 28.35
	
    Näytä gramma-määrä kahden desimaalin tarkuudella.
    
    */
