/* Liukulukumuuttujien käyttö */

#include <stdio.h>

int main()
{

  float R1, R2, R3, R4, U1, U2, Ukok, Rkok1, Rkok2, V;     

  printf("Syötä R1 vastuksen arvo ja paina enter:\n");
  scanf("%f", &R1);

  printf("Syötä R2 vastuksen arvo ja paina enter:\n");
  scanf("%f", &R2);

  printf("Syötä R3 vastuksen arvo ja paina enter:\n");
  scanf("%f", &R3);

  printf("Syötä R4 vastuksen arvo ja paina enter:\n");
  scanf("%f", &R4);

  printf("Syötä U1 jännitteen arvo ja paina enter:\n");
  scanf("%f", &U1);

  printf("Syötä U2 jännitteen arvo ja paina enter:\n");
  scanf("%f", &U2);

  Ukok = U1 - U2;
  Rkok1 = 1/((1/R1) + (1/R2) + (1/R3));
  Rkok2 = Rkok1 + R4;
  V = Ukok / Rkok2;

  printf("Vastusten läpi kulkeva virta on: %.2f\n", V);

  getchar();
  return 0;
}

/*
 Tehtävä 2 
 Tee ohjelma joka kysyy alla olevan kytkennän vastusten arvot sekä jännitteille arvot.
 Ohjelma laskee vastusten läpi kulkevat virrat.
 Talleta nimellä teht3B.
 
 TETOUTUS:
Kuvasta huomaa että resistanssit R1, R2 ja R3 ovat rinnankytkettyjä ja R4 sarjaan niinden jälkeen.
 -Ohms law-
 V = IR
 V= Voltage / JÄNNITE
 I= Current / virta
 R= Resistace / resistanssi

 VIRTA = RESISTANSSIT / JÄNNITE
 V = I/R
 
 TOTEUTUS:
 Ohjelma kysyy seuraavat arvot:
 R1
 R2
 R3
 R4
 U1
 U2
->
Laskee ja näyttää vastusten 'läpi kulkeva virta'.
 */
