#include <stdio.h>
void calculatePrize(float value);
int main()
{
    float value=100;
    printf("value is : %f\n",value);
    calculatePrize(value);
    
    return 0;
}
void calculatePrize(float value)
{
    value=value+(0.18*value);
    printf("final prize %f\n",value);
}