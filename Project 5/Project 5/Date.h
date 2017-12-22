//
//  date.hpp
//  Project 5
//
//  Created by Jacob on 2/23/17.
//  Copyright © 2017 Jacob. All rights reserved.
//

#ifndef date_hpp
#define date_hpp
#include <iostream>
using namespace std;

class Date
{
   private:
    int mMonth;
    int mDay;
   public:
    Date(int month, int day);
    Date();//additional constructor to prevent the error when no argument was implemented in the main function
    int getMonth();
    int getDay();

};

#endif /* date_h */
