#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define Max_Attempts 3
#define Correct_Pin "1234"

bool login(){
    char enteredPin[5];  //room for 4 digits
    int attempts = Max_Attempts;

    while (attempts>0){
            printf("Enter Pin:");
            scanf("%4s", enteredPin); //limits inputs to 4
            if (strcmp (enteredPin,Correct_Pin)==0) {

                 return true;
            }
            attempts--; //failed attempt

            printf("Incorrect Pin!\n");
            if(attempts >0){
                printf("try again.Attempts left: %d\n", attempts);
            }
   }

    printf("Maximum attempts exceeded.\n Access denied. \n");
    return false;
}
void checkBalance (double balance) {
    printf("current balance is: Ksh%.2f\n", balance);
}

double deposit(double balance) {
    double amount;
      printf("Enter amount to deposit: Ksh");

      //validate input
      if (scanf("%lf", &amount) !=1 || amount <=0){
                while (getchar() !='\n'); //Clear invalid input
                printf("Invalid amount. Deposit must be positive.\n");
                return balance;
      }
     balance += amount;
     printf("Deposit successful. New balance: Ksh %.2f\n", balance);
     return balance;
}
double withdraw(double balance) {
 double amount;
    printf("Enter amount to withdraw: Ksh");
    if (scanf("%lf", &amount) !=1 || amount <=0) {
       while (getchar() != '\n');
       printf("Invalid amount. Withdrawal must be positive.\n");
       return balance;
    }
    if (amount > balance){
       printf("Insufficient balance.\n");
       return balance;
    }
  balance -= amount;
  printf("Withdrawal successful. New balance: Ksh%.2f\n", balance);
  return balance;
}
void showMenu(){
    printf("\n--- Atm Menu ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Choose an option: ");
}
int main(){
    double balance = 1000.00;
    int choice;

    if (!login()) {
        return 0;
    }
    do{
        showMenu();
        if (scanf("%d", &choice) !=1) {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number between 1 and 4. \n");
            continue;
    }
        switch (choice) {
          case 1:
            checkBalance(balance);
            break;
          case 2:
            balance = deposit(balance);
            break;
          case 3:
            balance = withdraw(balance);
            break;
          case 4:
            printf("thank you for using the atm. Goodbye!\n");
            break;
          default:
            printf("Invalid option. Please select 1-4.\n");
         }
    }   while (choice !=4);

    return 0;
}
