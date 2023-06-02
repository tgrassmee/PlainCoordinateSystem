//
// Created by tombo on 02.06.2023.
//
#include "../include/coordinatesystem.h"
#include <stdio.h>


#define X_MAX 20
#define Y_MAX 20
#define FORMATFAKTOR 3


void draw_coordinatesystem(Point points[], int size) {
    // Bildschirm löschen und Cursor ausblenden
    printf("\x1b[2J\x1b[?25l");

    // Zeichnen der Y-Achse mit Beschriftung und Pfeil
    printf("   y\n");
    printf("   ^\n");
    for (int y = Y_MAX; y >= 0; y--) {
        printf("%2d |", y);
        for (int x = 1; x < X_MAX*FORMATFAKTOR; x++) {
            int markiert = 0;
            for (int i = 0; i < size; i++) {
                if (points[i].x == x && points[i].y == y) {
                    printf(" O ");  // Markierung des Punkts
                    markiert = 1;
                    break;
                }
            }
            if (!markiert) {
                printf("   ");
            }
        }
        printf("\n");
    }

    // Zeichnen der X-Achse
    printf("    ");
    for (int i = 0; i < X_MAX; i++) {
        printf("--|");
    }
    printf("--> x\n");

    // Zeichnen der X-Achsenbeschriftung
    printf("    ");
    for (int i = 1; i <= 20; i++) {
        printf(" %2d", i);
    }
    printf("\n");

    // Cursor wieder einblenden
    printf("\x1b[?25h");

}

