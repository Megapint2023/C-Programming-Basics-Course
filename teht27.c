
#include <stdio.h>

int jakolasku(int luku);                        
int main()

{ 
int paluuarvo, jaettava = 9;

printf("Anna jaettava numero: \n");
scanf("%d", &jaettava);
printf("Funktio Palautti: %d!\n", paluuarvo);


  getchar();
  return 0;
}

int jakolasku(int luku)

{
  int tulos;
  tulos = luku / 2;
  return tulos;
}
  
/*
 Tehtävä 
 Kopioi esimerkki-ohjelma, tallenna nimellä ja kokeile ohjelmaa.

 Muuta ohjelmaa seuraavasti:
 - vaihda aliohjelman nimeksi jakolasku
 - vaihda parametri-muuttujan nimeksi jaettava
 - muuta pääohjelmaa siten että jaettava-muuttujan arvo pyydetään ohjelman
   käyttäjältä pääohjelmassa
*/