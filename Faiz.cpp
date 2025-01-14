//Name:AHMAD FAIZZUDDIN BIN FAKHRUL ANWAR
//MATRICS:23303878

#include <iostream>
#include <string.h>
#include <iomanip>
#include <cmath>
using namespace std;
double Component[12][2] = {{0,24},{0,33},{0,12},{0,1},{0,5},{0,17},{0,22},{0,56},{0,34},{0,11},{0,7},{0,34}};
double Gadget[6][2] = {{0,23},{0,43},{0,23},{0,12},{0,44},{0,10}};
double Accesories[9][2] = {{0,34},{0,12},{0,9},{0,21},{0,2},{0,23},{0,15},{0,16},{0,10}};

void displayStock(int selection, double Gadget[6][2], double Accesories[9][2], double Component[12][2], string gadget[6][2], string accesories[9][2], string component[12][2])
{
    int i,j;

    switch(selection)
    {
        case 1:
        {
            cout << "GADGETS" << endl;
            cout << "========================================" << endl;
            cout << left << setw(20) << "Items" << right << setw(20) << "Stocks" << endl;
            cout << "========================================" << endl;
            for(i=0;i<6;i++)
            {
                cout << left << setw(20) << gadget[i][0] << right << setw(10) << "|" << right << setw(10) << Gadget[i][1] << endl;
            }
            break;
        }
        case 2:
        {
            cout << "ACCESORIES" << endl;
            cout << "========================================" << endl;
            cout << left << setw(20) << "Items" << right << setw(20) << "Stocks" << endl;
            cout << "========================================" << endl;
            for(i=0;i<9;i++)
            {
                cout << left << setw(20) << accesories[i][0] << right << setw(10) << "|" << right << setw(10) << Accesories[i][1] << endl;
            }
            break;
        }
        case 3:
        {
            cout << "COMPONENTS" << endl;
            cout << "========================================" << endl;
            cout << left << setw(20) << "Items" << right << setw(20) << "Stocks" << endl;
            cout << "========================================" << endl;
            for(i=0;i<12;i++)
            {
                cout << left << setw(20) << component[i][0] << right << setw(10) << "|" << right << setw(10) << Component[i][1] << endl;
            }
            break;
        }
    }
}

void checkstocks()
{   
    int loopingcondition;
    do{
    int selection;
    string gadget[6][2] = {{"Samsung A12"}, {"Samsung Panasonic TV"}, {"Ps5"}, {"Smartwatch"}, {"Laptop"}, {"Iphone 17 Pro"}};
    string accesories[9][2] = {{"Phone Case"}, {"Charging Cable Type"}, {"Earbud"}, {"Powerbank"}, {"Keyboard & Mouse"}, {"Mousepad"}, {"Sony Speaker"}, {"Wired Headphone"}};  
    string component[12][2] = {{"Resistor"},{"Capacitor"},{"Lithium Battery"},{"LED Light"},{"Buzzer"},{"Transistor"},{"Switch"},{"Relay"},{"Connecting Wire"},{"PCB Board"},{"Breadboard"},{"Soldering Equipment"}};    


    cout << "\n[1] Gadgets";
    cout << "\n[2] Accesories";
    cout << "\n[3] Components";
    cout << "\n "; 
    cout << "\nPlease pick a category: ";
    cin >> selection;
    cout << " " << endl;

    displayStock(selection,Gadget,Accesories,Component,gadget,accesories,component);
    
    cout<<"Do you wish to continue?\n";
    cout<<"1.Yes\n2.No\n";
    cin>>loopingcondition;
    }
    while (loopingcondition==1);
    return;
    
}




