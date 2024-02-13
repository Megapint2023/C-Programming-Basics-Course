#include <stdio.h>

int main()
{
  int numerot[3][6];

  printf("Ohjelma laske oppilaiden kokeiden yhteispisteet.");

  printf("\n");

  printf("Anna oppilaan 1, kokeen 1 pisteet: ");
  scanf("%d", &numerot[0][0]);
  printf("Anna oppilaan 1, kokeen 2 pisteet: ");
  scanf("%d", &numerot[0][1]);
  printf("Anna oppilaan 1, kokeen 3 pisteet: ");
  scanf("%d", &numerot[0][2]);
  printf("Anna oppilaan 1, kokeen 4 pisteet: ");
  scanf("%d", &numerot[0][3]);
  printf("Anna oppilaan 1, kokeen 5 pisteet: ");
  scanf("%d", &numerot[0][4]);
  numerot[0][5] = numerot[0][0] + numerot[0][1] + numerot[0][2] + numerot[0][3] + numerot[0][4];

  printf("\n");

  printf("Anna oppilaan 2, kokeen 1 pisteet: ");
  scanf("%d", &numerot[1][0]);
  printf("Anna oppilaan 2, kokeen 2 pisteet: ");
  scanf("%d", &numerot[1][1]);
  printf("Anna oppilaan 2, kokeen 3 pisteet: ");
  scanf("%d", &numerot[1][2]);
  printf("Anna oppilaan 2, kokeen 4 pisteet: ");
  scanf("%d", &numerot[1][3]);
  printf("Anna oppilaan 2, kokeen 5 pisteet: ");
  scanf("%d", &numerot[1][4]);
  numerot[1][5] = numerot[1][0] + numerot[1][1] + numerot[1][2] + numerot[1][3] + numerot[1][4];

  printf("\n");

  printf("Anna oppilaan 3, kokeen 1 pisteet: ");
  scanf("%d", &numerot[2][0]);
  printf("Anna oppilaan 3, kokeen 2 pisteet: ");
  scanf("%d", &numerot[2][1]);
  printf("Anna oppilaan 3, kokeen 3 pisteet: ");
  scanf("%d", &numerot[2][2]);
  printf("Anna oppilaan 3, kokeen 4 pisteet: ");
  scanf("%d", &numerot[2][3]);
  printf("Anna oppilaan 3, kokeen 5 pisteet: ");
  scanf("%d", &numerot[2][4]);
  numerot[2][5] = numerot[2][0] + numerot[2][1] + numerot[2][2] + numerot[2][3] + numerot[2][4];

  printf("\n");

  printf("Oppilaan 1 viiden kokeiden yhteispisteet on: ");
  printf("\n");
  printf("%d", numerot[0][5]);
  printf("\n");

  printf("Oppilaan 2 viiden kokeiden yhteispisteet on: ");
  printf("\n");
  printf("%d", numerot[1][5]);
  printf("\n");
  
  printf("Oppilaan 3 viiden kokeiden yhteispisteet on: ");
  printf("\n");
  printf("%d", numerot[2][5]);
  printf("\n");

  getchar();
  return 0;
}

/*
 Muuta ohjelmaa seuraavasti:

 - Muuta käytettävän taulukon tyypiksi float ja 
   muuta taulukon kooksi 3 * 6.
   
 - Taulukkoon pyydetään kolmen oppilaan neljän kokeen koepisteet.
 
 - Ohjelma laskee taulukon viidenteen sarakkeeseen kokeiden yhteispisteet.
 
 - Lopuksi ohjelma näyttää kunkin oppilaan saamat koepisteet sekä 
   yhteispisteet yhden desimaalin tarkuudella.
*/