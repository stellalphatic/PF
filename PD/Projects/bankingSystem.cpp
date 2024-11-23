#include <iostream>
#include <conio.h>
#include <cmath>
#include <string>
using namespace std;
bool isValidNumber(string);
bool validateEmail(string);
string admin = "admin";
string adminPass = "admin123";

const int maxUsers = 5;
string userNames[maxUsers] = {"ahmad", "amir", "", "", ""};
string passwords[maxUsers] = {"pass123", "pass123"};
float userBalance[maxUsers] = {5000, 10000};
string emails[maxUsers] = {"ahmad832@gmail.com", "ahmad832@gmail.com"};

string user;
string password;
float balance = 0;
int amount;
char opt;

void header()
{
    cout << "+-----------------------------------------------------------------------------+     " << endl;
    cout << "|  ####     #    ####   #  #  #     ####  #   #   ###   #####  ####  ##   ##   |    " << endl;
    cout << "|  #   #   #  #   ####  #  # #     #   #   # #   #   #    #    #     # # # #   |     " << endl;
    cout << "|  ####   ######  ##  # #  ##        #      #     #       #    ####  #  #  #   |   " << endl;
    cout << "|  #   #  #    #  ##   ##  # #   #    #     #   #   #     #    #     #     #   |   " << endl;
    cout << "|  ####   #    #  ##    #  #  #   ####      #    ###      #    ####  #     #   |    " << endl;
    cout << "|-----------------------------------------------------------------------------+     " << endl
         << endl;
}
void home()
{
again:
    header();
    cout << "+--------------------------------------+" << endl;
    cout << "|    1. Login                          |" << endl;
    cout << "|    2. New user?Please Signup here    |" << endl;
    cout << "+--------------------------------------+" << endl;
    cin >> opt;
    if (opt == '1')
    {
        cout << "Please Login to your account" << endl;
        cout << "username : ";
        cin >> user;
        cout << "Password : ";
        cin >> password;
    }
    else if (opt == '2')
    {
        system("cls");
        int index = 2;
        while (userNames[index] != "")
        {
            index++;
        }
        string enteredEmail;
        cout << "Enter the new username: ";
        cin >> userNames[index];
        cout << "Enter the new password: ";
        cin >> passwords[index];
    emailagain:
        cout << "Enter email: ";
        cin >> enteredEmail;
        if (validateEmail(enteredEmail))
            emails[index] = enteredEmail;
        else
        {
            cout << "Please Enter a valid Email" << endl;
            goto emailagain;
        }
        system("cls");
        cout << "Account created successfully!" << endl;
        home();
    }
    else
    {
        system("cls");
        cout << "Invalid Choice" << endl;
        goto again;
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
    if (opt == '1')
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
    else if (opt == '2')
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
    else if (opt == '3')
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
    else if (opt == '4')
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
    else if (opt == '5')
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
    else if (opt == '6')
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
    if (opt == '1')
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
    else if (opt == '2')
    {
        cout << "Whom do you want to Send?" << endl;
        for (int i = 0; i < maxUsers; i++)
        {
            if (userNames[i] != user && userNames[i] != "")
                cout << i << ". " << userNames[i] << endl;
        }

        cin >> amount;
        if (opt < '2')
        {
            if (amount < balance)
            {
                userBalance[opt] += amount;
                balance -= amount;
                cout << "Successfully transfered $" << amount << " to " << userNames[opt] << endl;
            }
            else
                cout << "Payment Unsuccessful ;(";
        }

        else
            cout << "Invalid CHoice" << endl;
    }
    else
        cout << "Invalid CHoice" << endl;
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
    if (opt == '1')
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
    else if (opt == '2')
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
    else
        cout << "Invalid Choice" << endl;
}
bool validateEmail(string email)
{
    bool hasAtSign = false;
    bool hasDotCom = false;
    for (int i = 0; i < email.length(); i++)
    {
        if (email[i] == '@')
        {
            hasAtSign = true;
            break;
        }
    }
    if (email.substr(email.length() - 4) == ".com")
        hasDotCom = true;
    if (hasDotCom && hasAtSign)
        return true;
    return false;
}
bool isValidNumber(string number)
{
    for (int i = 0; i < number.length(); i++)
    {
        if (!(number[i] - '0' <= 9))
            return false;
    }
    return true;
}
void createAccount()
{
    int index = 0;
    string enteredEmail;
    string enteredBalance;
    while (userNames[index] != "")
    {
        index++;
    }
    cout << "Enter the new username: ";
    cin >> userNames[index];
    cout << "Enter the new password: ";
    cin >> passwords[index];
emailAgain:
    cout << "Enter email: ";
    cin >> enteredEmail;
    if (validateEmail(enteredEmail))
        emails[index] = enteredEmail;
    else
    {
        cout << "Enter a valid email." << endl;
        goto emailAgain;
    }
balanceAgain:
    cout << "Enter initial balance: ";
    cin >> enteredBalance;
    if (isValidNumber(enteredBalance))
        userBalance[index] = stof(enteredBalance);
    else
    {
        cout << "Enter Valid Balance." << endl;
        goto balanceAgain;
    }
    cout << "Account created successfully!" << endl;
}

void updateAccount()
{
    cout << "Select User Account:" << endl;
    for (int i = 0; i < maxUsers; i++)
    {
        if (userNames[i] != "")
            cout << "Press " << i << ". for " << userNames[i] << endl;
    }

    cin >> opt;
    if ((opt - '0') < maxUsers)
    {
        char option;
        cout << "Press 1. to set new password for " << userNames[opt] << endl;
        cout << "Press 2. to update balance of " << userNames[opt] << endl;
        cin >> option;
        if (option == '1')
        {
            cin >> passwords[(opt - '0')];
            cout << "Account updated successfully!" << endl;
        }
        else if (option == '2')
        {
            cin >> userBalance[opt];
            cout << "Account updated successfully!" << endl;
        }
        else
            cout << "Invalid Choice" << endl;
    }
    else
        cout << "Invalid Choice" << endl;
}
void deleteAccount()
{
    cout << "Which user Account you Want to Delete?" << endl;
    for (int i = 0; i < maxUsers; i++)
    {
        if (userNames[i] != "")
            cout << "Press " << i << ". to delete, " << userNames[i] << endl;
    }

    cin >> opt;
    if ((opt - '0') < maxUsers && (opt - '0') >= 0)
    {
        cout << userNames[opt] << " deleted successfully" << endl;
        userNames[opt] = "";
        userBalance[opt] = 0;
        passwords[opt] = "";
    }

    else
        cout << "Invalid CHoice!" << endl;
}
void readAcccounts()
{
    cout << "Accounts List:" << endl;
    for (int i = 0; i < maxUsers; i++)
    {
        if (userNames[i] != "")
        {
            cout << "User: " << userNames[i] << endl;
            cout << "Pass: " << passwords[i] << endl;
            cout << "Email: " << emails[i] << endl;
            cout << "Balance: " << userBalance[i] << endl
                 << endl;
        }
    }
}
void adminMenu()
{
    cout << "+----------------------------+" << endl;
    cout << "| ADMIN Panel:               |" << endl;
    cout << "| Press 1. to Create Account |" << endl;
    cout << "| Press 2. to Update Account |" << endl;
    cout << "| Press 3. to Delete Account |" << endl;
    cout << "| Press 4. to Read Accounts  |" << endl;
    cout << "| Press 5. to Logout         |" << endl;
    cout << "| Press 6. to exit           |" << endl;
    cout << "+----------------------------+" << endl;
}

int main()
{
hell:
    system("cls");
a:
    home();
    for (int i = 0; i < maxUsers; i++)
    {
        if (user == userNames[i] && password == passwords[i])
        {
            balance = userBalance[i];
            break;
        }
    }
    if (user == admin && password == adminPass)
    {
        cout << "Welcome, ADMIN ! You have SUDO Powers" << endl;
        while (true)
        {
            adminMenu();
            cin >> opt;
            if (opt == '1')
                createAccount();
            else if (opt == '2')
                updateAccount();
            else if (opt == '3')
                deleteAccount();
            else if (opt == '4')
                readAcccounts();
            else if (opt == '5')
                goto hell;
            else if (opt == '6')
                return 0;
            else
                cout << "Invalid choice!" << endl;
        }
    }

    else if (balance != 0)
    {

        cout << "Welcome, " << user << "!" << endl;
        while (true)
        {
            menu();
            char option;
            cin >> option;
            if (option == '1')
                transaction();
            else if (option == '2')
                addMoney();
            else if (option == '3')
                checkBalance();
            else if (option == '4')
                billPayment();
            else if (option == '5')
                buyOnline();
            else if (option == '6')
                goto hell;
            else if (option == '7')
                break;
            else
                cout << "Invalid choice" << endl;
        }
    }

    else
    {
        system("cls");
        cout << "Invalid username or password" << endl;
        goto a;
    }

    return 0;
}