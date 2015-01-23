#include <stdio.h>
#include <math.h>
int main(void)
{
    // define neccesary variables
    float null_in_centimetres, radius, volume, surface;

    // input data to program
    scanf("%f", &null_in_centimetres);

    // calculate
    radius = null_in_centimetres/2.0;
    volume = (4 * 3.1416 * pow(radius, 3))/3.0;
    surface = 4.0 * 3.1416 * pow(radius, 2);

    // print output
    printf("Volume: %.4f m^3\n", volume/1000000.0);
    printf("Surface Area: %.4f m^2\n", surface/10000.0);
}
