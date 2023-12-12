/* tugas Akhir semester 1
   by: Fajar Aulia Pratama
   */
   
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BATAS_BAWAH 1
#define BATAS_ATAS 100
#define MAX_PERCOBAAN 10 

void tebakAngka(void);
void mainLagi(void);

int main()
{
    tebakAngka();
    mainLagi();

    printf("\n");
    system("pause");

    return 0;
}

void tebakAngka(void)
{
    int magic_no = 0, tebakan = 0, countNum = 0;

    srand(time(NULL));
    magic_no = rand() % (BATAS_ATAS - BATAS_BAWAH + 1) + BATAS_BAWAH;

    printf("\t\t\tUniversitas Negeri Padang\n\n");
    printf("==========================================\n");
    printf("Nama : Fajar Aulia Pratama \nNIM  : 23346007\n");
    printf("==========================================\n");
    printf("Program Tebak Angka \n \n");
    printf("==========================================\n");

    while (7)
    {
        printf("Coba Tebak Angka yang saya pikirkan (%d-%d): ", BATAS_BAWAH, BATAS_ATAS);
        if (scanf("%d", &tebakan) != 1)
        {
            printf("Anda Salah Format, Silahkan Coba Lagi!\n\n");
            while (getchar() != '\n')
                ; // Clear input buffer
            continue;
        }

        if (tebakan >= BATAS_BAWAH && tebakan <= BATAS_ATAS)
        {
            countNum++;

            if (magic_no == tebakan)
            {
                printf("Hebat! Tebakan Anda Benar!\n");
                break;
            }
            else
            {
                printf("Tebakan Anda Salah coba lagi!\n");
                if (magic_no > tebakan)
                    printf("Tebakan Anda Terlalu Kecil\n");
                else
                    printf("Tebakan Anda Terlalu Besar\n");
            }

            if (countNum == MAX_PERCOBAAN)
            {
                printf("\nMaaf, Anda sudah mencapai batas maksimal percobaan.\n");
                break;
            }
        }
        else
        {
            printf("Masukkan angka antara %d dan %d!\n\n", BATAS_BAWAH, BATAS_ATAS);
        }
    }
}

void mainLagi(void) 	
{
    int maumain;

    printf("Apakah Anda ingin main lagi?\n1.Ya\n2.Tidak\nBerikan pilihan: ");
    scanf("%d", &maumain);
    printf("\n\n");

    if (maumain == 1)
    {
        system("cls");
        main();
    }
}
