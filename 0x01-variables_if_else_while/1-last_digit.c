#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
  char template[13] = "Last digit of";
  int lastDigit = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;
if(lastDigit > 5)
  {
    printf("%s %i is %i and is greater than 5\n", template, n, lastDigit);
  }else if(lastDigit < 6 && lastDigit != 0)
  {
    printf("%s %i is %i and is less than 6 and not 0\n", template, n, lastDigit);
  }else
  {
    printf("%s %i is %i and is 0\n", template, n, lastDigit);
  }
	return (0);
}
