#include<stdio.h>
#include<string.h>

int main (void)
{
  char kontonummer[31+1];
  int summe, pruefziffer;

  printf("Geben Sie eine Kontonummer ein:\n");
  scanf("%s", kontonummer);
  fflush(stdin); //Standard Input Wert leeren

  int laenge = strlen(kontonummer);

  for (int i = 2, j = laenge; j >= 1; i++, j--)
  {
    if (i >= 8) i = 2;
    int c = (int)kontonummer[j-1] - '0';
    summe += c * i;
  }

  int rest = summe % 11;
  pruefziffer = 11 - rest;

  if (pruefziffer >= 10) pruefziffer = 0;

  char c[10];
  c[0] = pruefziffer + '0';
  strcat(kontonummer, c);
  printf("%s\n", kontonummer);
}
