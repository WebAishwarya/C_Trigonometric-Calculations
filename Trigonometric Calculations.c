#include<stdio.h>
#include <math.h>

int main()
{
    printf("Programs for Trigonometric Calculations : \n\n");
    
    printf("Problem 1 : Calculate the sine of an angle in degrees\n\n");
    
    float opposite = 6.00;
    float hypoteneuse = 12.50;
    float sine_value;
    
    sine_value = opposite / hypoteneuse;
    
    printf("Value of opposite : %.2f\nValue of hypoteneuse : %.2f\n",opposite,hypoteneuse);
    printf("Sine of an angle : %.2f\n\n", sine_value);
    
    printf("Problem 2 : Find the area of a triangle by given two sides and the included angle\n\n");
    
    float side1 = 5.0;  
    float side2 = 7.0;  
    float angle_deg = 45.0;
    
    float angle_rad = angle_deg * (3.14 / 180.0);
    float area_of_triangle = 0.5 * side1 * side2 * sin(angle_rad);
    
    printf("Value of side 1 of triangle : %.2f\nValue of side 2 of triangle : %.2f\nValue of angle in degree : %.2f\n",side1,side2,angle_deg);
    printf("Area of the triangle : %.2f\n", area_of_triangle);
    
    return 0;
}
