#include <stdio.h>
#include <math.h>
int main(void)
{
    // define neccesary variables
    int null_in_centimetres;
    float null_cen_to_metres;

    // input data to program
    scanf("%d", &null_in_centimetres);

    // calculate
    null_cen_to_metres = (null_in_centimetres/100.0)/2;

    // print output
    printf("Volume: %.4f m^3\n", (4 * 3.1416 * pow(null_cen_to_metres, 3))/3);
    printf("Surface Area: %.4f m^2\n", (4 * 3.1416 * pow(null_cen_to_metres, 2)));
}
