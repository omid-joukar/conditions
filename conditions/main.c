#include <stdio.h>

int main(void) 
{
  float u, i, r;
  printf("Dieses Programm berechnet nach dem Ohmschen Gesetz die Spannung, den Strom oder den Widerstand\n\n");
  printf("Geben Sie bitte die Werte ein. Für den zu berechnenden Wert bitte 0 (Null) eingeben\n\n");
  printf("Spannung U:\n");
  scanf("%f",&u);
  printf("Strom I: \n");
  scanf("%f",&i);
  printf("Widerstand R: \n");
  scanf("%f",&r);
  printf("\n");
  if ((u==0 && i==0)  ||  (u==0 && r==0)  ||  (i==0 && r==0)){
       printf("Berechnung nicht möglich\n\n");
  }else{
        if(u==0){
                printf("Spannung: %.2f\n", i*r);
                } if(i==0){
                    printf("Strom: %.2f\n",u/r );
                          }if(r==0){
                              printf("Widerstand: %.2f\n", u/i );
                                  }
      }
  return 0;
}