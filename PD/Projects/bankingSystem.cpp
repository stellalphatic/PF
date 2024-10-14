#include <iostream>
#include <cmath>
using namespace std;
string admin = "admin";
string adminPass = "admin123";

string user1Name = "ahmad";
string user1Pass = "pass123";
int user1Balance = 50000;

string user2Name = "amir";
string user2Pass = "pass123";
int user2Balance = 20000;

string newUser = "";
string newUserPass = "";
int newUserBalance = 0;

string user;
string password;
int balance;
int amount;
int opt;

void home()
{
    cout << "_____________________________________________________________________________     " << endl;
    cout << "|####     #    ####   #  #  #    ####  #   #   ###   #####  ####  ##   ##   *    " << endl;
    cout << "|#   #   #  #   ####  #  # #    #   #   # #   #   #    #    #     # # # #   *     " << endl;
    cout << "|####   ######  ##  # #  ##       #      #     #       #    ####  #  #  #   *   " << endl;
    cout << "|#   #  #    #  ##   ##  # #   #   #     #   #   #     #    #     #     #   *   " << endl;
    cout << "|####   #    #  ##    #  #  #   ####     #    ###      #    ####  #     #   *    " << endl;
    cout << "*****************************************************************************     " << endl
         << endl;
    cout << "1. Login" << endl;
    cout << "2. New user?Please Signup here" << endl;
    cin >> opt;
    if (opt == 1)
    {
        cout << "Please Login to your account" << endl;
        cout << "username : ";
        cin >> user;
        cout << "Password : ";
        cin >> password;
    }
    if (opt == 2)
    {
        system("cls");
        cout << "Enter the new username: ";
        cin >> newUser;
        cout << "Enter the new password: ";
        cin >> newUserPass;
        cout << "Enter the initial balance: ";
        cin >> newUserBalance;
        cout << "Account created successfully!" << endl;
        home();
    }
}
void menu()
{
    cout << "Press 1 to make a transaction." << endl;
    cout << "Press 2 to add Money." << endl;
    cout << "Press 3 to Check Balance." << endl;
    cout << "Press 4 to pay bills." << endl;
    cout << "Press 5 to buy Online. " << endl;
    cout << "Press 6 to Logout." << endl;
    cout << "Press 7 to Exit." << endl;
}
void buyOnline()
{
    int shirt = 20;
    int bag = 50;
    int shoes = 70;
    int iphone = 1000;
    int kit = 100;
    int medicine = 15;
    cout << "Which Product you Want to Buy?" << endl;
    cout << "Press 1 for Bag." << endl;
    cout << "Press 2 for Shoes." << endl;
    cout << "Press 3 for Shirt." << endl;
    cout << "Press 4 for iphone15." << endl;
    cout << "Press 5 for Kit." << endl;
    cout << "Press 6 for Medicine." << endl;
    cin >> opt;

    char ch;
    if (opt == 1)
    {
        cout << "Bags's price is 20$,Do you want to proceed(y/n)?";
        cin >> ch;
        if ((ch == 'y' || ch == 'Y') && balance >= bag)
        {
            balance -= bag;
            cout << "Purchase Successful, It'll be delivered in 2 days ;)" << endl;
            cout << "Your current balance is $" << balance << endl;
        }
        else
            cout << "Payment unsuccessful ;(" << endl;
    }
    else if (opt == 2)
    {
        cout << "The price of Shoes is $" << shoes << " ,Do you want to proceed(y/n)?";
        cin >> ch;
        if ((ch == 'y' || ch == 'Y') && balance >= shoes)
        {
            balance -= shoes;
            cout << "Purchase Successful, It'll be delivered in 2 days ;)" << endl;
            cout << "Your current balance is $" << balance << endl;
        }
        else
            cout << "Payment unsuccessful ;(" << endl;
    }
    else if (opt == 3)
    {
        cout << "The price of Shirt is $" << shirt << " ,Do you want to proceed(y/n)?";
        cin >> ch;
        if ((ch == 'y' || ch == 'Y') && balance >= shirt)
        {
            balance -= shirt;
            cout << "Purchase Successful, It'll be delivered in 2 days ;)" << endl;
            cout << "Your current balance is $" << balance << endl;
        }
        else
            cout << "Payment unsuccessful ;(" << endl;
    }
    else if (opt == 4)
    {
        cout << "The price of iphone15 is $" << iphone << " ,Do you want to proceed(y/n)?";
        cin >> ch;
        if ((ch == 'y' || ch == 'Y') && balance >= iphone)
        {
            balance -= iphone;
            cout << "Purchase Successful, It'll be delivered in 2 days ;)" << endl;
            cout << "Your current balance is $" << balance << endl;
        }
        else
            cout << "Payment unsuccessful ;(" << endl;
    }
    else if (opt == 5)
    {
        cout << "The price of Kit is $" << kit << " ,Do you want to proceed(y/n)?";
        cin >> ch;
        if ((ch == 'y' || ch == 'Y') && balance >= kit)
        {
            balance -= kit;
            cout << "Purchase Successful, It'll be delivered in 2 days ;)" << endl;
            cout << "Your current balance is $" << balance << endl;
        }
        else
            cout << "Payment unsuccessful ;(" << endl;
    }
    else if (opt == 6)
    {
        cout << "The price of medicine is $" << kit << " ,Do you want to proceed(y/n)?";
        cin >> ch;
        if ((ch == 'y' || ch == 'Y') && balance >= medicine)
        {
            balance -= medicine;
            cout << "Purchase Successful, It'll be delivered in 2 days ;)" << endl;
            cout << "Your current balance is $" << balance << endl;
        }
        else
            cout << "Payment unsuccessful ;(" << endl;
    }
    else
        cout << "Invalid response" << endl;
}
void transaction()
{
    cout << "Press 1 to Withdraw" << endl;
    cout << "Press 2 to Send money" << endl;
    cin >> opt;
    if (opt == 1)
    {
        cout << "How much you want to Withdraw? $";
        cin >> amount;
        if (amount > balance)
            cout << "Sorry! You cannot withdraw,your Balance is Low" << endl;

        else
        {
            cout << "Withdrawal successful" << endl;
            balance -= amount;
            cout << "Your balance is $" << balance << endl;
        }
    }
    else if (opt == 2)
    {
        cout << "Whom do you want to Send?" << endl;
        cout << "1. " << user1Name << endl;
        cout << "2. " << user2Name << endl;
        if (newUser != "")
            cout << "3. " << newUser << endl;
        cin >> opt;
        cout << "How much you want to send? $";
        cin >> amount;
        if (opt == 1)
        {
            if (amount < balance)
            {
                user1Balance += amount;
                balance -= amount;
                cout << "Successfully transfered $" << amount << " to " << user1Name << endl;
            }
            else
                cout << "Payment Unsuccessful ;(";
        }
        else if (opt == 2)
        {
            if (amount < balance)
            {
                user2Balance += amount;
                balance -= amount;
                cout << "Successfully transfered $" << amount << " to " << user2Name << endl;
            }
            else
                cout << "Payment Unsuccessful ;(";
        }
        else if (opt == 3 && newUser != "")
        {
            if (amount < balance)
            {
                newUserBalance += amount;
                balance -= amount;
                cout << "Successfully transfered $" << amount << " to " << newUser << endl;
            }
            else
                cout << "Payment Unsuccessful ;(";
        }
        else
            cout << "Invalid CHoice";
    }
}
void addMoney()
{
    cout << "How much you want to add? ";
    cin >> amount;
    balance += amount;
    cout << amount << "$ added successfully" << endl;
    cout << "Your balance is now $" << balance << endl;
}
void checkBalance()
{
    cout << "Your balance is $" << balance << endl;
}

