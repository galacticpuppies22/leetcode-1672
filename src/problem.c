/*
Constraints:

m == accounts.length
n == accounts[i].length
1 <= m, n <= 50
1 <= accounts[i][j] <= 100s
*/

#include <stdio.h>

int maximumWealth(int** accounts, 
                    int accountsSize, 
                    int* accountsColSize)
{
    int runningSum = 0;
    int highestSum = 0;

    for(int i = 0; i < accountsSize; i++)
    {
        for(int j = 0; j < accountsColSize[i]; j++)
        {
            runningSum += accounts[i][j];
#ifdef DEBUG
            printf("runningSum: %d\n", runningSum);
#endif
        }
        if (runningSum >= highestSum)
        {
            highestSum = runningSum;
#ifdef DEBUG
            printf("New highestSum: %d\n", highestSum);
        }
        else
        {
            printf("No New highestSum\n");
        }
#else
        }
#endif /* DEBUG */
        runningSum = 0;
    }
    return highestSum;
}