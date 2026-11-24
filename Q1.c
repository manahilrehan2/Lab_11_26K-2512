
#include <stdio.h>

int calculateChecksum(int transactionID)
{
    int sum = 0;

    while (transactionID > 0)
    {
        sum = sum + transactionID % 10;
        transactionID = transactionID / 10;
    }

    if (sum >= 10)
    {
        return calculateChecksum(sum);
    }

    return sum;
}

int main()
{
    int transactionID = 9875;

    printf("Checksum = %d",
           calculateChecksum(transactionID));

    return 0;
}
