#include<stdio.h>
int main(){
    int a,b,c;
   printf("Enter three numbers");
    scanf("%d %d %d", &a, &b , &c);
    if (a>=b && a>=c )
    {
        printf("a is greater %d\n" ,a);
    }
    else if(b>=a && b>=c)
    {
        printf(" b is greater %d\n" , b);
    }
    else{
           printf("c is greater %d\n" , c);
    }


}
