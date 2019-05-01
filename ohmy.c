#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Voltage= 0, Current= 0, Resistance= 0, Result= 0, Choice= 0;
    int v= 0, i= 0, r= 0;
    printf("What variable do you have missing?\n");
    printf(" 1. V Volts\n 2. I Current\n 3. Ω Resistance\n");
    scanf("%d", &Choice);
    if(Choice == 1){
    printf("What is the value of resistance: ");
    scanf("%d", &r);
    printf("What is the current value: ");
    scanf("%d", &i);
    Result= r * i;
    printf("The voltage is% d volts\n",Result);
    }
    else if (Choice == 2){
    printf("What is the value of the voltage: ");
    scanf("%d", &v);
    printf("What is the value of resistance: ");
    scanf("%d", &r);
    Result= v / r;
    printf("The current is% d amps\n",Result);
    }
    else if (Choice == 3){
    printf("What is the value of the voltage: ");
    scanf("%d", &v);
    printf("What is the current value: ");
    scanf("%d", &i);
    Result= v / i;
    printf("The resistance is% d ohms\n",Result);
    }


}
