#include<iostream>
#include<vector>
using namespace std;
class Account{
    public:
    string name;
    int accountnum;
    double balance;
    public:
    Account(string n,int ac,double bal){
        name=n;
        accountnum=ac;
        balance=bal;

    }
    void getinfo(){
        cout<<"Enter Your Name:";
        cin>>name;
        cout<<"Enter Account Number:";
        cin>>accountnum;
        cout<<"Enter Initial Balance:";
        cin>>balance;
        cout<<"Account Created Succesfully.....\n";
        //cout<<"-----------------------------------------------\n";
    }
    void display(){
        cout<<"Name Of Account Holder:"<<name;
        cout<<"\nAccount Number:"<<accountnum;
        cout<<"\nInitial Balance:"<<balance;
    }
    void deposit(){
        double amount;
        cout<<"Enter Amount to Deposit:";
        cin>>amount;
        balance+=amount;
        cout<<"Amount Deposited Succesfully...\n";
        cout<<"Your account balance is"<<balance;
    }
    void withdraw(){
        double amount;
        cout<<"Enter Amount to Withdraw:";
        cin>>amount;
        if(amount<balance){
            balance-=amount;
            cout<<"Amount Withdraw Succesfully...";
            cout<<"\nYour Account Balance is"<<balance<<endl;;
        }else{
            cout<<"Insufficient Balance!";
        }
    }
};
class BankManagement{
       public:
       vector<Account> accounts;
       void Addaccount(string name,int accountnum,double balance){
        accounts.push_back(Account(name,accountnum,balance));
       }
       Account* findaccount(int accountnum){
        for(int i=0;i<accounts.size();i++){
            if(accounts[i].accountnum=accountnum){
                return &accounts[i];
            }
        }
       }

};
class savingAccount:public Account{
    private:
    double interestRate=5;
    public:
    savingAccount(string n,int ac,double bal){
        name=n;
        accountnum=ac;
        balance=bal;

    }
    void addinterest(){
    double interest=(balance*(5/100));
     balance+=interest;
     cout<<"\nAccount Balance with Interest of 5%:"<<balance<<endl;
     cout<<"--------------------------------------------------\n";
    }


};
class Checkingaccount:public Account{
    public:
    Checkingaccount(){}
    
    

};
int main()
{
    savingAccount savings();
    Checkingaccount checking;
    BankManagement bank;
    char op;

    int choice;
    do{
    cout<<"Which type of account do you want to create?\n";
    
    cout<<"1.Saving Account.\n";
    cout<<"2.Current Account.\n";
    cout<<"Enter Choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:{
            string name;
            int accountnum;
            double balance;
            savings.getinfo();
            bank.Addaccount(name,accountnum,balance);
            savings.display();
            savings.addinterest();
            char choice;
    cout<<"What Do You Want to do?\n";
    cout<<"a.Withdraw Money.\n";
    cout<<"b.Deposit Money.\n";
    cout<<"Enter Choice:";
    cin>>choice;
    switch(choice){
        case 'a':
        savings.withdraw();
        
        
    }break;
        case 'b':{
        savings.deposit();
        


        }break;
        }break;
        case 2:{
            checking.getinfo();
            checking.display();
           /* char choice;
            cout<<"What Do You Want to do?\n";
    cout<<"A.Withdraw Money.\n";
    cout<<"B.Deposit Money.\n";
    cout<<"Enter Choice:";
    cin>>choice;
    switch(choice){
        case 'A':
        checking.withdraw();
        
        
    }break;
        case 'B':{
        checking.deposit();
        


        }
        break;*/


        }
        break;
        char op;
        cout<<"What do you want to do??";
        cout<<"A.Withdraw maney.\n";
        cout<<"B.Deposit Money.";
        switch(choice){
            case 'A':
            int accountnum;
            cout<<"Enter the account number to withdraw money:\n";
            cin>>accountnum;
            Account* account=bank.findaccount(accountnum);
            if(account !=NULL){
                savings.withdraw();
            }

            

        }


    }
    cout<<"\nDo you want to continue or exit?[yes/no]";
        cin>>op;
    }while(op=='y'||op=='Y');
   
    return 0;
}