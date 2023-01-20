#pragma once
#include "Person.h"

class Client :
    public Person
{
protected:
    double balance;
public:
    Client();
    Client( string name,string passWord,int id, double balance);
    void setData( string name, string passWord, int id, double balance);
    void setBalance(double balance);
    double getBalance();
    //

    void deposit(double amount);
    void withdraw(double amount);
    void transferTo(double amount, Client& c);//amount هي القيمة المالية المتحركة وبنعمل اوبجكت نحول له المبالغ
    void checkBalance();
    void display();




};

