#include <stdio.h>
#include <math.h>


/* Function declaration */
double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);


int main(){
    float radius, dia, circ, area;

    /* Input radius of circle from user */
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    dia  = (float) getDiameter(radius);       // Call getDiameter function
    circ = (float) getCircumference(radius);  // Call getCircumference function
    area = (float) getArea(radius);           // Call getArea function

    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);

    return 0;
}

double getDiameter(double radius){
    return (2 * radius);
}

double getCircumference(double radius){
    return (2 * M_PI * radius); 
}

double getArea(double radius){
    return (M_PI * radius * radius);
}
