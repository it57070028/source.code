#include <stdio.h>
#include <math.h>
int main(void)
{
    // define neccesary variables
    int null_in_centimetres;
    float null_cen_to_metres, radius;

    // input data to program
    scanf("%d", &null_in_centimetres);

    // calculate
    radius = null_in_centimetres/2;

    // print output
    printf("Volume: %f m^3\n", ((4 * 3.1416 * pow(radius, 3))/3)/1000000.0);
    printf("Surface Area: %f m^2\n", (4 * 3.1416 * pow(radius, 2))/10000.0);
}
