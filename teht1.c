
/* Ohjelma laskee tasasivuisen pyramidin pinta-alan. */

#include <stdio.h>

int main()
{
  float ala, sivu, korkeus;
	
  printf("Syötä pyramidin pohjan sivun pituus ja paina enter:");
  scanf("%f", &sivu);

  printf("Syötä pyramidin sivukolmion korkeus ja paina enter:");
  scanf("%f", &korkeus);
  
  ala = sivu * sivu + (4 * korkeus / 2);

  printf("\nPinta-ala on %f\n", ala);

  getchar();
  return 0;
}

/*Tehtävä 

 Tee ohjelma joka pyytää käyttäjältä pyramidin pohjan sivujen mitat ja korkeuden. 
 Ohjelma laskee annetuilla tiedoilla pyramidin tilavuuden. 
 
 Pyramidin pinta-ala = pohjan pinta-ala + 4 * sivukolmion pinta-alaa.
 Esim. Jos pohjan sivun pituus on 3cm ja sivukolmion korkeus 6cm.
 ->
 Pinta-ala A = 3cm * 3cm + 4 * (3cm * 6cm /2).

 Toteutus: 
 Teen ohjelman joka pyytää siis 2 arvoa, sillä muuta tietoa atähän ei tarvita.
 1. Anna pohjan sivun pituus ja paina enter.
 2. Anna sivukolmion korkeus ja paina enter.

 */ 