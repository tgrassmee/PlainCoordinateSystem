#include "include/coordinatesystem.h"




int main() {

    Point points[]={ {10,10}};

    int size = sizeof(points)/sizeof(points[0]);
    draw_coordinatesystem(points, size);
    return 0;
}