void billPayment()
{
    cout << "Which bill you want to pay? " << endl;
    cout << "Press 1 for Electricity " << endl;
    cout << "Press 2 for Gas " << endl;
    cin >> opt;
    char ch;
    if (opt == 1)
    {
        int bill;
        cout << "What's your Electricity bill? $";
        cin >> bill;
        cout << "Your Electricity bill is $" << bill << ", do you want to proceed (y/n)?" << endl;
        cin >> ch;
        if ((ch == 'Y' || ch == 'y') && balance < bill)
        {
            balance -= bill;
            cout << "Payment successful ;)";
            cout << "Your balance is $" << balance << endl;
        }
        else
            cout << "Payment unsuccessful ;(" << endl;
    }
    else if (opt == 2)
    {
        int bill;
        cout << "What's your Gas Bill? $";
        cin >> bill;
        cout << "Your Gas Bill is " << bill << ", do you want to proceed (y/n)?" << endl;
        cin >> ch;
        if ((ch == 'Y' || ch == 'y') && balance < bill)
        {
            balance -= bill;
            cout << "Payment successful ;)";
            cout << "Your balance is $" << balance << endl;
        }
        else
            cout << "Payment Unsuccessful ;(" << endl;
    }
}
void createAccount()
{
    cout << "Enter the new username: ";
    cin >> newUser;
    cout << "Enter the new password: ";
    cin >> newUserPass;
    cout << "Enter the initial balance: ";
    cin >> newUserBalance;
    cout << "Account created successfully!" << endl;
}
void updateAccount()
{
    cout << "Select User Account:" << endl;
    if (user1Name != "")
        cout << "Press 1. for " << user1Name << endl;
    if (user2Name != "")
        cout << "Press 2. for " << user2Name << endl;
    if (newUser != "")
        cout << "Press 3. for " << newUser << endl;
    cin >> opt;
    if (opt == 1)
    {
        cout << "Enter new password for " << user1Name << endl;
        cin >> user1Pass;
        cout << "Enter new balance for " << user1Name << endl;
        cin >> user1Balance;
        cout << "Account updated successfully!" << endl;
    }
    if (opt == 2)
    {
        cout << "Enter new password for " << user2Name << endl;
        cin >> user2Pass;
        cout << "Enter new balance for " << user2Name << endl;
        cin >> user2Balance;
        cout << "Account updated successfully!" << endl;
    }
    if (opt == 3)
    {
        cout << "Enter new password for " << newUser << endl;
        cin >> newUserPass;
        cout << "Enter new balance for " << newUser << endl;
        cin >> newUserBalance;
        cout << "Account updated successfully!" << endl;
    }
}
void deleteAccount()
{
    cout << "Which user Account you Want to Delete?" << endl;
    if (user1Name != "")
        cout << "Press 1. to delete, " << user1Name << endl;
    if (user2Name != "")
        cout << "Press 2. to delete, " << user2Name << endl;
    cin >> opt;
    if (opt == 1)
    {
        cout << user1Name << " deleted successfully" << endl;
        user1Name = "";
        user1Balance = 0;
        user1Pass = "";
    }
    else if (opt == 2)
    {
        cout << user2Name << " deleted successfully" << endl;
        user2Name = "";
        user2Balance = 0;
        user2Pass = "";
    }
    else
        cout << "Invalid CHoice!" << endl;
}
void readAcccounts()
{
    cout << "Accounts List:" << endl;
    if (user1Name != "")
        cout << "User: " << user1Name << endl;
    cout << "Pass: " << user1Pass << endl;
    cout << "Balance: " << user1Balance << endl
         << endl;
    if (user2Name != "")
        cout << "User: " << user2Name << endl;
    cout << "Pass: " << user2Pass << endl;
    cout << "Balance: " << user2Balance << endl
         << endl;
    if (newUser != "")
        cout << "User: " << newUser << endl;
    cout << "Pass: " << newUserPass << endl;
    cout << "Balance: " << newUserBalance << endl
         << endl;
}
void adminMenu()
{
    cout << "ADMIN Panel:" << endl;
    cout << "Press 1. to Create Account" << endl;
    cout << "Press 2. to Update Account" << endl;
    cout << "Press 3. to Delete Account" << endl;
    cout << "Press 4. to Read Accounts" << endl;
    cout << "Press 5. to Logout" << endl;
    cout << "Press 6. to exit " << endl;
}

int main()
{
hell:
    system("CLS");
    home();
    if (user == admin && password == adminPass)
    {
        cout << "Welcome, ADMIN ! You have SUDO Powers" << endl;
        while (true)
        {
            adminMenu();
            cin >> opt;
            if (opt == 1)
                createAccount();
            else if (opt == 2)
                updateAccount();
            else if (opt == 3)
                deleteAccount();
            else if (opt == 4)
                readAcccounts();
            else if (opt == 5)
                goto hell;
            else if (opt == 6)
                return 0;
            else
                cout << "Invalid choice!" << endl;
        }
    }
    else if ((user == user1Name && password == user1Pass) || (user == user2Name && password == user2Pass) || (user == newUser && password == newUserPass))
    {
        if (user == user1Name)
            balance = user1Balance;
        else if (user == user2Name)
            balance = user2Balance;
        else if (user == newUserPass)
            balance = newUserBalance;
        cout << "Welcome, " << user << "!" << endl;
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
                billPayment();
            else if (option == 5)
                buyOnline();
            else if (option == 6)
                goto hell;
            else if (option == 7)
                break;
            else
                cout << "Invalid choice" << endl;
        }
    }

    else
        cout << "Invalid username or password" << endl;

    return 0;
}