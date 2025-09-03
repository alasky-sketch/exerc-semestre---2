#include <stdio.h>
int main(void){
typedef struct Data{
int dia, mes, ano;
};
Data date; 
date.ano = 2018;
date.mes = 12;
date.dia = 1;
printf("Minha data: %d/%d/%d", date.dia, date.mes, date.ano);
return 0;}