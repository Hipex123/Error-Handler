#pragma once
#include<iostream>
#include<string>
using std::string, std::initializer_list, std::cin, std::cout;

class errorHandler
{
public:
    bool checkInputStr(string& input, string errorMassage, initializer_list<string> cases);
    bool checkInputInt(double& input, string errorMassage, initializer_list<int> cases = {});
    bool checkInputDouble(double& input, string errorMassage, initializer_list<double> cases = {});
    bool isInt(double a);
    bool isDouble(double a);
};