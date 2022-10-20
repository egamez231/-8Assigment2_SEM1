#include <stdio.h>

int main()
{
    int BigSb [10]={101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
    int i,max;

    for (i=0;i<10;i++)
    {
            if (BigSb[0] < BigSb[i])
            {
                BigSb[0] = BigSb[i];
            }
            else if (BigSb[1]< BigSb[i] && BigSb[i]<BigSb[0])
            {
                BigSb[1]=BigSb[i];
            }
    }
printf ("\nLargest value is : %d", BigSb[0]);
printf ("\nSecond Largest value is : %d", BigSb[1]);

return 0;
}
