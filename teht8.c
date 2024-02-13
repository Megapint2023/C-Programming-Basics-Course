
/* 
 Tehtävä
 - Ohjelma näyttää alekkain taulukon luvut.
 - Lukujen näyttämisen jälkeen ohjelma pyytää käyttäjältä rivin
   numeron sekä näyttää taulukossa kyseisellä rivillä olevan numeron.
*/

#include <stdio.h>

int main() {

  float ossi[] = {1.1, 1.2, 3.3, 3.4, 4.5};
  int rivi; 

  printf(" \n %.1f \n %.1f \n %.1f \n %.1f \n %.1f \n", ossi[0],ossi[1],ossi[2],ossi[3],ossi[4]);

  printf("\n");

  printf("Anna rivinro 1-5: ");
  scanf("%d", &rivi);

  printf("\n");

if (rivi == 1) {
  printf("Rivin 1 numero on %.1f", ossi[0]);
} else if (rivi == 2) {
  printf("Rivin 2 numero on %.1f", ossi[1]);
} else if (rivi == 3) {
  printf("Rivin 3 numero on %.1f", ossi[2]);
} else if (rivi == 4) {
  printf("Rivin 4 numero on %.1f", ossi[3]);
} else if (rivi == 5) {
  printf("Rivin 5 numero on %.1f", ossi[4]);
} else {
  printf("Error -> Annoit virheellisen rivinumeron.");
}

  getchar();
  return 0;
}


/* Tehtävää turha yrittää tehdä ilman looppia. (C) ohjelmoinnissa kun ohjelma 
kysyy jotain useasta vaihtoehdosta se on lähes aina tehtävä loopin avulla. 
Tehtävän annossa tai esimerkissä tästä ei mainita eikä viitata. Iso miinus. 
Itse tein "if -> else if statement" avulla. */