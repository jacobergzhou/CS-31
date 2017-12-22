//
//  main.cpp
//  Project 2
//
//  Created by Jacob on 1/24/17.
//  Copyright © 2017 Jacob. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    // declare the following variables
    string userName;
    
    double mile = 0;
    
    double time = 0;
    
    string carType;
    
    double totalFare = 0;
    
    
    //type in the name of the user
    cout << "Customer Name: ";
    getline(cin, userName);//need to use getline in case the userName contains blank space
    
    if (userName == "")
    {
        cout << "--- You must enter a customer name.\n";//do not forget the comma sign
        
        return 1;
    }
    
    //type in the miles driven
    cout << "Miles to be driven: ";
    cin >> mile;
    
    if (mile <= 0)
    {
        cout << "--- The mileage must be positive.\n";
        return 1;
    }
 
    //type in the minutes used
    cout << "Minutes to be driven: ";
    cin >> time;
    
    if (time <= 0)
    {
        cout << "--- The time must be positive.\n";
        return 0;
    }

    //type in the ride-type
    cout << "Ride type: ";
    cin.ignore(10000, '\n');// causes characters up to and including the next newline character to be consumed and discarded.
    getline (cin, carType);//another use of getline
    
    if (carType != "Br-UberXL" && carType != "Br-UberX")//pay attention to the precedence
    {
        cout << "--- The ride type is not valid.\n";
        return 1;
    }
    
    //calculate the total fare needed
    if (carType == "Br-UberX")
    {
        totalFare = 0.15 * time + 0.9 * mile + 1.65;
        if ( totalFare < 5.15)//need to check whether the value computed is less than the minimum value
            totalFare = 5.15;
    }

    if (carType == "Br-UberXL")
    {
        totalFare = 0.3 * time + 1.55 * mile + 1.65;
        if ( totalFare < 7.65)//another checking step
            totalFare = 7.65;
    }
    
    // show two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "--- The fare for " << userName << " is $" << totalFare << endl;//pay attention to the blank space in the sentence
    

}
