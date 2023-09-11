#include "errorHandler.hpp"

bool errorHandler::checkInputStr(string& input, string errorMassage, initializer_list<string> cases)
{
    

    for(const string& validInput : cases)
    {
        if(validInput == input)
        {
            return true;
        }
    }

    while(true)
    {

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        cout<<errorMassage;
        cin>>input;

        for(const string& validInput : cases)
        {
            if(validInput == input)
            {
                return true;
            }
        }
    }
}

bool errorHandler::checkInputInt(double& input, string errorMassage, initializer_list<int> cases)
{
    if(isInt(input))
    {
        return true;
    }
    else
    {
        while(!isInt(input))
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<errorMassage;
            cin>>input;
        }
        return true;
    }


    for(const int& validInput : cases)
    {
        if(validInput == input)
        {
            return true;
        }
    }

    while(true)
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        cout<<errorMassage;
        cin>>input;

        for(const int& validInput : cases)
        {
            if(validInput == input)
            {
                return true;
            }
        }
    }
}

bool errorHandler::checkInputDouble(double& input, string errorMassage, initializer_list<double> cases)
{

    if(isDouble(input))
    {
        return true;
    }
    else
    {
        while(!isDouble(input))
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<errorMassage;
            cin>>input;
        }
        return true;
    }


    for(const double& validInput : cases)
    {
        if(validInput == input)
        {
            return true;
        }
    }

    while(true)
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        cout<<errorMassage;
        cin>>input;

        for(const double& validInput : cases)
        {
            if(validInput == input)
            {
                return true;
            }
        }
    }
}

bool errorHandler::isInt(double a)
{
    return a == static_cast<int>(a);
}

bool errorHandler::isDouble(double a)
{
    return a == static_cast<double>(a);
}