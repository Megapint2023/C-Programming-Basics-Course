/*O ppilaiden kokeiden pisteiden laskumasiina by A.R. */

#include <stdio.h>
#include <stdlib.h> //  töytyy lisätä jotta fflush() toimii

int main()
{
  int numerot[3][6];
  char nimi1[50], nimi2[50], nimi3[50]; 

  printf("Ohjelma laskee oppilaiden arvosanan yhteispisteiden perusteella.\n");
  printf("Yhden kokeen pisteytys: 0-25 pistetta.\n");
  printf("Kokeita on yht: 4 kpl.\n");
  printf("Arvosanaksi saa: 0-3.\n");  
  printf("\n");

/*Ensimmäinen kysymys, sitä varten että käyttäjä lukee ja ymmärtää ohjelman idean.*/
/*Täytyy syöttää arvoksi: '100' ja painaa enter.*/
/*Muuten ei pääse eteenäin.*/

int salanumero = 100;
int vastaus;

  printf("Ennenkuin voit jatkaa -> vastaa kysymykseen.\n");
  printf("\n");
  puts("Paljonko on oppilaan *neljan* kokeen kokonais maksimipistemaara?: \n");
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
  fflush(stdin);


  puts("Anna ensimmaisen oppilaan nimi:\n");
  scanf("%s", nimi1);
  fflush(stdin);
  printf("\n"); 
  puts("Anna toisen oppilaan nimi:\n");
  scanf("%s", nimi2);
  fflush(stdin);
  printf("\n"); 
  puts("Anna kolmannen oppilaan nimi:\n");
  scanf("%s", nimi3);

  
  fflush(stdin);
  printf("\n"); 
  printf("\n"); 

  printf("%s nimisen oppilaan pisteet (koe1): ", nimi1);
  scanf("%d", &numerot[0][0]);
  if (numerot [0][0] < 0 || numerot [0][0] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }

  printf("%s nimisen oppilaan pisteet (koe2): ", nimi1);
  scanf("%d", &numerot[0][1]);
    if (numerot [0][1] < 0 || numerot [0][1] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }

  printf("%s nimisen oppilaan pisteet (koe3): ", nimi1);
  scanf("%d", &numerot[0][2]);
    if (numerot [0][2] < 0 || numerot [0][2] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }
  printf("%s nimisen oppilaan pisteet (koe4): ", nimi1);
  scanf("%d", &numerot[0][3]);
    if (numerot [0][3] < 0 || numerot [0][3] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }

  numerot[0][4] = numerot[0][0] + numerot[0][1] + numerot[0][2] + numerot[0][3];
         printf("\n");
         printf("%s", nimi1);
         printf("\n");
         printf("Oppilaan yhteispisteet: ");
         printf("%d", numerot[0][4]);
         printf("\n");


int arvosana1;
       if(numerot[0][4] > 0 && numerot[0][4] < 30) 
        arvosana1 = 0;
  else if(numerot[0][4] > 29 && numerot[0][4] < 53)
        arvosana1 = 1;
  else if(numerot[0][4] > 52 && numerot[0][4] < 76)
        arvosana1 = 2;
  else if(numerot[0][4] > 75 && numerot[0][4] < 101)
        arvosana1 = 3;
  else 
        printf("\n");  

         fflush(stdin);
         printf("\n"); 
/* OPPILAS 2*/
  printf("%s nimisen oppilaan pisteet (koe1): ", nimi2);
  scanf("%d", &numerot[1][0]);
    if (numerot [1][0] < 0 || numerot [1][0] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }
  printf("%s nimisen oppilaan pisteet (koe2): ", nimi2);
  scanf("%d", &numerot[1][1]);
    if (numerot [1][1] < 0 || numerot [1][1] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }
  printf("%s nimisen oppilaan pisteet (koe3): ", nimi2);
  scanf("%d", &numerot[1][2]);
    if (numerot [1][2] < 0 || numerot [1][2] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }
  printf("%s nimisen oppilaan pisteet (koe4): ", nimi2);
  scanf("%d", &numerot[1][3]);
    if (numerot [1][4] < 0 || numerot [1][4] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }
  numerot[1][4] = numerot[1][0] + numerot[1][1] + numerot[1][2] + numerot[1][3];
         printf("\n");
         printf("%s", nimi2);
         printf("\n");
         printf("Oppilaan yhteisnimisen oppilaan pisteet:: ");
         printf("%d", numerot[1][4]);
         printf("\n");

   int arvosana2;
       if(numerot[1][4] > 0 && numerot[1][4] < 30) 
        arvosana2 = 0;
  else if(numerot[1][4] > 29 && numerot[1][4] < 53)
        arvosana2 = 1;
  else if(numerot[1][4] > 52 && numerot[1][4] < 76)
        arvosana2 = 2;
  else if(numerot[1][4] > 75 && numerot[1][4] < 101)
        arvosana2 = 3;
  else 
        printf("\n");  
         
         fflush(stdin);
         printf("\n"); 
/*OPPILAS 3*/

  printf("%s nimisen oppilaan pisteet (koe1): ", nimi3);
  scanf("%d", &numerot[2][0]);
    if (numerot [2][0] < 0 || numerot [2][0] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }
  printf("%s nimisen oppilaan pisteet (koe2): ", nimi3);
  scanf("%d", &numerot[2][1]);
    if (numerot [2][1] < 0 || numerot [2][1] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }
  printf("%s nimisen oppilaan pisteet (koe3): ", nimi3);
  scanf("%d", &numerot[2][2]);
    if (numerot [2][2] < 0 || numerot [2][2] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }
  printf("%s nimisen oppilaan pisteet (koe4): ", nimi3);
  scanf("%d", &numerot[2][3]);
    if (numerot [2][3] < 0 || numerot [2][3] > 25) {
      printf("ERROR! -> Virheellinen pistemaara, kelpaava arvo on: 0 ja 25 valilta. \n");
      return 1; 
    }
  numerot[2][4] = numerot[2][0] + numerot[2][1] + numerot[2][2] + numerot[2][3];
         printf("\n");
         printf("%s", nimi3);
         printf("\n");
         printf("Oppilaan yhteispisteet: ");
         printf("%d", numerot[2][4]);
         printf("\n");
         
    int arvosana3;
       if(numerot[2][4] > 0 && numerot[2][4] < 30) 
        arvosana3 = 0;
  else if(numerot[2][4] > 29 && numerot[2][4] < 53)
        arvosana3 = 1;
  else if(numerot[2][4] > 52 && numerot[2][4] < 76)
        arvosana3 = 2;
  else if(numerot[2][4] > 75 && numerot[2][4] < 101)
        arvosana3 = 3;
  else 
        printf("\n"); 
         
 /*LOPPUYHTEENVETO*/
 /*Nyt teen vielä loppuun kaikista syötetyistä ja lasketuista tiedoista taulukko*/
 /*Tarkoitus tehdä 3 riviä ja 7 saraketta */
 printf("\n");

 char loppuveto[3][7][50];
 printf("OPPILAIDEN PISTEET JA LOPPUYHTEENVETO:");
 printf("\n");
 printf("%-10s %-6s %-6s %-6s %-6s %-6s %-10s \n", "Oppilas:", "koe:1", "koe:2", "koe:3", "koe:4", "YHT:", "Arvosana:");
 printf("\n");
 printf("%-10s %-6d %-6d %-6d %-6d %-6d %-10d \n", nimi1, numerot[0][0], numerot[0][1], numerot[0][2], numerot[0][3], numerot[0][4], arvosana1);
 printf("\n");
 printf("%-10s %-6d %-6d %-6d %-6d %-6d %-10d \n", nimi2, numerot[1][0], numerot[1][1], numerot[1][2], numerot[1][3], numerot[1][4], arvosana2);
 printf("\n");
 printf("%-10s %-6d %-6d %-6d %-6d %-6d %-10d \n", nimi3, numerot[2][2], numerot[2][1], numerot[2][2], numerot[2][3], numerot[2][4], arvosana3);
 printf("\n");

  getchar();
  return 0;
}

