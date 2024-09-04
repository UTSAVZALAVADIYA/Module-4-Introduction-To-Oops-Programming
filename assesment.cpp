#include <iostream>

using namespace std;

// Display welcome screen
void displayWelcomeScreen() {
    cout << "ATM ACCOUNT ACCESS\n";
    cout << "Enter Your Acc Pin Access Number! [Only one attempt is allowed]\n";
}

// Verify PIN  
bool verifyPin() {
    const int correctPin = 12345; // corrent pin
    int enteredPin;
    cin >> enteredPin;
    if (enteredPin == correctPin) {
        return true; // PIN correct
    } else {
        cout << "ATM ACCOUNT STATUS\n";
        cout << "You must have the correct pin number to access this account. See your bank representative for assistance during bank opening hours\n";
        cout << "Thanks for your choice today!!\n";
        cout << "Press Enter to continue\n";
        cin.ignore(); 
        cin.get();    
        cout << "THANK YOU\n";
        cout << "You had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n";
        cout << "Press Enter to continue\n";
        cin.ignore(); 
        cin.get();    
        return false; 
    }
}

// Display  ATM menu 
void displayMainMenu() {
    cout << "ATM Main Menu Screen\n";
    cout << "Enter [1] To Deposit Cash\n";
    cout << "Enter [2] To Withdraw Cash\n";
    cout << "Enter [3] To Balance Inquiry\n";
    cout << "Enter [0] to Exit ATM\n";
    cout << "PLEASE ENTER A SELECTION AND PRESS RETURN KEY:\n";
}

// Deposit cash toaccount
void depositCash(int &balance) {
    int depositAmount;
    cout << "The Names of the Account Holders are: Rakesh Kharva\n";
    cout << "The Account Holders' address is : Mumbai\n";
    cout << "The Branch location is : Andheri\n";
    cout << "Account number : 5678\n";
    cout << "Present available balance : Rs. " << balance << "\n";
    cout << "Enter the Amount to be Deposited Rs. ";
    cin >> depositAmount;
    balance += depositAmount; // Update balance
    cout << "Your new available Balanced Amount is Rs. " << balance << "\n";
    cout << "Thank You!\n";
    cout << "Press Enter to Return to the Main Menu\n";
    cin.ignore(); 
    cin.get();    
}

// Withdraw cash from the account
void withdrawCash(int &balance) {
    int withdrawAmount;
    cout << "The Names of the Account Holders are: Rakesh Kharva\n";
    cout << "The Account Holders' address is : Mumbai\n";
    cout << "The Branch location is : Andheri\n";
    cout << "Account number : 5678\n";
    cout << "Present available balance : Rs. " << balance << "\n";
    cout << "Enter the Amount to be Withdrawn Rs. ";
    cin >> withdrawAmount;
    if (withdrawAmount > balance) {
        cout << "Insufficient Funds\n";
        cout << "Press Enter to Return to the Main Menu\n";
        cin.ignore(); 
        cin.get();    
    } else {
        balance -= withdrawAmount; // Update balance
        cout << "Your new available Balanced Amount is Rs. " << balance << "\n";
        cout << "Thank You!\n";
        cout << "Press Enter to Return to the Main Menu\n";
        cin.ignore(); 
        cin.get();    
    }
}

// Display current balance
void checkBalance(int balance) {
    cout << "The Names of the Account Holders are: Rakesh Kharva\n";
    cout << "The Account Holders' address is : Mumbai\n";
    cout << "The Branch location is : Andheri\n";
    cout << "Account number : 5678\n";
    cout << "Present available balance : Rs. " << balance << "\n";
    cout << "Press Enter to Return to the Main Menu\n";
    cin.ignore(); 
    cin.get();    
}

int main() {
    int balance = 20000;  

    displayWelcomeScreen(); // Show  welcome screen
    if (verifyPin()) {     // Check PIN
        int choice;
        displayMainMenu(); // Show  menu
        cin >> choice;

        // user choice
        if (choice == 1) {
            depositCash(balance); // Deposit cash
        } else if (choice == 2) {
            withdrawCash(balance); // Withdraw cash
        } else if (choice == 3) {
            checkBalance(balance); // Check balance
        } else if (choice == 0) {
            cout << "Exiting the ATM. Thank you for using our services.\n";
        } else {
            cout << "Invalid choice. Please restart the program and try again.\n";
        }
    }

    return 0;
}
