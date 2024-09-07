#include <iostream>

using namespace std;

class Atm {
    int PIN;
    int enteredPin;
    int balance;
    int amount;

public:
    Atm(int pin, int initialBalance) 
    {
        PIN = pin;
        balance = initialBalance;

    }

    void ShowTime() {  //time show
        time_t now = (0);
        cout << (&now);
    }

    void processAtm() {  
        int choice;
        ShowTime();
        cout << "Press 1 and Then Press Enter to Access Your Account Via PIN Number\n";
        cout << "Press 0 and Press Enter to Get Help.\n";
        cin >> choice;

        if (choice == 1) {
            accessAccount();
        } else if (choice == 0) {
            displayHelp();
        } else {
            cout << "Invalid choice!" << endl;
        }
    }

    void accessAccount() {      
        cout << "ATM ACCOUNT ACCESS\n";
        cout << "Enter Your Acc Pin Access Number! [Only one attempt is allowed]\n";
        cin >> enteredPin;

        if (enteredPin == PIN) { //check pun
            showMainMenu();
        } else {
            cout << "THANK YOU\n";  //fail pin
            cout << "You had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n";
        }
    }

    void displayHelp() {  //help deisplay
        cout << "ATM ACCOUNT STATUS\n";
        cout << "You must have the correct pin number to access this account. See your bank representative for assistance during bank opening hours. Thanks for your choice today!!\n";
    }

    void showMainMenu() {   //menu
        int choice;
        cout << "ATM Main Menu Screen\n";
        cout << "Enter [1] To Deposit Cash\n";
        cout << "Enter [2] To Withdraw Cash\n";
        cout << "Enter [3] To Balance Inquiry\n";
        cout << "Enter [0] to Exit ATM\n";
        cout << "PLEASE ENTER A SELECTION AND PRESS RETURN KEY: ";
        cin >> choice;

        switch (choice) {       
            case 1:
                depositCash();
                break;
            case 2:
                withdrawCash();
                break;
            case 3:
                balanceInquiry();
                break;
            case 0:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    void depositCash() {  //deposite case
        cout << "ATM ACCOUNT DEPOSIT SYSTEM\n";
        cout << "The Names of the Account Holders are: Rakesh Kharva\n";
        cout << "The Account Holders' address is: Mumbai\n";
        cout << "The Branch location is: Andheri\n";
        cout << "Account number: 5678\n";
        cout << "Present available balance: Rs. " << balance << endl;
        cout << "Enter the Amount to be Deposited Rs. ";
        cin >> amount;

        balance += amount;  //deposite amout add
        cout << "Your new available balance amount is Rs. " << balance << endl;
    }

    void withdrawCash() {   //withdraw case
        cout << "ATM ACCOUNT WITHDRAWAL\n";
        cout << "The Names of the Account Holders are: Rakesh Kharva\n";
        cout << "The Account Holders' address is: Mumbai\n";
        cout << "The Branch location is: Andheri\n";
        cout << "Account number: 5678\n";
        cout << "Present available balance: Rs. " << balance << endl;
        cout << "Enter the Amount to be Withdrawn Rs. ";
        cin >> amount;

        if (amount > balance) { //withdraw amout check for withdraw or not
            cout << "Insufficient Available Balance in your account.\n";
            cout << "Sorry!!\n";
        } else {
            balance -= amount;
            cout << "Your new available balance amount is Rs. " << balance << endl;
        }
    }

    void balanceInquiry() {   //balance inquiry
        cout << "ATM ACCOUNT BALANCE INQUIRY\n";
        cout << "The Names of the Account Holders are: Rakesh Kharva\n";
        cout << "The Account Holders' address is: Mumbai\n";
        cout << "The Branch location is: Andheri\n";
        cout << "Account number: 5678\n";
        cout << "Current available balance: Rs. " << balance << endl;
    }

    
};

int main() {
    Atm atm(12345, 20000);  
    cout << "///////////// Welcome To ATM /////////////" << endl;
    cout << "-------------------------------------------------" << endl;
    atm.ShowTime();  
    cout << "-------------------------------------------------" << endl;
    atm.processAtm();
    cout << "-------------------------------------------------" << endl;
    return 0;
}
