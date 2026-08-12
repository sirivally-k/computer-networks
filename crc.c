#include <stdio.h>

int main()
{
    int data[100], div[20], temp[100];
    int datalen = 0, divlen = 0;
    int i, j, totallen;
    char ch;

    printf("Enter the data binary: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == '1' || ch == '0')
        {
            data[datalen++] = ch - '0';
        }
    }

    printf("Enter the divisor (generator polynomial): ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == '1' || ch == '0')
        {
            div[divlen++] = ch - '0';
        }
    }

    /* Total length = data + CRC bits */
    totallen = datalen + divlen - 1;

    /* Copy data into temporary array */
    for (i = 0; i < datalen; i++)
    {
        temp[i] = data[i];
    }

    /* Append zeros */
    for (i = datalen; i < totallen; i++)
    {
        temp[i] = 0;
    }

    /* CRC division */
    for (i = 0; i <= totallen - divlen; i++)
    {
        if (temp[i] == 1)
        {
            for (j = 0; j < divlen; j++)
            {
                temp[i + j] = temp[i + j] ^ div[j];
            }
        }
    }

    /* Print CRC */
    printf("CRC: ");

    for (i = datalen; i < totallen; i++)
    {
        printf("%d", temp[i]);
        data[i] = temp[i];
    }

    printf("\n");

    /* Print transmitted data */
    printf("Transmitted data (Data + CRC): ");

    for (i = 0; i < totallen; i++)
    {
        printf("%d", data[i]);
    }

    printf("\n");

    return 0;
}

