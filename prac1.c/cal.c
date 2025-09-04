#include<stdio.h>
 int main(){
    int choice;
    float a;
    float b;
    printf("1. add\n");
    printf("2. subtract\n");
    printf("3. multiplication\n");
    printf("4. divide\n");
    printf("enter your choice :");
    scanf("%d" , &choice);

    printf("enter two numbers:");
    scanf("%f %f" , &a , &b);
    switch ( choice)

    {
    case 1 :
        printf("add = %.2f\n" , a+b);
        break;
    case 2 :
        printf("subtract = %.2f\n" , a-b);
        break;
    case 3 :
        printf("multiplication = %.2f\n" , a*b);
        break;
    case 4 :
        printf("divide = %.2f\n" , a/b);
        break;
    default:
    printf("no calculation");
        break;
    }
}