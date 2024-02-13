
#include <stdio.h>

int aliohjelma(int taulukko[2][3]);
int main()

{
    int taulukko[2][3] = {{1, 2, 3}, {4, 5, 6}};
     aliohjelma(taulukko);
      getchar();
    return 0;

}
int aliohjelma(int taulukko[][3]) 

{

    printf("Aliohjelmassa \n\n");
    for (int rivi = 0; rivi < 2; rivi++) {
        for (int sarake = 0; sarake < 3; sarake++) {
            printf("%i ", taulukko[rivi][sarake]);
        }
        printf("\n");
    }

    return 0;
} 


/*
Taulukon välittäminen aliohjelmaan
 Tehtävänä on kokeilla voiko aliohjelmaan siirtää kaksiuloitteisen taulukon.
 Muokkaa taulukon kooksi 2 * 3 ja sijoita taulukkoon luvut 1 - 6.

*/