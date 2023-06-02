//
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