void operations(int categorieselect)
{
        double price,pricecondition;
        int itemselect1=0;

    switch (categorieselect)
    {
        
    case 1:
        cout <<"1.Samsung phone A12\n";
        cout <<"2.Smart Panasonic tv\n";
        cout <<"3. PS5\n";
        cout <<"4.Smart TV\n";
        cout <<"5.Laptop (Lenovo thinkpad)\n";
        cout <<"6.Iphone 17 Pro\n";

        cin >> itemselect1;

        cout << "Enter new price\n";
        cin >> price;

        cout <<"The price of RM" << Gadget[itemselect1][0] << " will be replace with RM";
        cout << price<<endl;

        cout << "Select true or false\n";
        cout <<"1. True\n";
        cout <<"2. False\n";
        cin >> pricecondition;
        

        if (pricecondition == 1)
        {
            Gadget[itemselect1][0] = price;
            cout << "Update succesfull";
        }
        else 
        {
            cout <<"Action canceled......";
        }
        break;

        case 2:
        cout << "Please select the item:\n";
        cout << "1.Phone case\n";
        cout << "2.Charging cable type C\n";
        cout << "3.Earbud \n";
        cout << "4.Power bank\n";
        cout << "5.Keyboard and mouse\n";
        cout << "6.Mouse Pad\n";
        cout << "7.Sony speaker\n";
        cout << "8.Wired earphone\n";
        cout << "9.Sound equipment\n";

        cin >> itemselect1;

        cout << "Enter new price\n";
        cin >> price;

        cout <<"The price of RM" << Accesories[itemselect1][0] << " will be replace with RM";
        cout << price<<endl;

        cout << "Select true or false\n";
        cout <<"1. True\n";
        cout <<"2. False\n";
        cin >> pricecondition;

        if (pricecondition == 1)
        {
            Accesories[itemselect1][0] = price;
            cout << "Update succesfull";
        }
        else 
        {
            cout <<"Action canceled......";
        }
        break;
        case 3:
         cout << "Please select the item:\n";
        cout << "1.Resistor (5 ohm)\n";
        cout << "2.Capacitor(1 f)\n";
        cout << "3.Battery lithium \n";
        cout << "4.Led light\n";
        cout << "5.Buzzer\n";
        cout << "6.Transistor\n";
        cout << "7.Switch\n";
        cout << "8.Relay\n";
        cout << "9.Connecting wire\n";
        cout << "10.PCB board\n";
        cout << "11.Bread board\n";
        cout << "12.Soldering equipment\n";
        cin >> itemselect1;

        cout << "Enter new price\n";
        cin >> price;

        cout <<"The price of RM" << Component[itemselect1][0] << " will be replace with RM";
        cout << price<<endl;

        cout << "Select true or false\n";
        cout <<"1. True\n";
        cout <<"2. False\n";
        cin >> pricecondition;

        if (pricecondition == 1)
        {
            Component[itemselect1][0] = price;
            cout << "Update succesfull";
        }
        else 
        {
            cout <<"Action canceled......";
        }
        break;
    
    default:
    cout << "Invalid option";
        break;
    }
    return;
}

void startpricechanger()
{
    int loopcondition;
    do
    {
    double priceup,pricedown,price,pricecondition;
    int categorieselect,itemselect1=0;

    cout << "Select which categories that will be change price\n";
    cout <<"1.Gadgets\n";
    cout <<"2.Accesories\n";
    cout <<"3.Components\n";

    cin >> categorieselect;
    
    for(int i =0 ;i<12 ;i++)    // remove the garbage value
    {
        for(int j =0 ; j< 2; j++)
        {
            if (Gadget[i][j] < 1)
            {
                Gadget[i][j]=0;
            }
        }
    }
     for(int i =0 ;i<12 ;i++)    // remove the garbage value
    {
        for(int j =0 ; j< 2; j++)
        {
            if (Accesories[i][j] < 1)
            {
                Accesories[i][j]=0;
            }
        }
    }
     for(int i =0 ;i<12 ;i++)    // remove the garbage value
    {
        for(int j =0 ; j< 2; j++)
        {
            if (Component[i][j] < 1)
            {
                Component[i][j]=0;
            }
        }
    }

    operations(categorieselect);

    
    cout << "\n";
    cout<<"Do you wish to continue?\n";
    cout << "1.Yes\n";
    cout<< "2.No\n";
    cin >> loopcondition;
    }
    while(loopcondition ==1);
    return;
    
    
}








