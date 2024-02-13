/* for-esimerkki, kymmenen lukua taulukkoon ja niiden tulostus */


#include <stdio.h>

int main()
{
  int x=1, rivi;
  float lukuja[10];
  float xtotal = 0;

  for (rivi = 0; rivi <= 9; rivi++) {
    printf("Anna %d. luku: \n", x);
    x++;
    scanf("%f",&lukuja[rivi]);
    xtotal = xtotal + lukuja[rivi];
  }
  
  for (rivi = 0; rivi <= 9; rivi++)
  {
  }  	
/*
 printf("Lukujen yhteissuma on: %.2f", xtotal); 
 */
 printf("\n");
 float keskiarvo = xtotal / 10; 
 printf("Annettujen lukujen keksiarvo on: %.2f", keskiarvo);


  getchar();
  return 0;
}

/*
float jokunumero;
float pinnat;
pinnat = 0;
jokunumero = 0;
    jokunumero + x = pinnat;
    scanf("%f"), &pinnat;
*/


/*
float total;
printf("\n");
total = lukuja[0] + lukuja[1] + lukuja[2] + lukuja[3] + lukuja[4] + lukuja[5] + lukuja[6] + lukuja[7] + lukuja[8] + lukuja[9];
printf("Lukujen summa on: %.2f", total);
printf("\n");
*/



/*
 for-lause, kymmenen lukua taulukkoon 

 Tehtävä 
 Lisää ohjelmaan for-lause joka laskee taulukkoon luettujen lukujen keskiarvon
 ja näyttää sen.
 
 Huom! Keskiarvo lasketaan liukuluku-muuttujaan.

 */