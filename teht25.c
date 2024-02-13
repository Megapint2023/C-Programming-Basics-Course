
 #include<stdio.h>
 
 int esimerkki();                 
 int main()
 {
  printf("MAIN PROGRAMME \n");
  printf("-------------- \n\n");
  float result = esimerkki();                      
  printf("TOTAL PARALLEL RESISTANCE = %.2f Ω\n", result);

  getchar();
  return 0;
 }
 
 int esimerkki()                         
 {
  float R1,R2,R3;
  printf("STATUS CHANGE -> CALL TO FUNCTION! \n");
  printf("Calculating parallel resistance...\n");
  printf("ENTER VALUES: -> R1 R2 R3:\n");
  scanf ("%f %f %f", &R1, &R2, &R3);
   printf("TAST COMPLETE.\n");
    printf("RUTURNING TO -> MAIN PROGRAMME \n");
  float bringer = 1/((1/R1) + (1/R2) + (1/R3));
  return bringer;
 }

 /*
 Tehtävä
 Kopioi esimerkki, tallenna nimellä  ja kokeile ohjelmaa.
 Muuta ohjelmaa siten että aliohjelmassa kysytään kolmen vastuksen arvot ja
 lasketaan niiden rinnankytkennän arvo sekä näytetään tulos.

*/