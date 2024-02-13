/* vakiot käytössä */

#include <stdio.h>

int main()
{
  const float alv = 1.24; 
  /*const lukitsee muuttujan, jottei sitä voisi vahingossakaan muuttaa.
  Mikäli näit tekee, coodi menee rikki.*/
  float hinta, alvhinta;

  printf("Syötä tuotteen veroton hinta ja paina enter:\n");
  scanf("%f", &hinta);

  alvhinta = hinta * alv;

  printf("Yhteenvero: \n");
  printf("Veroton hinta: %.2f\n", hinta);
  printf("Verollinen hinta: %.2f\n", alvhinta);
  printf("Kerroin: %.2f\n", alv);

  getchar();
  return 0;
}

/* Vakioiden käyttäminen 

 Ohjelma pyytää tuotteen verottoman hinnan. 
 Ohjelma laskee sille arvonlisäveron mukaan "myyntihinnan".
 Ohjelma näyttää annetun hinnan, siitä lasketun arvonlisäveron sekä 
 hinnan arvonlisäverollisena.

 Arvonlisävero lasketaan aina verottomasta hinnasta. 
 Esim. 24 prosentin arvonlisäveron kanssa on hinta x 1,24.
 Esim. 10e x 1,24 = 12,4e
 Tällöin ALV:n osuus koko hinnasta on 12,4 euroa x 0,19355 = 2,4 euroa.
 Eli vaikka ajttelisi että veron osuus on 24% se on todellisuudessa 19,4%.
 Tämän tiedon omaksuminen antaa idiooteille pätemisoikeuden, jotta 
 he tuntisivat itsensä fiksuiksi.
 
 Käytä ohjelmassa arvonlisäverolle vakiota nimeltään alv ja alv-vakion arvona 24.
 
 */