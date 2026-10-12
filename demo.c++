#include <stdio.h>
#include <cmath>
class Solution
{
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2)
    {
        int closest_x = fmax(x1, fmin(xCenter, x2));
        int closest_y = fmax(y1, fmin(yCenter, y2));

        int dx = closest_x - xCenter;
        int dy = closest_y - yCenter;

        return dx * dx + dy * dy <= radius * radius;
    }
};

        int dx = closest_x-xCenter;
        int dy = closest_y - yCenter;

        return dx * dx + dy * dy <= radius * radius;
    }
     radius * radius
