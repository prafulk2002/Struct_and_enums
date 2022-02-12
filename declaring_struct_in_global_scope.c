// Declaring Structure in Global Scope

#include<stdio.h>
struct 
{
  char *engine;  /* data */
}car1 ,car2;

int main()
{
car1.engine= "DDis 190 Engine";
car2.engine= "Hyundai";
printf("%s\n",car1.engine);
printf("%s",car2.engine);
return 0;
}
