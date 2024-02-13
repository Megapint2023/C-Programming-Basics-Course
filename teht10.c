#include <stdio.h>
#include <stdlib.h> // täytyy lisätä jotta flush toimii

int main()
{
  int numerot[3][6];
  
  char nimi1[50], nimi2[50], nimi3[50]; 

  printf("Ohjelma laske oppilaiden kokeiden yhteispisteet.");
  printf("\n"); 


  puts("Opiskelijan 1 nimi:\n");
  gets(nimi1);
  fflush(stdin);
  printf("\n"); 
  puts("Opiskelijan 2 nimi:\n");
  gets(nimi2);
  fflush(stdin);
  printf("\n"); 
  puts("Opiskelijan 3 nimi:\n");
  gets(nimi3);
  fflush(stdin);
  printf("\n"); 

  printf("Oppilaan 1 pisteet (koe1): ");
  scanf("%d", &numerot[0][0]);
  printf("Oppilaan 1 pisteet (koe2): ");
  scanf("%d", &numerot[0][1]);
  printf("Oppilaan 1 pisteet (koe3): ");
  scanf("%d", &numerot[0][2]);
  printf("Oppilaan 1 pisteet (koe4): ");
  scanf("%d", &numerot[0][3]);
  printf("Oppilaan 1 pisteet (koe5): ");
  scanf("%d", &numerot[0][4]);
  numerot[0][5] = numerot[0][0] + numerot[0][1] + numerot[0][2] + numerot[0][3] + numerot[0][4];
  printf("\n");

  printf("Oppilaan 2 pisteet (koe1): ");
  scanf("%d", &numerot[1][0]);
  printf("Oppilaan 2 pisteet (koe2): ");
  scanf("%d", &numerot[1][1]);
  printf("Oppilaan 2 pisteet (koe3): ");
  scanf("%d", &numerot[1][2]);
  printf("Oppilaan 2 pisteet (koe4): ");
  scanf("%d", &numerot[1][3]);
  printf("Oppilaan 2 pisteet (koe5): ");
  scanf("%d", &numerot[1][4]);
  numerot[1][5] = numerot[1][0] + numerot[1][1] + numerot[1][2] + numerot[1][3] + numerot[1][4];
  printf("\n");

  printf("Oppilaan 3 pisteet (koe1): ");
  scanf("%d", &numerot[2][0]);
  printf("Oppilaan 3 pisteet (koe2): ");
  scanf("%d", &numerot[2][1]);
  printf("Oppilaan 3 pisteet (koe3): ");
  scanf("%d", &numerot[2][2]);
  printf("Oppilaan 3 pisteet (koe4): ");
  scanf("%d", &numerot[2][3]);
  printf("Oppilaan 3 pisteet (koe5): ");
  scanf("%d", &numerot[2][4]);
  numerot[2][5] = numerot[2][0] + numerot[2][1] + numerot[2][2] + numerot[2][3] + numerot[2][4];
  printf("\n");

  printf("%s", nimi1);
  printf("\n");
  printf("Oppilaan yhteispisteet: ");
  printf("\n");
  printf("%d", numerot[0][5]);
  printf("\n");

  printf("%s", nimi2);
  printf("\n");
  printf("Oppilaan yhteispisteet: ");
  printf("\n");
  printf("%d", numerot[1][5]);
  printf("\n");
  
  printf("%s", nimi3);
  printf("\n");
  printf("Oppilaan yhteispisteet: ");
  printf("\n");
  printf("%d", numerot[2][5]);
  printf("\n");

  getchar();
  return 0;
}