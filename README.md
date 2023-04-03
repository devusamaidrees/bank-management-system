# Bank Management System
This program is a console-based Bank Management System that allows users to perform various banking operations like creating a new account, depositing money, withdrawing money, checking balance, and more.

# Features
The following features are available in the Bank Management System:

#### 1.Create a new account
#### 2.Deposit money
#### 3.Withdraw money
#### 4.Check account balance
#### 5.List all account holders
#### 6.Close an account
#### 7.Modify an account
#### 8.Exit
# Limitations
#### 1.The program can handle a maximum of 20 accounts.
#### 2.The program does not store data persistently, which means that all data will be lost when the program is closed.
# How it works
This program simulates a simple banking system that allows you to perform various banking transactions. The program uses an array of structures to store the account information, including account number, account holder's name, and account balance.

When you run the program, you will see a main menu with eight options:

1.**New Account:** Allows you to create a new bank account by providing the account number, account holder's name, and initial deposit amount. The program will check if the account number already exists and prompt you to enter a different account number if it does.

2.**Deposit Amount:** Allows you to deposit money into an existing bank account by providing the account number and the amount to deposit.

3.**Withdraw Amount:** Allows you to withdraw money from an existing bank account by providing the account number and the amount to withdraw. The program will check if there is enough balance in the account before allowing the withdrawal.

4.**Balance Enquiry:** Allows you to view the account balance of an existing bank account by providing the account number.

5.**All Account Holders List:** Displays a list of all the account holders, including their account numbers and balances.

6.**Close an Account:** Allows you to close an existing bank account by providing the account number. The program will remove the account from the array of structures.

7.**Modify an Account:** Allows you to modify the details of an existing bank account by providing the account number. You can change the account holder's name and the account balance.

8.**Exit:** Exits the program.

To use the program, simply select the appropriate option from the main menu and follow the prompts. The program will perform the requested transaction and return you to the main menu. You can continue to use the program until you choose to exit.
