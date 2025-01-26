// CHESTER LEE JET HUI
// MATRIC NUMBER : 23301080
#include "universal.hpp"
#include "main.hpp"
#include <iostream>
#include <fstream>
double Component[12][2];
double Gadget[6][2];
double Accesories[9][2];

void buildData()//opens file to get the data to be used
{
    std::string name;
    double price;
    double stock;
    
    std::ifstream dataG("Gadgets.txt");
    for (int i = 0; i < 6; i++)
        {        
            dataG>>name>>Gadget[i][0]>>Gadget[i][1];       
        }
    dataG.close();
 
    std::ifstream dataA("Accessories.txt"); 
    
    for (int i = 0; i < 9; i++)
        {        
            dataA>>name>>Accesories[i][0]>>Accesories[i][1];
        }
    dataA.close();

    std::ifstream dataC("Components.txt");    
    for (int i = 0; i < 12; i++)
        {        
            dataC>>name>>Component[i][0]>>Component[i][1];
        }
    dataC.close();
}

void saveData()//opens file to save the data that is used or changed
{
    std::string name;
    std::string list[6];
    double price;
    double stock;
    std::ifstream stringG("Gadgets.txt");

        for (size_t i = 0; i < 6; i++)
        {   
            stringG>>list[i]>>price>>stock;      
        }

    stringG.close();

    std::ofstream outputG;
    outputG.open("Gadgets.txt");
    for (size_t i = 0; i < 6; i++)
    {
        outputG << list[i] << " " << Gadget[i][0] << " " << Gadget[i][1] <<std::endl;
    }
    outputG.close();

    std::ifstream stringA("Accessories.txt");

        for (size_t i = 0; i < 9; i++)
        {   
            stringA>>list[i]>>price>>stock;      
        }
        
    stringA.close();

    std::ofstream outputA;
    outputA.open("Accessories.txt");
    for (size_t i = 0; i < 9; i++)
    {
        outputA << list[i] << " " << Accesories[i][0] << " " << Accesories[i][1] <<std::endl;
    }
    outputA.close();

    std::ifstream stringC("Components.txt");

        for (size_t i = 0; i < 12; i++)
        {   
            stringC>>list[i]>>price>>stock;      
        }
        
    stringC.close();

    std::ofstream outputC;
    outputC.open("Components.txt");
    for (size_t i = 0; i < 12; i++)
    {
        outputC << list[i] << " " << Component[i][0] << " " << Component[i][1] <<std::endl;
    }
    outputC.close();
}