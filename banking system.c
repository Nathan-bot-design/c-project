//BANKING SYSTEM PROEJCT

//1.NATHAN KINGORI MACHIRA ENE212-0082/2021 
//2.OMAE TERESIA KEMUNTO ENE212-0080/2021
//3.TUM KEITH KIMUTAI ENE212-0092/2021
//4.TEDDY GITHUGU KAMAU ENE 212-0175/2021
//5.

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Initializing variables
    float total_amount, transfer, deposit, withdraw, check_balance;
    int pin, password, user_input;

//Prompting the user to create an account and enter password
    printf("Enter password to access account: ");
    scanf("%d", &password);
    printf("Enter amount to create account: ");
    scanf("%f", &total_amount);

//Prompting the user to choose an action
    printf("Enter 1 for check balance.\nEnter 2 for deposit.\nEnter 3 for withdraw.\nEnter 4 for transfer.\n");
    scanf("%d", &user_input);
    printf("Enter pin: ");
    scanf("%d", &pin);

    switch(user_input)
    {
    case 1:
        printf("Your total account balance is %f",total_amount);
        
        break;

    case 2:
        printf("Enter amount to  deposit:");
        scanf("%f", &deposit);
        float net_balance;
        net_balance =total_amount + deposit;
        printf("Net_balance after deposit is %f", net_balance);

        break;
        
