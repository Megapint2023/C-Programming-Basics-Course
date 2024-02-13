/* for-esimerkki, kymmenen lukua taulukkoon ja niiden tulostus */
#include <stdio.h>

int main()
{
  int x=1, rivi;
  float lukuja[10];
  int arvosanat[4];

  for (rivi = 0; rivi < 10; rivi++)
  {
    printf("Anna %d. luku: \n", x++;
    scanf("%f",&lukuja[rivi]);
  }

  printf("\nTulostetaan annetut luvut:\n");
  for (rivi = 0; rivi < 10; rivi++)
  {
    printf("%.2f  \n", lukuja[rivi]);
  }  	
  
  getchar();
  return 0;
}

/*LOOP JOKA MÄÄRITTÄÄ OPPILAIDEN ARVOSANAT*/
// tässä taulukossa 4xdataa: arvosanat 0,1,2 ja 3
int arvosanat[4];


/*WAS UNABLE TO SOLVE THE LAST PART OF THE CODE*/
for (N = 0; N < 4; N++) {
    int total = 0;
    for (koe = 0; koe < 4; koe++) {
      total = total + pisteet[N][koe];
    }
                   
        if(total >= 0 && total <= 29) {
              arvosanat[N] = 0;
       } else if(total >= 30 && total <= 53){
              arvosanat[N] = 1;
       } else if(total >= 54 && total <= 76){
              arvosanat[N] = 2;
       } else if(total >= 77 && total <= 100){
              arvosanat[N] = 3;
       } else {
            printf("ERROR: Virheellinen pistemäärä.%s \n", nimet[N]);
            return 1;
       }
 }
