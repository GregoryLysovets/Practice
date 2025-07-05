#include <stdio.h>
#include <math.h>

int findIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
   double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distance > r1 + r2) {
         return 0;
    } else if (distance < fabs(r1 - r2)) {
        return 0;
    } else if (distance == 0 && r1 == r2) {
        return -1;
    } else {
        return 2;
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;

     printf("Enter the coordinates and radius of the first circle (x1 y1 r1) and (x2 y2 r2): ");
    scanf("d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int intersectionPoints = findIntersectionPoints(x1, y1, r1, x2, y2, r2);

    if (intersectionPoints == -1) {
        printf("-1\n");
    } else {
        printf("Number of intersection points: %d\n", intersectionPoints);
    }

    return 0;
}
