/* do_while käyttö */

#include <stdio.h>

int main()
{
  int x = 10;

  do
  {
    printf("%d\n", x--);
  }
  while(x >= 0);

  getchar();
  
  return 0;
}


/*

 do-while 

 Tehtävä 
 Kopio esimerkki kääntäjään, tallenna nimellä ja kokeile ohjelmaa.
 
 Muuta ohjelma näyttämään numerot 10:stä 1:seen.
*/