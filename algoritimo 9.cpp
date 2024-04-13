#include <stdio.h>


int main() {


float salbase,salreceber,grat,imp;

printf("Salbase \n");
scanf("%f", &salbase);

grat = salbase * 0.05;
salreceber = salbase + grat;
imp = salreceber * 0.07;
salreceber = salreceber - imp;

printf("Salreceber: %f \n", salreceber);

}
