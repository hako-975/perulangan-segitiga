#include <stdio.h>

int main()
{
    int pilihan;
    printf("Pilihlah metode perulangan dibawah ini \n");
    printf("1. Menggunakan perulangan For \n");
    printf("2. Menggunakan perulangan While \n");
    printf("3. Menggunakan perulangan Do-While \n");

    printf("silahkan pilih program [1/2/3] : ");
    scanf("%d", &pilihan);

    switch(pilihan)
    {
        case 1 : {
            printf("Menggunakan metode perulangan For : \n");

            int i, j, n = 5;

            for(i=1; i<=n; i++)
            {
                for(j = i; j < n; j++)
                {
                    printf(" ");
                }

                for(j=1; j<=i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }
        case 2 : {
            printf("Menggunakan metode perulangan While : \n");
            int n = 5, i = 1;
            while (i <= n)
            {
                int j = i;
                while(j < n)
                {
                    printf(" ");
                    j++;
                }
                j = 1;
                while(j <= i)
                {
                    printf("*");
                    j++;
                }
                printf("\n");
                i++;
            }
            break;
        }
        case 3 : {
            printf("Menggunakan metode perulangan Do While : \n");
            int row = 1, column = 1;
            int i;
            do
            {
                do
                {
                    i--;
                }
                while(i >= row);

                column = 5;
                do
                {
                    printf(" ");
                    column--;
                }
                while(column >= row);

                column = 1;
                do
                {
                    printf("*");
                    column++;
                }
                while(column <= row);
                printf("\n");
                row++;
            }
            while(column <= 5);
            break;
        }
        default: {
            printf("Angka yang anda masukkan salah");
        }
    }
}
