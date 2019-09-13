#include<stdio.h>
#include<math.h>

int main(){
        double x, y, x2, y2;
        scanf("%lf %lf %lf %lf", &x, &y, &x2, &y2);
        printf("%.4lf\n", pow( pow((x2 - x), 2) + pow((y2 - y), 2), 0.5));
        return 0;
}
