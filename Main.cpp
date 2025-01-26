#include <iostream>
#include "main.hpp"
#include "universal.hpp"
using namespace std;

int main()
{   
    buildData();

    for(;;)
    {
    cout<<" ________________________________\n"
        <<"|                                |\n"
        <<"|        Electronics Store       |\n"
        <<"|            Group 17            |\n"
        <<"|________________________________|\n";

    int key;
    cout<<"Who is using the program ?\n"
        <<"1. Customer\n"
        <<"2. Employee\n"
        <<"(Enter any other number to exit)\n"
        <<"> ";
    
    cin>>key;
    store faiz;

    switch (key)
    {
    case 1:
        faiz.CustomerUI();
        break;
    case 2:
        faiz.EmployeeUI();
        break;
    default:
        cin.clear();
        cin.ignore(1000,'\n');
        saveData();
        return 0;   
        break;
    }
    
    }
    
}
