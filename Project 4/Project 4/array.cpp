//
//  main.cpp
//  Project 4
//
//  Created by Jacob on 2/16/17.
//  Copyright © 2017 Jacob. All rights reserved.
//

#include <iostream>
#include <string>
#include <cassert>
using namespace std;


//locate the Minimum of the array
int locateMinimum( const string array[ ],int n )
{
    int minindex = 0;
    if (n <= 0)
    {
        return -1;
    }
    else if (n > 0)
    {
        for (int k = 0; k < n; k++)
          {
            if (array[k]<array[minindex])
            {
                minindex = k;
            }
          }
    }
    return minindex;
}

int findLastOccurrence( const string array[ ], int n, string target )
{
    int lastoccur = -1;
    if(n > 0)
    {
        for (int k = 0; k < n; k++)//loop from the front instead of from the back
        {
           if(array[k] == target)
               lastoccur = k;
        }
    }
        return lastoccur;
    
}


int flipAround( string array[ ],int n )
{
    int count = 0;
    string temp = "";
    if (n < 0)
    {
        return -1;
    }
    else for (int k = 0; k < n/2; k++)//pay attention to the range of k
    {
        int reverse = n-k-1;
        if(array[k] != array[reverse])
        {
            count++;
            temp = array[n-k-1];
            array[n-k-1] = array[k];
            array[k] = temp;
        }
    }
    return count;
}


bool hasNoDuplicates( const string array[ ], int  n )
{
    bool result = true;
    if (n < 0)
    {
        result = false;
    }
    for(int k = 0; k < n; k++)
        for(int i = 0; i < n; i++)
        {
           if ((k != i) && (array[i] == array[k]))
               result = false;
        }
    return result;
}

void unionWithNoDuplicates( const string array1[ ], int n1, const string array2[ ], int n2, string resultingString[ ], int& resultingSize )
{
    if(n1 <=0 || n2 <= 0)
    {
        resultingSize=-1;
        return;
    }
    else
    {
        resultingSize = 0;
        for(int i = 0; i < n1; i++)
        {
            bool existduplicate = false;//create a boolean value about whether the array has duplicates
            for(int j = 0; j < resultingSize; j++)
            {
                if(resultingString[j] == array1[i])
                {
                    existduplicate = true;
                }
            }
            if(!existduplicate)
            {
                resultingString[resultingSize++] = array1[i];
            }
        }
        for(int i = 0; i < n2; i++)
        {
            bool existduplicate = false;
            for(int j = 0; j < resultingSize; j++)
            {
                if(resultingString[j] == array2[i])
                {
                    existduplicate = true;
                }
            }
            if(!existduplicate)
            {
                resultingString[resultingSize++] = array2[i];
            }
        }
    }
}
int shiftRight( string array[ ], int n, int amount, string   placeholderToFillEmpties )
{
    int number = 0;
    string temp1 = array[0];
    string temp2 = "";
    if (amount < 0 || amount > n)
        return -1;
    else
    {
        for(int k = 0; k <  amount; k++)//create two temps in order to store the value of the original array
        {
            for(int i =0; i< n; i++){
            temp2 = array[i+1];
            array[i+1] = temp1;
                temp1 = temp2;}
        }
        for (int i = 0; i < amount; i++)
        {
            array[i] = placeholderToFillEmpties;
        }
    }
    number = n - amount;
    return number;
}

bool isInIncreasingOrder( const string array[ ], int  n )
{
    bool result = true;
    if (n < 0)
        result = false;
    else if(n == 1 || n == 0)
    {
        return result;
    }
    else
    {
        for (int k = 0; k < n-1; k++)
        {
           if(array[k] >= array[k+1])
               result = false;
        }
    }
    return result;
}

int main()
{
    return 0;
}
