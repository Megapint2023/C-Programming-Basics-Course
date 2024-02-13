 
 /*AIKA vaikea macillä kun ei ole F1-F9 nappeja*/
#include <stdio.h>

 int main()
 {
  signed char ascii;
  signed char scan;
  float Rkok, R1, R2, R3;
 
 do{
  
   printf("\n");
   printf("Valitse jokin seuraavista:\n");
   printf(" Ohjelman lopetus       - Esc-painike\n ");         
   printf("Kolme vastusta sarjassa - F1-painike\n ");
   printf("Kolme vastusta rinnan   - F2-painike\n ");
   printf("Valintasi: ");
                  
   ascii=getchar();    
   scan = 0;         

   if (ascii==0)     
   {
     scan=getchar();  
   }
   else{            
     scan=0;        
   }                
   fflush(stdin);
    
   if(scan==59)   /* Jos valittu F1-painike */
   {
     printf("\n\nVastuksia sarjassa\n");           
     printf(" Anna R1: ");
     scanf("%f",&R1);                     
     printf(" Anna R2: ");
     scanf("%f",&R2);
     printf(" Anna R3: ");
     scanf("%f",&R3);
     Rkok=R1+R2+R3;
     printf(" Rkok sarjassa: %f\n\n",Rkok);
   }
   if(scan==60)  /* Jos valittu F1-painike */
   {
     printf("\n\nVastuksia rinnan\n"); 
     printf(" Anna R1: ");
     scanf("%f",&R1);                     
     printf(" Anna R2: ");
     scanf("%f",&R2);
     printf(" Anna R3: ");
     scanf("%f",&R3);
     Rkok=1/((1/R1)+(1/R2)+(1/R3));
     printf(" Rkok rinnan: %f\n\n",Rkok);
   }
 }
 while(ascii!=27); /* Jos valittu Esc-painike */
 fflush(stdin);


 return 0;
}
 
 /*
 Lisää toimivaan ohjelmaan sopivaan kohtaan näytön tyhjentäminen siten,
 että näyttö tyhjennetään vain jos valitaan uudelleen F1- tai F2- painike.
 */