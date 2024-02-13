
/* PYRAMIDIN TILAVUUS LASKURI */
/* Ohjelma laskee pyramidin tilavuuden. */

#include <stdio.h>

int main()
{
  float tilavuus, sivu1, sivu2, korkeus;
	
  printf("Syötä pyramidin pohjan sivun1 pituus ja paina enter:");
  scanf("%f", &sivu1);

  printf("Syötä pyramidin pohjan sivun2 pituus ja paina enter:");
  scanf("%f", &sivu2);

  printf("Syötä pyramidin korkeus (HUOM! ei sivukolmion korkeutta!) ja paina enter:");
  scanf("%f", &korkeus);
  
  tilavuus = sivu1 * sivu2 * korkeus / 3;

  printf("\nPyramidin tilavuus on: %f\n", tilavuus);
  getchar();
  return 0;
}

/*Tehtävä:
 Tee ohjelma joka pyytää käyttäjältä pyramidin pohjan sivujen mitat ja pyramidin korkeuden. 
 Ohjelma laskee annetuilla tiedoilla pyramidin tilavuuden. 
 
 Pyramidin tilavuus laskukaava: 
     l * w * h
  V= ---------
        3
   l = pitkän sivun pituus (pohjan sivu1)
   w = lyhyen sivun pituus (pohjan sivu2)
   h = pyramidin korkeus (HUOM! ei sivukolmion korkeus!)

 ->
 Toteutus: 
 Tehdään ohjelma joka pyytää siis 3 arvoa, sillä muuta tietoa atähän ei tarvita.
 1. Anna pohjan sivun1 pituus ja paina enter.
 2. Anna pohjan sivun2 pituus ja paina enter.
 3. Anna pyramidin korkeus ja paina enter.

 */ 