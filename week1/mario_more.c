// mario_more.c
// CS50x - Week 1, Problem Set 1 (Bonus)
//
// Exercise: Mario (More Comfortable)
// ------------------------------------
// Print a DOUBLE half-pyramid separated by a two-space gap.
//
// Expected output (height = 4):
//    #  #
//   ##  ##
//  ###  ###
// ####  ####
//
// How to compile:  make mario_more
// How to run:      ./mario_more
// How to check:    check50 cs50/problems/2024/x/mario/more

#include <stdio.h>

int main(void)
{
    int height;

    // Kullanıcıdan 1-8 arasında yükseklik al
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    // Piramidi yazdır
    for (int row = 1; row <= height; row++)
    {
        // boşluklar
        for (int space = 0; space < height - row; space++)
        {
            printf(" ");
        }

        // sol #
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        // ortadaki iki boşluk
        printf("  ");

        // sağ #
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}