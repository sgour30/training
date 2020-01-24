#include<stdio.h>
int main()
{
/* count number of digits */
int c = 0; /* digit position */
int n = number;

while (n != 0)
{
    n /= 10;
    c++;
}

int numberArray[c];

c = 0;    
n = number;

/* extract each digit */
while (n != 0)
{
    numberArray[c] = n % 10;
    n /= 10;
    c++;
}			 
