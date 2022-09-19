#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator
 *
 * Return: always 0
 */
int main(void)
{
int pass[100];
int i, count, s;

count = 0;

srand(time(NULL));

for (i = 0; i < 100; i++)
{
pass[i] = rand() % 78;
count += (pass[i] + '0' < 78);
if ((2772 - count) -'0' < 78)
{
s = 2772 - count - '0';
count += s;
putchar(s + '0');
break;


}
}


return (0);






}
