#include<iostream>

using namespace std;
struct person {
  int account, amount;
  string name;
};
person p[20];
int a, no = 1, i = 1, j, x;
void display() {
  cout << "MAIN MENU" << endl;
  cout << "01. NEW ACCOUNT" << endl;
  cout << "02. DEPOSIT AMOUNT" << endl;
  cout << "03. WITHDRAW AMOUNT" << endl;
  cout << "04. BALANCE ENQUIRY" << endl;
  cout << "05. ALL ACCOUNT HOLDERS LIST" << endl;
  cout << "06. CLOSE AN ACCOUNT" << endl;
  cout << "07. MODIFY AN ACCOUNT" << endl;
  cout << "08. EXIT" << endl;
  cout << "select your option <1-8> :";
}
void create() {
  cout << "***********************************************" << endl;
  cout << "            Create New Account" << endl;
  cout << "***********************************************" << endl;
  cout << "Enter Account Number :";
  cin >> p[no].account;
  for (x = 1; x < no; x++) {
    if (p[x].account == p[no].account) {
      cout << "***********************************************" << endl;
      cout << "This Account Number Already Existed\n" << "enter Another Number" << endl;
      cout << "***********************************************" << endl;
      x++;
      break;
    }
  }
  x--;
  if (p[x].account != p[no].account) {
    cout << "Enter Name of Account Holder :";
    cin >> p[no].name;
    cout << "Enter Initial Amount :";
    cin >> p[no].amount;
    no++;
    cout << "\nYour Account Created Successfully.." << endl << endl;
    cout << "***********************************************" << endl << endl;
  }
  if (no == 1) {
    cout << "Enter Name of Account Holder :";
    cin >> p[no].name;
    cout << "Enter Initial Amount :";
    cin >> p[no].amount;
    no++;
    cout << "\nYour Account Created Successfully.." << endl << endl;
    cout << "***********************************************" << endl << endl;
  }
}
void Deposit() {
  int d;
  i = 1;
  cout << "***********************************************" << endl;
  cout << "           Deposit Amount" << endl;
  cout << "***********************************************" << endl;
  cout << "Enter your Account Number :";
  cin >> p[j].account;
  while (i <= no) {
    if (p[i].account != p[j].account) {
      i++;
    } else {
      cout << "Name of Account Holder :" << p[i].name << endl;
      cout << "Total Amount :" << p[i].amount << endl;
      cout << "Deposit Amount :";
      cin >> d;
      cout << "Your Current Amount is :" << d + p[i].amount << endl;
      p[i].amount += d;
      break;
    }
  }
  if (p[i].account != p[j].account) {
    cout << "     Wrong Account Number.." << endl;
  }
  cout << "***********************************************" << endl << endl;
}
void Withdraw() {
  int g;
  i = 1;
  cout << "***********************************************" << endl;
  cout << "               Withdraw Amount" << endl;
  cout << "***********************************************" << endl << endl;
  cout << "Enter Your Account Number :";
  cin >> p[j].account;
  while (i <= no) {
    if (p[i].account != p[j].account) {
      i++;
    } else {
      cout << "Name of Account Holder :" << p[i].name << endl;
      cout << "Total Amount :" << p[i].amount << endl;
      cout << "withdraw Amount :";
      cin >> g;
      if (p[i].amount >= g) {
        p[i].amount -= g;
        cout << "Your Current Amount is :" << p[i].amount << endl;
        break;
      } else {
        cout << "Not Enough Credit " << endl;
        break;
      }
    }

  }
  if (p[i].account != p[j].account) {
    cout << "    Wrong Account Number.. " << endl;
  }
  cout << "***********************************************" << endl << endl;
}
void Details() {
  i = 1;
  cout << "***********************************************" << endl;
  cout << "       Account Details" << endl;
  cout << "***********************************************" << endl << endl;
  cout << "Enter Your Account Number :";
  cin >> p[j].account;
  while (i <= no) {
    if (p[i].account != p[j].account) {
      i++;
    } else {
      cout << "Account Number :" << p[i].account << endl;
      cout << "Name of Account Holder :" << p[i].name << endl;
      cout << "total Amount :" << p[i].amount << endl;
      break;
    }
  }
  if (p[i].account != p[j].account) {
    cout << "     Wrong Account Number.." << endl;
  }
  cout << "***********************************************" << endl << endl;
}
void List() {
  cout << "***********************************************" << endl;
  cout << "           List of Account Holders" << endl << endl;
  cout << "***********************************************" << endl << endl;
  cout << "Ac no\t\t" << "Name\t\t" << "Amount" << endl;
  for (i = 1; i < no; i++) {
    cout << p[i].account << "\t\t" << p[i].name << "\t\t" << p[i].amount << endl;
  }
  cout << "***********************************************" << endl << endl;
}
void Remove() {
  cout << "***********************************************" << endl;
  cout << "           close Account" << endl;
  cout << "***********************************************" << endl << endl;
  i = 1;
  cout << "Enter Your Account Number :";
  cin >> p[j].account;
  while (i <= no) {
    if (p[i].account != p[j].account) {
      i++;
    } else {
      for (int k = i; k < no; k++) {
        p[k].account = p[k + 1].account;
        p[k].amount = p[k + 1].amount;
        p[k].name = p[k + 1].name;
      }
      no--;
      cout << "****************************************************" << endl;
      cout << "Record Deleted Successfully.." << endl;
      cout << "****************************************************" << endl << endl;
      break;
    }
  }
}
void Modify() {
  i = 1;
  cout << "***********************************************" << endl;
  cout << "        Modify Account" << endl;
  cout << "***********************************************" << endl << endl;
  cout << "Enter Your Account Number";
  cin >> p[j].account;
  while (i <= no) {
    if (p[i].account != p[j].account) {
      i++;
    } else {
      cout << "Enter New Account Number :";
      cin >> p[i].account;
      cout << "Enter Name of Account Holder :";
      cin >> p[i].name;
      cout << "Total Amount :" << p[i].amount << endl << endl;
      cout << "   Account Updated Successfully" << endl;
      break;
    }
  }
  if (p[i].account == p[j].account) {
    cout << "Wrong Account Number" << endl;
  }
  cout << "***********************************************" << endl << endl;
}
int main() {
  while (true) {
    display();
    cin >> a;
    system("cls");
    switch (a) {
    case 1: {
      create();
      break;
    }
    case 2: {
      Deposit();
      break;
    }
    case 3: {
      Withdraw();
      break;
    }
    case 4: {
      Details();
      break;
    }
    case 5: {
      List();
      break;
    }

    case 6: {
      Remove();
      break;
    }

    case 7: {
      Modify();
      break;
    }

    case 8: {
      return false;
      break;
    }
    default:
      cout << "***********************************************" << endl;
      cout << "Wrong Input" << endl;
      cout << "***********************************************" << endl << endl;
      break;
    }

  }

}
