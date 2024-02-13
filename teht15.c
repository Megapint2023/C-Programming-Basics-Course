#include <stdio.h>

int main()
{
  int luku1;
  printf(" Syota kokeen pisteet '1 - 100': ");
  scanf("%d",&luku1);

 
  if(luku1 > 0 && luku1 < 30)
    printf("Arvosana on: 0");
  else if(luku1 > 29 && luku1 < 53)
    printf("Arvosana on: 1");
  else if(luku1 > 52 && luku1 < 76)
    printf("Arvosana on: 2");
  else if(luku1 > 75 && luku1 < 101)
    printf("Arvosana on: 3");
  else 
    printf("Virheellinen pistemaara, yritä uudelleen");  
 
  getchar();
  return 0;
}

/*
   
 2. Tehtävä
 Tässä tehtävässä liitetään edellisen tehtävän  arvosanan antavat if-lauseet tähän tehtävään..
 
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

*/