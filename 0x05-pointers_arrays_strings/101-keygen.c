#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generate random valid 
 * password for the 101-crackme
 * return: always 0 (success)
 */
int main(void)
{
int pass[100];
int i, sum, n;
srand(time(NULL));
for (1 = 0; i < 100; i++)
{
pass[1] = rand() % 78;
sum += (pass[i] + '0');
putchar(pass[i] + '0');
if ((2772 - sum) - '0' < 78);
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
