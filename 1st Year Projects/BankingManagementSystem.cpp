#include <fstream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

class Transaction
{
public:
    string type;
    double amount;
    Transaction(string t, double a) : type(t), amount(a) {}
};

class BankAccount
{
private:
    string accountNumber;
    string accountHolder;
    double balance;
    string securityPin;
    vector<Transaction> transactions;

public:
    BankAccount() : balance(0.0) {}

    void createAccount()
    {
        balance = 0.0;
        int PIN = 0;
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter account holder name: ";
        cin.ignore();
        getline(cin, accountHolder);
        cout << "Set security PIN: ";
        cin >> PIN;
        securityPin = to_string(PIN);

        cout << "Account created successfully!" << endl;
        deleteOldFile();
        saveToFile();
    }
    bool verifyPin()
    {
        string enteredPin;
        cout << "Enter security PIN: ";
        cin >> enteredPin;

        return (enteredPin == securityPin);
    }

    void showAccountDetails()
    {
        if (isEmpty())
        {
            cout << "Please open an account first.\n";
        }
        else
        {
            cout << fixed << setprecision(2);
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Holder: " << accountHolder << endl;
            cout << "Balance: Rs : " << balance << endl;
        }
    }

    void deposit()
    {
        if (isEmpty())
        {
            cout << "Please open an account first.\n";
        }
        else
        {
            string inputAmount;
            cout << "Enter deposit amount: Rs : ";

            try
            {
                cin >> inputAmount;
                double amount = stod(inputAmount);

                balance += amount;
                cout << "Deposit successful! New balance: Rs : " << balance << endl;
                recordTransaction("Deposit", amount);
                deleteOldFile();
                saveToFile();
            }
            catch (const std::invalid_argument &e)
            {
                cout << "Invalid input. Please enter a valid number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

    void withdraw()
    {
        if (isEmpty())
        {
            cout << "Please open an account first.\n";
        }
        else
        {
            if (!verifyPin())
            {
                cout << "Incorrect security PIN. Withdrawal aborted.\n";
                return;
            }

            double amount;
            cout << "Enter withdrawal amount: Rs : ";
            cin >> amount;

            if (amount > balance)
            {
                cout << "Insufficient funds!" << endl;
            }
            else
            {
                balance -= amount;
                cout << "Withdrawal successful! New balance: Rs : " << balance << endl;
                recordTransaction("Withdrawal", amount);
                deleteOldFile();
                saveToFile();
            }
        }
    }

    void deleteAccountFile()
    {
        string filename;
        cout << "Enter account number to delete its file: ";
        cin >> filename;
        if (FILE *file = fopen((filename + ".txt").c_str(), "r"))
        {
            fclose(file);
            remove((filename + ".txt").c_str());
            cout << "File deleted successfully.\n";
        }
        else
        {
            cout << "File not found.\n";
        }
    }

    void recordTransaction(string type, double amount)
    {
        transactions.push_back(Transaction(type, amount));
    }

    void showTransactionHistory()
    {
        cout << "\nTransaction History:\n";
        for (const auto &transaction : transactions)
        {
            cout << "Type: " << transaction.type << ", Amount: Rs " << transaction.amount << endl;
        }
    }

    void saveToFile()
    {
        ofstream file(accountNumber + ".txt");
        file << "Account Number: " << accountNumber << endl;
        file << "Account Holder: " << accountHolder << endl;
        file << "Balance: Rs : " << balance << endl;

        file << "\nTransaction History:\n";
        for (const auto &transaction : transactions)
        {
            file << "Type: " << transaction.type << ", Amount: Rs " << transaction.amount << endl;
        }

        file.close();
    }

    void deleteOldFile()
    {

        if (FILE *file = fopen((accountNumber + ".txt").c_str(), "r"))
        {
            fclose(file);
            remove((accountNumber + ".txt").c_str());
        }
    }

    bool isEmpty() const
    {
        return accountNumber.empty();
    }

    ~BankAccount()
    {
        deleteOldFile();
        saveToFile();
    }
};

int main()
{
    BankAccount account;
    cout << " \n\n\n\n\n<----------Welcome to our Bank Management System ----------> " << endl;

    int choice;
    do
    {
        cout << "\n1. Create Account\n2. Show Account Details\n3. Deposit\n4. Withdraw\n5. Delete Account File\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account.createAccount();
            break;
        case 2:
            account.showAccountDetails();
            break;
        case 3:
            account.deposit();
            break;
        case 4:
            account.withdraw();
            break;
        case 5:
            account.deleteAccountFile();
            break;
        case 6:
            cout << "Exiting program. Thank you!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
