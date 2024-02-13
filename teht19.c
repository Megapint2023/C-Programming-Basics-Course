/* lasketaan sataan kymmenen välein */

#include <stdio.h>

int main()
{
  int x;

  for (x=100; x>=0; x = x - 10)
    printf("Arvo on: %d\n", x);

  getchar();
  return 0;
}

/*
 for-lause, sadasta alaspäin 

 Tehtävä 
 Kopioi esimerkki-ohjelma, tallenna nimellä  ja kokeile ohjelmaa.
 
 Muuta ohjelman for-lausetta siten että, ensin tulostuu 100 numero,
 pienenee 10 välein ja viimeisenä lukuna tulostuu 0.
 */