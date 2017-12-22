//
//  ZodiacReader.cpp
//  Project 5
//
//  Created by Jacob on 2/24/17.
//  Copyright © 2017 Jacob. All rights reserved.
//

#include "ZodiacReader.h"
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

//ZodiacReader constructor
ZodiacReader :: ZodiacReader(Date date)
{
    mDate = date;
}



//convert the date value to the integer value beginning with the month digits and ending with the day digits
int ZodiacReader :: convertDate(Date date)
{
    int newValue = 0;
    newValue = date.getDay() + date.getMonth() * 100;
    return (newValue);
}

//return a sign supplied
ZodiacReader :: Sign ZodiacReader :: checkSign()
{
      if((convertDate( mDate) >= 321) && (convertDate( mDate) <= 419))
          return ARIES;
      else if ((convertDate(mDate) >= 420) && (convertDate(mDate) <= 520))
          return TAURUS;
      else if ((convertDate(mDate) >= 521) && (convertDate(mDate) <= 620))
          return GEMINI;
      else if ((convertDate(mDate) >= 621) && (convertDate(mDate) <= 722))
          return CANCER;
      else if ((convertDate(mDate) >= 723) && (convertDate(mDate) <= 822))
          return LEO;
      else if ((convertDate(mDate) >= 823) && (convertDate(mDate) <= 922))
          return VIRGO;
      else if ((convertDate(mDate) >= 923) && (convertDate(mDate) <= 1022))
          return LIBRA;
      else if ((convertDate(mDate) >= 1023) && (convertDate(mDate) <=1121))
          return SCORPIO;
      else if ((convertDate(mDate)) >= 1122 && (convertDate(mDate) <= 1221))
          return SAGITTARIUS;
      else if ((convertDate(mDate) >= 1222 && convertDate(mDate) <= 1231) || (convertDate(mDate) >= 101 && convertDate(mDate) <= 119))
          return CAPRICORN;
      else if ((convertDate(mDate) >= 120) && (convertDate(mDate) <= 218))
          return AQUARIUS;
      else
          return PISCES;
}

//check whether the date is on the cusp
bool ZodiacReader :: onCusp()
{
    bool result = false;
    switch(convertDate(mDate))
    {
        case 321:
        case 322:
        case 320:
        case 319:
            result = true;
            break;
        case 418:
        case 419:
        case 420:
        case 421:
            result = true;
            break;
        case 519:
        case 520:
        case 521:
        case 522:
            result = true;
            break;
        case 619:
        case 620:
        case 621:
        case 622:
            result = true;
            break;
        case 721:
        case 722:
        case 723:
        case 724:
            result = true;
            break;
        case 821:
        case 822:
        case 823:
        case 824:
            result = true;
            break;
        case 921:
        case 922:
        case 923:
        case 924:
            result = true;
            break;
        case 1021:
        case 1022:
        case 1023:
        case 1024:
            result = true;
            break;
        case 1120:
        case 1121:
        case 1122:
        case 1123:
            result = true;
            break;
        case 1220:
        case 1221:
        case 1222:
        case 1223:
            result = true;
            break;
        case 118:
        case 119:
        case 120:
        case 121:
            result = true;
            break;
        case 217:
        case 218:
        case 219:
        case 220:
            result = true;
            break;
    }
    return (result);
}

//return the second sign following the cusp sign
ZodiacReader :: Sign ZodiacReader :: cuspSign()
{
    
        switch(convertDate(mDate))
        {
            
            case 319:
            case 320:
                return (ARIES);
                break;
            case 321:
            case 322:
                return (PISCES);
                break;
            case 418:
            case 419:
                return (TAURUS);
                break;
            case 420:
            case 421:
                return (ARIES);
                break;
            case 519:
            case 520:
                return (GEMINI);
                break;
            case 521:
            case 522:
                return (TAURUS);
                break;
            case 619:
            case 620:
                return (CANCER);
                break;
            case 621:
            case 622:
                return (GEMINI);
                break;
            case 721:
            case 722:
                return (LEO);
                break;
            case 723:
            case 724:
                return (CANCER);
                break;
            case 821:
            case 822:
                return (VIRGO);
                break;
            case 823:
            case 824:
                return (LEO);
                break;
            case 921:
            case 922:
                return (LIBRA);
                break;
            case 923:
            case 924:
                return (VIRGO);
                break;
            case 1021:
            case 1022:
                return (SCORPIO);
                break;
            case 1023:
            case 1024:
                return (LIBRA);
                break;
            case 1120:
            case 1121:
                return (SAGITTARIUS);
                break;
            case 1122:
            case 1123:
                return (SCORPIO);
                break;
            case 1220:
            case 1221:
                return (CAPRICORN);
                break;
            case 1222:
            case 1223:
                return (SAGITTARIUS);
                break;
            case 118:
            case 119:
                return (AQUARIUS);
                break;
            case 120:
            case 121:
                return (CAPRICORN);
                break;
            case 217:
            case 218:
                return (PISCES);
                break;
            case 219:
            case 220:
                return (AQUARIUS);
                break;
            default:
                return (ARIES);
        }
}

string ZodiacReader::stringifySign(ZodiacReader::Sign sign)
{
    switch(sign)
    {
        case ARIES:
            return ("Aries");
        case TAURUS:
            return ("Taurus");
        case GEMINI:
            return ("Gemini");
        case CANCER:
            return ("Cancer");
        case LEO:
            return ("Leo");
        case VIRGO:
            return ("Virgo");
        case LIBRA:
            return ("Libra");
        case SCORPIO:
            return ("Scorpio");
        case SAGITTARIUS:
            return ("Sagittarius");
        case CAPRICORN:
            return ("Capricorn");
        case AQUARIUS:
            return ("Aquarius");
        case PISCES:
            return ("Pisces");
    }
}