/*
   
 Tehtävä

 - lisää arvosanan antavat if-lauseet jokaisen opiskelijan kohdalla siten että ne sijaitsevat 
   yhteispisteet laskevan-osan alapuolella.
 - yhteispisteet pitäisi olla taulukoissa sarakkeessa 4, joten if-lauseissa tutkitaan ko sarakkeita 
   kunkin oppilaan kohdalla.
 - arvosana pitää sijoittaa taulukoissa kunkin oppilaan kohdalla sarakkeeseen 5.
 - lisää arvosanojen näyttäminen, arvosanat on näytettävä kokonaislukuna (%.0f).
 - kokeile ohjelman toimintaa kun neljän kokeen maksimipisteet voivat olla yhteensä 100.

 3. Lisätehtävä
 Lisää ohjelmaan neljän kokeen maksimi-yhteispisteiden kysymimen. Muuta ohjelmaa siten että arvosana-automaatti
 toimii edelleen oikein. (vinkki: kyse on prosenttilaskujen soveltamisesta)
 Aseta lopputulostukseen tulostuskentänleveyden asetukset siten että, 
 - koepisteet tulostuu 5 merkin, yhteispisteet 6 merkin ja arvosana 1 merkin kenttiin. 
 
 Lopputuloste voisi näyttää seuraavalle:
 Maisa  10.0  15.0  25.0  30.0   80.0  1
 Kaisa  23.0  34.0  45.0  20.0  122.0  2
 Raisa  45.0  45.0  40.5  10.0  140.5  2

 TOTEUTUS:
 Koodaan kokeiden määrän yht 4 kpl ja max pisteet 100.
 Käyttäjän on pakko lukea alkuohjeet.
 Alussa on salakysymys joka ratkeaa vain lukemalla ohjeet.
 Puts gets komennoissa poistin "gets" komento kokonaan pois.
 Se on todella huono ja bugittaa terminaalin, pakottaen ohjelmaa hyppimään rivien yli.
 Tämä ei johdu koodivirheistä vaan, varoitus/vikailmoitusviesteistä ITSE TERMINAALISSA ohjelman toiminna AIKANA!
 Tätä ei pysty korjaamaan.
 Gets korvattu -> scanF.
 Koodasin ohjelman mah käyttäjätstävälliseksi ja selkeäksi.
 Alussa on selkeät ohjeet ja tarkistuskysymys.
 Kun käyttäjä syöttää oppilaiden nimet -> ohjelma tunnistaa ne myös jatkossa.
 Ohjelma osaa pyytää nimetyille oppilaille 4 kokeen pisteet. 
 Ohjelma jatkuu selkeästi ja pyytää juuri tämän nimisen oppilaan tietoja.
 Koodattu niin että käyttäjä varmasti syöttää oikelta väliltä pisteet 0-25.
*/