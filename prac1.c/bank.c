#include<stdio.h>
int main(){
    int choice;
    float balance = 2000 , amount;
    printf("1. check balance\n 2. withdraw\n 3. deposit\n 4. exit\n" );
    printf("enter the choice :");
    scanf("%d" , &choice);

    switch (choice)
    {
    case 1 :
        printf("check the balance %.2f\n" , balance);
        break;
    case 2 :
        printf(" Enter the amount to withdraw :");
        scanf("%f ", &amount);
        if (amount<=balance)
        {
        balance -= amount ;
         printf(" Now current balance %.2f\n", balance-=amount);
}
       else {
        printf("insufficifient balace");
       }
        break;
    case 3 :
        printf("Enter amout to deposit :");
        scanf("%.2f" , &amount);
        balance += amount;
        printf(" current balace %.2f" , balance+=amount);
          break;
    case 4 :
        printf(" thank you ! exiting");
        break;
    
    default: 
    printf(" invalid choice\n");
        break;
    }
}