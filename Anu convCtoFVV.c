#include<stdio.h>
#include<stdlib.h>
void main()
{
    float choice,d,f;
    printf("Temperature Conversion Script\n");
    printf("1.convert celsius to fahrenheit\n");
    printf("2.convert fahrenheit to celsius\n");
    printf("3.Exit\n");
    printf("Enter your choice\n");
    scanf("%f",&choice);
    if(choice==1)
    {
        printf("Enter the temperature in celsius\n");
        scanf("%f",&d);
        f=(d*9/5)+32;
        printf("The temperature in fahrenheit is %f\n",f);
    }
    else if(choice==2)
    {
        printf("Enter the temperature in fahrenheit\n");
        scanf("%f",&f);
        d=(f-32)*5/9;
        printf("The temperature in celsius is %f\n",d);
    }
    else
    {
        printf("Exit");
    }
}   