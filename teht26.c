/*DO WHILE LOOP JA FOR LOOP SAMASSA*/
#include <stdio.h>

float laske(float lista[5]);  
const int MAX = 5;     // TÄMÄ MUUTETTu float -> int

int main() {

  float lista[5], yht;
  int x = 0;


  do {
    printf("Anna %f pisteet: \n", x + 1); 
    scanf("%f", &lista[x]); 
    x++;
  } 
  while (x < MAX);

  yht = laske(lista);
  printf("\n Pisteet yht ovat: %f", yht);

  getchar();
  return 0;

}

float laske(float lista[]){
   float tulos = 0;
   for (int rivi = 0; rivi < MAX; rivi++) {
    tulos = tulos + lista[rivi];

   }
  return tulos;
}


 /*
 float-tyyppinen taulukko ja aliohjelma

 Tehtävä:
 Muuta ohjelma käyttämään float-tyyppistä tietoa. Lisää aliohjelmaan tulos-muuttujan
 sisällön esittäminen. 
 Mitä havaitsit ?
 Tutustu oppaan seuraavaan lukuun Aliohjelmat ja desimaaliluvut. 
 Korjaa tehtävän ohjelma toimivaksi.
 */
/*
Float table + call to function
Assignements:
Programm must ask for flot type values.
Fix programm and make it work correctly.
*/