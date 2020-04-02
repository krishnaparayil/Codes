#include <stdio.h>

//Compiler version gcc  6.3.0

void main()
{ int p;
float r;
int t;
int s;
  printf("Enter the principle amount: \n");
  scanf("%d",&p);
  printf("Enter the rate of interest: \n");
  scanf("%f",&r);
  printf("Enter the number of years: \n");
  scanf("%d",&t);
  s=p*(r/100)*t;
  printf("Simple interest =%d",s);
  
}
