#include<iostream>
#include<vector>
using namespace std;
class Account{   //creating Account class
    int Num;  //Num= Account Number
    string Name;  //Name= Customer Name
    double Bal;   //Bal= Balance
    public:
    Account(int Num, string Name, double Bal){  //Constructor for Account class
        this->Num = Num;   //Save the Account Number inside Num of the class
        this->Name = Name;  //Save the customer name inside Name of the class
        this->Bal = Bal;    //Save the Balance inside Bal of the class
    }
    void Deposit(double Amount){  //creating Deposit function
        Bal += Amount;    //Bal = Balance + Amount
    }
    bool Withdraw(double Amount){  //creating withdraw function
        if(Bal > Amount){    //if the condition is true then only do the instrcution inside if block
            Bal -= Amount;  //Bal = Balance - Amount
            return true;   //return true if the condition is true
        }
        return false;    //return false if the condition is false
    }
    double getBalance() const{   //creating getBalance function
        return Bal;              //return the value of Bal
    }
    int getAccNum() const{   //creating getAccNum function
        return Num;          //return the value of Num
    }
    string getCusName() const{   //creating getCusname function
        return Name;            //return the value of Name
    }
};

class Bank{                 //creating Bank class
    vector<Account> acc;
    public:
    void Create(int Num, string Name, double Deposit){    //this fucntion is for creating bank account
        Account account(Num, Name, Deposit);     //constructor
        acc.push_back(account);                //implementation of vector to store the value inside the vector
        cout<<"Account Creatred!!"<<endl;
    }
    void Display(int Num){                //this fucntion is for Displaying the information of account holder
        for(Account& a : acc){
            if(a.getAccNum() == Num){
                cout<<"Account Number: "<<a.getAccNum()<<endl;
                cout<<"Customer Name: "<<a.getCusName()<<endl;
                cout<<"Balance: "<<a.getBalance()<<endl;
                return;
            }
        }
        cout<<"Account not found!!"<<endl;
    }
    void Deposit(int Num, double Amount){    //this fucntion is used for Depositing the money in the bank
        for(Account& a : acc){ 
            if(a.getAccNum() == Num){
                a.Deposit(Amount);
                cout<<"Ammount Deposited!!"<<endl;
                return;
            }
        }
        cout<<"Account not found!!"<<endl;
    }
    void Withdraw(int Num, double Amount){    //for withdrawaling the money from the bank
        for(Account& a : acc){
            if(a.getAccNum() == Num){
                if(a.Withdraw(Amount)){
                    cout<<"Withdrawal Success!!"<<endl;
                }
                else{
                    cout<<"Insufficient Balance!!"<<endl;
                }
                return;
            }
        }
        cout<<"Account not found!!"<<endl;
    }
};
int main(){    //main function
    Bank bnk;
    int choice, num;
    string name;
    double bal, amount;
    while(true){
        cout<<"Bank Management System Menu:"<<endl;
        cout<<"1. Create Account"<<endl;
        cout<<"2. Display Account Details"<<endl;
        cout<<"3. Deposit"<<endl;
        cout<<"4. Withdraw"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;   //choice for choosing
        switch(choice){
            case 1:   //if users chooses 1 then excute the below
                cout<<"Enter Account Number: ";
                cin>>num;
                cout<<"Enter Customer Name: ";
                cin>>name;
                cout<<"Enter Initial Deposit: ";
                cin>>bal;
                bnk.Create(num, name, bal);
                break;

            case 2:   //if users chooses 2 then excute the below
                cout<<"Enter Account Number: ";
                cin>>num;
                bnk.Display(num);
                break;

            case 3:   //if users chooses 3 then excute the below
                cout<<"Enter Account Number: ";
                cin>>num;
                cout<<"Enter Deposit Amount: ";
                cin>>amount;
                bnk.Deposit(num, amount);   //calling Deposit function
                break;

            case 4:   //if users chooses 4 then excute the below
                cout<<"Enter Account Number: ";
                cin>>num;
                cout<<"Enter Withdrawal Amount: ";
                cin>>amount;
                bnk.Withdraw(num, amount);  //calling withdraw function
                break;

            case 5:   //if users chooses 5 then excute the below
                cout<<"Exiting the program!!";
                return 0;

            default:   //if users does'nt choose any one of these then excute the below
                cout<<"Invalid choice, Please try again."<<endl;
        }
    }
    return 0;
}