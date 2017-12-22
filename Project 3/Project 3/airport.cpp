//
//  main.cpp
//  Project 3
//
//  Created by Jacob on 2/10/17.
//  Copyright © 2017 Jacob. All rights reserved.
//

#include <iostream>
#include <string>
#include <cassert>
using namespace std;

// functions that are stated in the spec;
bool isWellFormedAirportString(string commands);
double ontimeArrivalPercentage(string commands, string airlindcode);

// self-made functions to make the code more clear
//bool checkValidString(string commands);
bool checkAirlineCode(string commands, int position);
bool checkNumber( string airportString, int & position );
bool checkSign( string airportString, int position );
int numerator(string commands, string airlinecode);
int denominator(string commands, string airlinecode);
//string transformString(string commands);
string getNumbers(string commands);
string tolower(string commands);

//main function
int main()
{
    
    
    return 0;
    
}
//check wether the airportstring is right or not
bool isWellFormedAirportString(string commands)
{
    bool result = true;//avoid several returns in the same function
    int position= 0;
    commands = tolower(commands);
    while(position < commands.size())
    {
            if (!checkAirlineCode(commands, position))
            {
             result = false;
                break;
            }
        position = position + 2;
        if (!checkNumber(commands, position))
            result = false;
        if (!checkSign(commands, position))
        {
            result = false;
          position= position + 1;
        }
        if (!checkNumber(commands, position))
            result = false;
        position ++;
    }
    return result;
}
//transform all the valid characters in the string other than the lower case letter into ''
/*
string transformString(string commands)
{
    string s = commands; string transformedString = "";
    for (size_t k= 0; k != s.size();k++)
    {
       if (isupper(s[k]))
       {
          s[k] = tolower(s[k]);
       }
       else if (isdigit(s[k]))
       {
          s[k] = ' ';
       }
       else if (s[k] == '+' || s[k] == '-')
       {
          s[k] = ' ';
       }
        transformedString = transformedString + s[k];
    }
    return transformedString;
}
*/

//check whether the airline names are valid
bool checkAirlineCode(string commands, int position)
{
    bool result = false;
    string s = tolower(commands);
    //s = transformString(commands);
          if ((s[position] == 'a' && s[position + 1]=='a') ||
        (s[position] == 'd' && s[position + 1] == 'l')||
            (s[position] == 'u' && s[position + 1] == 'a')||
        (s[position] == 's' && s[position + 1]== 'w')||
        (s[position] == 'a' && s[position + 1] == 'l')||
        (s[position]== 'v'&& s[position + 1] =='a'))
        result = true;
    return result;
}

//get the numbers from the original string and change all other elements to ' ' except the plus and minus sign
string getNumbers(string commands)
{
    string s = commands;
    string numberString = "";
    for (size_t k = 0; k != s.size(); k++)
    {
      if (s[k]>= 0 && s[k]<= 9)
      {
          numberString = s[k] + numberString;
      }
      else if (s[k] == '+' && s[k] == '-')
      {
          numberString = s[k] + numberString;
      }
      else
      {
          s[k] = ' ';
          numberString = s[k] + numberString;
      }
    }
    return numberString;
}
//check whether the number in the code is right
bool checkNumber(string airportString, int & position)
{
    bool result = false;
    string s = airportString;
    int digit = 0;
    for (size_t k = position; k < s.size(); k++)
    {
        
        if (isdigit(s[k]))
        {
            digit++;
            if (!(isdigit(s[k+1])))
            {
            break;
            }
        }
    }
    switch(digit)
    {
        case 1:
            result = true;
            position = position + 1;
            break;
        case 2:
            result = true;
            position = position + 2;
            break;
        case 3:
            result = true;
            position = position + 3;
            break;
        default:
            result = false;
            break;
    }
    return result;
}
//check if the characters in the string is plus minus sign or not
bool checkSign(string airportString, int position)
{
    bool result = false;
    string s = airportString;
    if(s[position]== '+' || s[position] == '-')
        result = true;
    else
        result = false;
    return result;
}

string tolower(string commands)
{
    string s = commands;
    for(size_t k = 0; k != s.size();k++)
    {
        if(isupper(s[k]))
        {
            s[k]= tolower(s[k]);
        }
    }
    return s;
}
//the required function to calculate the on time arrival percentage
double ontimeArrivalPercentage (string commands, string airlinecode)
{
    double percentage = 0.0;
    commands = tolower(commands);
    airlinecode = tolower(airlinecode);//change the whole string and airlinecode to lowercase letters
    
     if (!(isWellFormedAirportString(commands)))
         return (-1);
    else if(denominator(commands, airlinecode) == 0)
        return 0;
    else
        percentage = (numerator(commands, airlinecode))*1.0/(denominator(commands, airlinecode));
    return percentage;
}

//calculate the the number of flights on time
int numerator(string commands, string airlinecode)
{
    airlinecode = tolower(airlinecode);
    string s = commands;
    int useful = 0;
    for (int k = 0; k != s.size() - 1;k++)
    {
       string temp = "  ";
        temp[0]= s[k];
        temp[1]= s[k+1];
        if (temp == airlinecode)//match the airlinecode we want
        {
            for (int i=k; i < s.size(); i++)
            {
                if (s[i] == '-'|| s[i]=='+')
                {
                    k= i;
                    break;
                }
                   
            }
            if(s[k]=='-')
            {
                useful ++;
            }
            else if(s[k]=='+')
            {
                int value = 0;
                for(int j = k+1; j < s.size(); j++ ){   // take the digit out
                    if (!isdigit(s[j])){
                        break;
                    }
                    
                    value = value * 10 + s[j] - 48;
                    
                }//end of for
                  if(value < 15)
                  {
                      useful ++;
                  }
            }
        }
    }
    return useful;
}

//calculate the total number of flights in the string
int denominator(string commands, string airlinecode)
{
    string s = commands;
    int total = 0;
    for(size_t k = 0; k < s.size(); k++)
    {
        string temp = "  ";
        temp[0] = s[k];
        temp[1] = s[k+1];
        if (temp == airlinecode)
            total = total + 1;
    }
    return total;
}
