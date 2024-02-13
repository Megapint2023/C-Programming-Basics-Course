#include <stdio.h>

int main()
{
  char ch;
 /* Vois tehdä tästä oikein monipuolisen laskurin, jossa kymmeniä vaihtoehtoha :)!*/
  printf("* VALITSE LASKUTOIMITUS: *\n");
  printf("1. Laske 3x vastuksen sarjaankytky.\n");
  printf("2. Laske 3x vastuksen rinnankytky.\n");
  printf("3. Laske virta, kahden jännitteen ja yhden resistantanssin arvojen avulla.\n");
  printf("-> To Be Continued <-\n");

  ch = getchar();


  switch(ch)
  {
    case '1':

      printf("Kolmen vastuksen R1, R2 ja R3 sarjaankytky valittu -> syota arvot:\n");
    float R1;
    float R2;
    float R3;
    float sarjaan;
       puts("Anna R1 arvo:");
       scanf("%f", &R1);
       puts("Anna R2 arvo:");
       scanf("%f", &R2);
       puts("Anna R3 arvo:");
       scanf("%f", &R3);
       sarjaan = R1 + R2 + R3;
       printf("%.2f", sarjaan);
       printf("\n");
       printf("Vastaus: %.2f Ω\n", sarjaan); // Ohm merkki C kielessä helposti saa laitettua vaan ns copy paste tekstinä
    break;

    case '2':
      printf("Kolmen vastuksen Res1, Res2 ja Res3 rinnankytky valittu -> syota arvot:\n");
    float Res1;
    float Res2;
    float Res3;
    float rinnan;
       puts("Anna Res1 arvo:");
       scanf("%f", &Res1);
       puts("Anna Res2 arvo:");
       scanf("%f", &Res2);
       puts("Anna Res3 arvo:");
       scanf("%f", &Res3);
       rinnan = 1/((1/Res1) + (1/Res2) + (1/Res3));
       printf("%f", rinnan);
       printf("\n");
       printf("Vastaus: %.2f Ω\n", rinnan);
    break;

    case '3':
      printf("Laske virta kun tiedetään 2 jannitteen sekä 1x vastuksen arvo. -> syota arvot:\n");
      float resistance;
      float voltage1;
      float voltage2;
      float voltage; 
      // instead of making long calc formula i first calc the diff between voltage1 - voltage2 
      // after this i devide voltage by resistance -> this is the the anwser 'current'
      float current;
       puts("Anna Resistanssin arvo:");
       scanf("%f", &resistance);
       puts("Anna janniteen yksi arvo:");
       scanf("%f", &voltage1);
       puts("Anna janniteen kaksi arvo:");
       scanf("%f", &voltage2);
       voltage = voltage1 - voltage2;
       current = voltage / resistance;
       printf("%f", current);
       printf("\n");
       printf("Vastaus: Virta I arvo on: %.2f \n", current);

      /*1 vastus ja 2 jännitettä -> laske virta*/
      /*ahden jännitteen välissä tietyllä resistannsilla kuluva virta*/
      /*2 Käyttäjä syöttää molemmat voltage1 ja voltage2 arvot sekä resistanssi1 arvon -> koodi laske virran */

      /*I = V/R*/
      /*virta = (jännite - jännite) / resistanssi */
      /*current = (voltage1 - voltage2) / resistance */
    break;

    default:
      printf("Not valid choise -> restart the programme.\n");
  }
  getchar();
  return 0;
}

/*
 switch-case  

 Muuta ohjelmaa seuraavasti:
 Kun valitaan numero 1, ohjelma kysyy sekä laskee kolmen vastuksen sarjakytkennän.
 Kun valitaan numero 2, ohjelma kysyy sekä laskee kolmen vastuksen rinnankytkennän.
 Kun valitaan numero 3, ohjelma kysyy kaksi jänniteen arvoa sekä vastuksen arvon ja laskee virran.

 Muuta päävalikon tekstit vastaamaan ohjelmaa.
 */