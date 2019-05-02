#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Voltage= 0, Current= 0, Resistance= 0, Result= 0, Choice= 0;
    float v= 0, i= 0, r= 0;
    printf("What variable do you have missing?\n");
    printf(" 1. V Volts\n 2. I Current\n 3. Resistance\n");
    scanf("%f", &Choice);
    if(Choice == 1){
    printf("What is the value of resistance: ");
    scanf("%f", &r);
    printf("What is the current value: ");
    scanf("%f", &i);
    Result= r * i;
    printf("The voltage is% f volts\n",Result);
    }
    else if (Choice == 2){
    printf("What is the value of the voltage: ");
    scanf("%f", &v);
    printf("What is the value of resistance: ");
    scanf("%f", &r);
    Result= v / r;
    printf("The current is% f amps\n",Result);
    }
    else if (Choice == 3){
    printf("What is the value of the voltage: ");
    scanf("%f", &v);
    printf("What is the current value: ");
    scanf("%f", &i);
    Result= v / i;
    printf("The resistance is% f ohms\n",Result);
    }


}
