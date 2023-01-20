#pragma once
#include "Person.h"
#include<iostream>
#include<string>

class Admin :
    public Person
{
protected:
   
    double salaryA;
public:
    Admin();
    Admin(string name, string passWord, int id, double salaryA);
    void setDataA(  string name, string passWord, int id, double salaryA);
    void setSalaryA(double salaryA);
    //
    double getsalaryA();


};

