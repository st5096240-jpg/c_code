#include<stdio.h>
int main(){
    int choice;
    float r, l ,b ,s ;
    printf("1.Circle\n 2.Rectangle\n 3.Square\n ");
    printf("enter the choice:");
    scanf("%d" , &choice);

    switch (choice)
    { 
        case 1 :
        printf("Enter radius :");
        scanf("%f" , &r);
        printf("Area = %.2f\n", 3.14*r*r);
        break;
        case 2:
        printf("Enter lenth and breadth :");
        scanf("%f %f" , &l, &b);
        printf("Area= %.2f\n" , l*b);
        break;
        case 3:
        printf("Enter side :");
        scanf("%f" , &s);
        printf("Area = %.2f\n" , s*s);
        break;

    default:
    printf("invalid area");
        break;
    }
}