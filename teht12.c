#include <stdio.h>

int main () {

float gram;

  printf("Ohjelma muuttaa grammat unsseiksi.");
  printf("\n"); 

  printf("Ole hyvä syötä gramma arvo ja paina enter: ");
  scanf("%f", &gram);

  float unssi = gram / 28.35;

 printf ("\n");
 printf ("%.2f grammaa on %.2f unssia\n",  gram, unssi);

 return 0;
}
/* Desimaali-osien näyttäminen

 Tehtävä

 2. Tee ohjelma joka muuttaa annetun gramma-määrän unsseiksi. Tallenna nimellä..
    
    laskukaava: unssi = gramma * (1 / 28,35)
	
    Näytä unssi-määrä yhden desimaalin tarkuudella. 
    
    
    */