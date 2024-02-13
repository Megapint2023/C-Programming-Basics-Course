 /* if-lauseen käyttö */
#include <stdio.h>

int main()
{
  const int salanumero = 1234;
  int luku;

  printf("Arvaa nelinumeroinen pinkoodi paina enter:\n");
  scanf("%d",&luku);
  
  if (luku == salanumero)
	printf("BINGO!\n");
  else
    printf("NO!! WRONG!!!\n");
  
  getchar();
  return 0;
}
 
 
 /*
 if-lause

 Tehtävä
 
 Kopioi esimerkki-ohjelma, tallenna nimellä  ja kokeile ohjelmaa.
 
 Muuta ohjelmaa siten että salanumero-vakion arvo on 1234.

 */