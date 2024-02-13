
#include <stdio.h>

int main()
{
  float ossi[] = {1.1, 1.2, 3.3, 3.4, 4.5};

  printf("%.1f \n %.1f \n %.1f \n %.1f \n %.1f \n", ossi[0],ossi[1],ossi[2],ossi[3],ossi[4]);

  printf("\n");


  return 0;
}

/* 
 - Muuta taulukko float-tyyppiseksi.
 %i ja %d EIVÄT toimi vaan ne täytyy vaihtaa %f
 - Muuta ohjelmaa siten, että taulukossa on luvut 1.2, 2.2, 3.3, 3.4 ja 4.5 .
 ->Koska lusvuissa on desimaaleja, täytyy käyttää float ja i/d sijasta f (printatessa).
 - Muuta taulukon näytölle tulostusta siten että ohjelma näyttää luvut alekkain.
 #Eli käytännössä kun runnaa niin terminaali näyttää 5nroa allekkain. 
*/