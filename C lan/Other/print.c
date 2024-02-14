#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define INITIAL_BALANCE 25000
#define MINIMUM_BALANCE 10000

// User structure to store account information
struct User {
    char username[50];
    char password[50];
    int balance;
    bool isLoggedIn;
};

// Function prototypes
void login(struct User *user);
void deposit(struct User *user);
void withdraw(struct User *user);
void checkBalance(struct User *user);
void logout(struct User *user);

int main() {
    struct User user;
    user.balance = INITIAL_BALANCE;
    user.isLoggedIn = false;

    int choice;

    do {
        printf("\n***** Banking App *****\n");
        printf("1. Open Account\n");
        printf("2. Login\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Check Balance\n");
        printf("6. Logout\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a username of your choice: ");
                scanf("%s", user.username);
                printf("Enter a password of your choice: ");
                scanf("%s", user.password);
                user.balance = INITIAL_BALANCE;
                user.isLoggedIn = true;
                printf("Account created successfully!\n");
                break;
            case 2:
                if (!user.isLoggedIn) {
                    login(&user);
                } else {
                    printf("You are already logged in.\n");
                }
                break;
            case 3:
                if (user.isLoggedIn) {
                    deposit(&user);
                } else {
                    printf("Please login to perform this task.\n");
                }
                break;
            case 4:
                if (user.isLoggedIn) {
                    withdraw(&user);
                } else {
                    printf("Please login to perform this task.\n");
                }
                break;
            case 5:
                if (user.isLoggedIn) {
                    checkBalance(&user);
                } else {
                    printf("Please login to perform this task.\n");
                }
                break;
            case 6:
                if (user.isLoggedIn) {
                    logout(&user);
                } else {
                    printf("You are not logged in.\n");
                }
                break;
            case 7:
                printf("Thank you for using the Banking App. Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (choice != 7);

    return 0;
}

// Function to perform user login
void login(struct User *user) {
    char username[50];
    char password[50];

    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(username, user->username) == 0 && strcmp(password, user->password) == 0) {
        user->isLoggedIn = true;
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password. Login failed.\n");
    }
}

// Function to perform a deposit
void deposit(struct User *user) {
    int amount;
    printf("Enter the amount to deposit: ₹ ");
    scanf("%d", &amount);

    user->balance += amount;
    printf("Deposit successful. Your current balance is ₹ %d\n", user->balance);
}

// Function to perform a withdrawal
void withdraw(struct User *user) {
    int amount;
    printf("Enter the amount to withdraw: ₹ ");
    scanf("%d", &amount);

    if (user->balance - amount >= MINIMUM_BALANCE) {
        user->balance -= amount;
        printf("Withdrawal successful. Your current balance is ₹ %d\n", user->balance);
    } else {
        printf("Withdrawal failed. Insufficient balance. Your current balance is ₹ %d\n", user->balance);
    }
}

// Function to check the account balance
void checkBalance(struct User *user) 
{
    printf("Your current balance is ₹ %d\n", user->balance);
}

// Function to perform user logout
void logout(struct User *user) 
{
    user->isLoggedIn = false;
    printf("Logout successful. You have been logged out.\n");
}
