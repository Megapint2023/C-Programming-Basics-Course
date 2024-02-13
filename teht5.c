/* Liukulukumuuttujien käyttö */

#include <stdio.h>

int main()
{
  float Rkok;    /* Tämä muuttuja laskee sarjaankytkennän */
  float Rkok2; /* Tämä muuttuja laskee rinnankytkennän */
  float R1, R2, R3;     

  printf("Syötä R1 arvo ja paina enter:\n");
  scanf("%f", &R1);

  printf("Syötä R2 arvo ja paina enter:\n");
  scanf("%f", &R2);

  printf("Syötä R3 arvo ja paina enter:\n");
  scanf("%f", &R3);

  Rkok = R1 + R2 + R3;
  Rkok2 = 1/((1/R1) + (1/R2) + (1/R3));

  printf("Sarjaankytkennän arvo: %.2f\n", Rkok);
  printf("Rinnankytkennän arvo: %.2f\n", Rkok2);

  getchar();
  return 0;
}
/*
 Desimaaliluvut ja niiden käyttäminen
 
 Tehtävä 1 
 Kopioi esimerkki-ohjelma, talleta nimellä ja kokeile sen toimintaa. 
 Esimerkki-ohjelmaa pohjana käyttäen toteuta seuraavat ohjelmat.
 
 Ohjelma pyytää kolmen vastuksen R1, R2 ja R3 arvot ja laskee niiden sarjakytkennän arvon 
 sekä näyttää sen. 

Sarjaankytkentä:
Sarjaan kytkettyjen vastusten yhteinen resistanssi saadaan laskemalla yhteen vastusten resistanssit.
Rkok = R1 + R2 + R3 

 Lisää ohjelmaan rinnankytkennän arvon laskeminen ja näyttäminen. 

Rinnankytkentä:
Rinnankytkennän kaava ->
Rkok = 1/((1/R1) + (1/R2) + (1/R3));

 */
