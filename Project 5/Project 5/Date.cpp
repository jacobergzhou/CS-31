//
//  date.cpp
//  Project 5
//
//  Created by Jacob on 2/23/17.
//  Copyright © 2017 Jacob. All rights reserved.
//

#include "date.h"
#include <iostream>
#include <string>
using namespace std;

//Date constructor
Date :: Date(int month, int day)
{
    mMonth = month;
    mDay = day;
}

Date :: Date()
{
    mMonth = 0;
    mDay = 0;
}

//Date accessor
int Date::getMonth()
{
    return mMonth;
}

int Date :: getDay()
{
    return mDay;
}