void stockupdate()                                     //stock level function
{
    int Options,row,collum = 2, stock_update,continueupdate;
    //double Gadget[6][2],Accesories[9][2], Component[12][2];    // the array will be global this just
    do                                                           // a place holder

    {       
    cout << "Please choose the categories that needed update stock:\n";
    cout << "1. Gadget\n";
    cout << "2. Accesories\n";
    cout << "3. Components\n";
    cin >> Options;


    switch (Options)
    {
    case 1: 
    cout << "Please select the item:\n";
    cout << "1.Samsung A12\n";
    cout << "2. Samsung Panasonic tv\n";
    cout << "3. Ps5 \n";
    cout << "4,Smart watch\n";
    cout << "5.Laptop\n";
    cout << "6.Iphone 17 Pro";
    cout << "6.\n";

    cin >> row;

    cout <<"Please insert the stock:";
    cin >> stock_update;

    Gadget[row-1][1] = stock_update;
    for(int i =0 ;i<6 ;i++)
    {
        for(int j =0 ; j< 2; j++) // remove the garbage value
        {
            if (Gadget[i][j] < 1)
            {
                Gadget[i][j]=0;
            }
        }
    }

    for(int i=0 ; i< 6; i++)   //display all stock 
    {
        cout <<"" << Gadget[i][1]<< endl;
    }
        break;
    case 2:
    cout << "Please select the item:\n";
    cout << "1.Phone case\n";
    cout << "2.Charging cable type C\n";
    cout << "3.Earbud \n";
    cout << "4.Power bank\n";
    cout << "5.Keyboard and mouse\n";
    cout << "6.Mouse Pad\n";
    cout << "7.Sony speaker\n";
    cout << "8.Wired earphone\n";
    cout << "9.Sound equipment\n";

    cin >> row;

    cout <<"Please insert the stock:";
    cin >> stock_update;

    Accesories[row-1][1] += stock_update;

    for(int i =0 ;i<9 ;i++) // remove the garbage value
    {
        for(int j =0 ; j< 2; j++)
        {
            if (Accesories[i][j] < 1)
            {
                Accesories[i][j]=0;
            }
        }
    }

    for(int i=0 ; i< 9; i++)   //display all stock 
    {
        cout <<"" << Accesories[i][1]<< endl;
    }
        break;
    case 3:
     cout << "Please select the item:\n";
    cout << "1.Resistor (5 ohm)\n";
    cout << "2.Capacitor(1 f)\n";
    cout << "3.Battery lithium \n";
    cout << "4.Led light\n";
    cout << "5.Buzzer\n";
    cout << "6.Transistor\n";
    cout << "7.Switch\n";
    cout << "8.Relay\n";
    cout << "9.Connecting wire\n";
    cout << "10.PCB board\n";
    cout << "11.Bread board\n";
    cout << "12.Soldering equipment\n";


    cin >> row;

    cout <<"Please insert the stock:";
    cin >> stock_update;

    Component[row-1][1] += stock_update;

    for(int i =0 ;i<12 ;i++)    // remove the garbage value
    {
        for(int j =0 ; j< 2; j++)
        {
            if (Component[i][j] < 1)
            {
                Component[i][j]=0;
            }
        }
    }

    for(int i=0 ; i< 12; i++) //display all stock 
    {
        cout <<"" << Component[i][1]<< endl;
    }
        break;

    default:
    cout << "Invalid choice\n";  
        break;
    }

    cout << "Do you wish to continue to update?\n";
    cout << "1. Yes \n";
    cout << "2. No\n";
    cin >> continueupdate;
    }
    while (continueupdate == 1);
    return;
    
            


}


int main()
{
    string username;
    int password, truepassword = 4231 ;
    int stopemployeefunction;
    
    do
    {
        cout << "Please insert username:\n";
        getline(cin,username);
        cout << "Please insert password:\n";
        cin >> password;

        
        if(password != truepassword)
        {
            cout << " Your password is incorrect\n";
        } 
    }
    while(password != truepassword);
    for(;;)
    {
    cout <<"Welcome " << username << endl;   // all empolyee function will be underhere
    int selector;
    cout <<"Please select task\n";
    cout <<"1.Price changer\n";
    cout <<"2.Stock changer\n";
    cout <<"3.Display stock\n";
    cout <<"Select 0 to stop";
    cin >>selector;

    switch (selector)
    {
    case 1:
        startpricechanger();
        break;
    case 2:
        stockupdate();
        break;
    case 3:
        checkstocks();
        break; 
    case 0:
        cout<< "See you again";
         return 0;                       //chester nanti tukar ni ke return;
    default:
        cout << "Invalid choice";
        break;
    }


    
    
    }                           // if necessary ill do the hpp file for all so no worry


}




