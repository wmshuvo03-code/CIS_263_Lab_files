#include <stdio.h>
int main() {
    
    //integer input
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("a number: %d \n" ,num);
    printf("integer datatype size: %d bytes\n", sizeof(num));

    //float input
    float height;
    printf("Enter your height: \n");
    scanf("%f", &height);
    printf("height: %.2f \n" ,height);
    printf ("float datatype size: %d\n", sizeof(height));

    //double input
    double salary;
    printf("Enter your salary: \n");
    scanf("%lf", &salary);
    printf("salary: %.4lf \n" ,salary);

    return 0;
}