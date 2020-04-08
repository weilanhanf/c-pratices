#include<stdio.h>
#include<algorithm>
#include<math.h>

#define PI acos(-1)

using namespace std;

int main()
{
    double x0, y0, z0, x1, y1, z1;
    while(scanf("%lf %lf %lf %lf %lf %lf", &x0, &y0, &z0, &x1, &y1, &z1)!=EOF)
    {
        double r, area;
        r = sqrt(pow((x1-x0), 2) + pow((y1-y0), 2) + pow((z1-z0), 2));
        area = 4.0/3 * PI * r * r * r;
        printf("%.3f %.3f\n", r, area);
    }
    return 0;
}
