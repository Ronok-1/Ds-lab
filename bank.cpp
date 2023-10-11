#include<iostream>
using namespace std;
struct BankAccount
{
    string Account_Number;
    string Account_Holder_Name;
    double Account_Balance;
};
int main()
{
    BankAccount b;
    b.Account_Number="123456789";
    b.Account_Holder_Name= "Ahmed";
    b.Account_Balance=80000.00;
    cout<<"Account Number: "<<b.Account_Number<<endl;
    cout<<"Account Holder Name: "<<b.Account_Holder_Name<<endl;
    cout<<"Account Balance: "<<b.Account_Balance<<endl;
    return 0;
}
