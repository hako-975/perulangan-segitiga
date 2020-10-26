#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row = 1,column = 1;
    int i;
    do
    {
        i=8;
        do
        {
            i--;
        }
        while(i >= row);

        column=1;
        do
        {
            printf("*");
            printf(" ");
            column++;
        }
        while(column <= row);
        printf("\n");
        row++;
    }
    while(column <= 5);

    return 0;
}
