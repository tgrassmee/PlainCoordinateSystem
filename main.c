#include "include/coordinatesystem.h"




int main() {

    Point points[]={ {1,1},{2,2},{3,3},{4,4},{5,5},{6,6},{7,7},{8,8},{9,9},{10,10},{11,11},{12,12},{13,13},{14,14},{15,15},{16,16},{17,17},{18,18}};

    int size = sizeof(points)/sizeof(points[0]);
    draw_coordinatesystem(points, size);
    return 0;
}

