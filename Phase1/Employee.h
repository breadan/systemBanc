#pragma once
#include "Person.h"
#include<iostream>
using namespace std;

class Employee :
    public Person
{
private:
    double salary;
public:
    Employee();
    Employee( string name, string passWord, int id, double salary);
    void setData( string name, string passWord, int id, double salary);
    void setSalaryE();
    //
    double getSalaryE();
    //
    void display();
        
};

