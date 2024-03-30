//BANKING SYSTEM SIMULATION
//GROUP 3:

//1.TUM KEITH KIMUTAI - ENE212-0092/2021
//2.OMAE TERESIA KEMUNTO - ENE212-0080/2021


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