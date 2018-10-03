#include <stdio.h>

int
main ()
{
  int num1, num2, ergebnis;
  printf ("Geben Sie ihre Basis ein: \n");
  scanf ("%d", &num1);
  printf ("Geben Sie ihren Exponenten ein: \n");
  scanf ("%d", &num2);
  system ("clear");
  int basis = num1;
  int exponent = num2;
  for (exponent; exponent > 1; exponent--)
    {
      ergebnis = basis * num1;
      basis = ergebnis;
    }
  if (num2 == 0)
    {
      ergebnis = 1;
    }
  printf ("%d hoch %d ist %d", num1, num2, ergebnis);

  return 0;
}
