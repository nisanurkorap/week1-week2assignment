// mario.c
// CS50x - Week 1, Problem Set 1
//
// Exercise: Mario (Less Comfortable)
// ------------------------------------
// Print a right-aligned half-pyramid of # symbols.
// The user provides the height (1–8).
//
// Expected output (height = 4):
//    #
//   ##
//  ###
// ####
//
// How to compile:  make mario
// How to run:      ./mario
// How to check:    check50 cs50/problems/2024/x/mario/less

#include <stdio.h>

int main(void)
{
    int height;

    // Kullanıcıdan 1–8 arasında yükseklik al
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    // Piramidi yazdır
    for (int row = 1; row <= height; row++)
    {
        // Boşlukları yazdır
        for (int space = 0; space < height - row; space++)
        {
            printf(" ");
        }

        // # karakterlerini yazdır
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}