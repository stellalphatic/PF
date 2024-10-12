#include <iostream>
#include <cmath>
using namespace std;
string username = "username";
int PIN = 1234;
int balance = 50000;
string user;
int userPIN;
int cash;
int opt;

void home()
{
    cout << "###     #   ##   #  #  #    ###   #   #   ###   #####  ####  ##   ##        " << endl;
    cout << "#  #   # #  # ## #  # #    #   #   # #   #   #    #    #     # # # #        " << endl;
    cout << "###   ####  #  # #  ##       #      #     #       #    ####  #  #  #      " << endl;
    cout << "#  #  #  #  #   ##  # #   #   #     #   #   #     #    #     #     #      " << endl;
    cout << "###   #  #  #    #  #  #   ###      #    ###      #    ####  #     #       " << endl;

    cout << "Please Login to your account" << endl;
    cout << "username : ";
    cin >> user;
    cout << "PIN : ";
    cin >> userPIN;
}
void menu()
{
    cout << "Welcome, " << user << endl;
    cout << "Press 1 to make a transaction" << endl;
    cout << "Press 2 to add Money" << endl;
    cout << "Press 3 to Check Balance" << endl;
    ;
    cout << "Press 4 to pay bills" << endl;
    cout << "Press 5 to Exit the Application" << endl;
}
void transaction()
{
    cout << "How much you want to withdraw? $";
    cin >> cash;
    if (cash > balance)
        cout << "Sorry! You cannot withdraw,since you have less amount" << endl;

    else
    {
        cout << "Withdrawal successful" << endl;
        balance -= cash;
        cout << "Your balance is $" << balance << endl;
    }
}
void addMoney()
{
    cout << "How much you want to add? ";
    cin >> cash;
    balance += cash;
    cout << "Money added successfully" << endl;
    cout << "Your balance is now $" << balance << endl;
}
void checkBalance()
{
    cout << "Your balance is $" << balance;
}

void payBills()
{
    cout << "Which bill you want to pay? " << endl;
    cout << "Press 1 for Electricity " << endl;
    cout << "Press 2 for Gas " << endl;
    cin >> opt;
    char ch;
    if (opt == 1)
    {
        int bill;
        cout << "What's your Electricity Bill? $";
        cin >> bill;
        cout << "Your Electricity Bill is $" << bill << ", do you proceed to Pay?(Y/n)" << endl;
        cin >> ch;
        if (ch == 'Y' || ch == 'y')
        {
            balance -= bill;
            cout << "successful";
            cout << "Your balance is $" << balance << endl;
        }
        else
            cout << "Transaction cancelled" << endl;
    }
    else if (opt == 2)
    {
        int bill;
        cout << "What's your Gas Bill? $";
        cin >> bill;
        cout << "Your Gas Bill is " << bill << ", do you proceed to Pay?(Y/n)" << endl;
        cin >> ch;
        if (ch == 'Y')
        {
            balance = balance - 50;
            cout << "successful";
            cout << "Your balance is $" << balance << endl;
        }
        else
            cout << "Transaction cancelled" << endl;
    }
}

int main()
{
    system("CLS");
    home();
    if (user == username && userPIN == PIN)
    {
        while (true)
        {
            menu();
            int option;
            cin >> option;
            if (option == 1)
                transaction();
            else if (option == 2)
                addMoney();
            else if (option == 3)
                checkBalance();
            else if (option == 4)
                payBills();
            else if (option == 5)
                break;
            else
                cout << "Invalid choice" << endl;
        }
    }
    else
        cout << "Invalid username or PIN" << endl;

    return 0;
}
