
#include <stdio.h>
#include <stdlib.h> 

int main()
{
  printf("Ohjelma laskee kokeiden perusteella oppilaalle arvosanan.\n");
  printf("Yhden kokeen pisteytys: 0-25 pistetta.\n");
  printf("Kokeita on yht: 4 kpl.\n");
  printf("Arvosanaksi saa: 0-3.\n");  
  printf("\n");

int salanumero = 100;
int vastaus;

  printf("Ennenkuin voit jatkaa -> vastaa kysymykseen.\n");
  printf("\n");
  puts("Mika on kokeiden yhteinen maksimipistemaara?: \n");
  scanf("%d", &vastaus); 

  if (vastaus != salanumero)
  {
    printf("ERROR! - Wrong anwser -> Restart the programm... \n");
    return 1; 
  }
  else
  {
  printf("Oikein! Nyt voit jatkaa ->\n");
  }
  printf("\n");

/* ENSIMMAINEN LOOP - OPPILAIDEN NIMET*/

int rivi; 
char nimet[4][50];

  for (rivi = 0; rivi < 4; rivi++)
  {
    printf("Syota uusi opiskelijan nimi: %d\n", rivi + 1);
    scanf("%s", &nimet[rivi]);
  }

    getchar(); // Tämä komento odottaa painallusta, ennenkun antaa ohjelman jatkaa eteenpäin //

/*Seuraavaksi tehaan pyyda pisteet / lue pisteet LOOP*/

  printf("\n");
  printf("KOKEIDEN PISTEET 0 - 25 \n");  
  printf("\n");

int koe = 0; 
int pisteet[4][4];

for (rivi = 0; rivi < 4; rivi++)
{
    for (koe = 0; koe < 4; koe++)
    {
   printf("OPPILAS: %s, (KOE%d) PISTEET:", nimet[rivi], koe + 1);
   scanf("%d", &pisteet[rivi][koe]);
 }
}

int y,total, arvosanat[4];

for(y = 0; y < 4; y++) {
  total = 0;
   for (koe= 0; koe < 4; koe ++) {
     total = total + pisteet[y][koe];

}

  if(total >= 0 && total <= 29) {
    arvosanat[y] = 0;
  } else if (total >= 30 && total <= 53) {
    arvosanat[y] = 1;
  } else if (total >= 54 && total <= 76) {
    arvosanat[y] = 2;
  } else if (total >= 77 && total <= 100) {
    arvosanat[y] = 3;
    } else {
     printf("ERROR: Virheellinen pistemäärä %s\n", nimet[y]);
     return 1;
    }
}

printf("OPPILAIDEN SUORITUSTEN LOPPUYHTEENVETO!\n");
printf("%-15s %-10s %-10s %-10s %-10s %-10s %-10s\n", "OPPILAS", "KOE1", "KOE2", "KOE3", "KOE4", "YHT:", "Arvosana");
for (int y = 0; y < 4; y++) {
    int total = 0;
    for (int koe = 0; koe < 4; koe++) {
        total += pisteet[y][koe];
    }

    printf("%-15s %-10d %-10d %-10d %-10d %-10d %-10d\n", nimet[y], pisteet[y][0], pisteet[y][1], pisteet[y][2], pisteet[y][3], total, arvosanat[y]);
}

    getchar();
    return 0;
}

