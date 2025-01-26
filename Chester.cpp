// CHESTER LEE JET HUI
// MATRIC NUMBER : 23301080
#include <iostream>
#include "main.hpp"
#include "universal.hpp"

void store::CustomerUI()
{ 
    std::cout<<"\nHi! Welcome to Faiz Electronics !\n";
    for(;;)
    { 
    std::cout<<"Please select the the Function that you would like to use.\n(Enter 0 to exit.)\n"
             <<"1. Check Stock\n"
             <<"2. Add to Shopping Cart\n"
             <<"3. Locate an Item\n"
             <<"4. Print Receipt\n"
             <<" > ";

    int key;
    std::cin>>key;

    switch (key)//selects function to be used
    {
    case 1:
        checkstocks();
        break;
    case 2:
        Buying();
        break;
    case 3:
        itemlocator(); 
        break;
    case 4:
        receipt(); 
        break;
    case 0:
        std::cout<<"Thank you for shopping with us !!\n\n";
        return;
        break;    
    default:
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        std::cout<<"Invalid choice.\n";
        break;
    }     
    }
    
}