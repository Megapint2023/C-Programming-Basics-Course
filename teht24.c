#include <stdio.h>

int main(void) 
{
  float R1, R2, R3;
  float Rkok;
  char vastaus;

  do
  { 
    printf ("RINNANKYTKENTÄLASKURI \n");
    printf ("Syota arvot R1 R2 ja R3: \n");
    scanf  ("%f %f %f", &R1, &R2, &R3);
    Rkok = 1/((1/R1) + (1/R2) + (1/R3));
    printf ("Vastaus = %.2f Ω",Rkok );
    printf ("\n");
    printf ("Lopeta ohjelma painamalla ESC tai L. (ESC/L) \n");
    getchar();
     vastaus = getchar();
  } while (vastaus != 'l' && vastaus != 27);
} 
