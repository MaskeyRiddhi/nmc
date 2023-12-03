#include <stdio.h>
#include <stdlib.h>

int midpoint(int x1, int x2, int y1, int y2 ){
    int xmid = (x1 + x2)/2;
    int ymid = (y1 + y2)/2;
}
void main()
{
    int x1=5, x2=6;
    int y1=4, y2=4;
    int xmid, ymid;
    midpoint(x1, x2, y1, y2 );
    printf("The midpoint coordinates of a line is: (%d %d)",xmid,ymid);

}
