//
//  ZodiacReader.hpp
//  Project 5
//
//  Created by Jacob on 2/24/17.
//  Copyright © 2017 Jacob. All rights reserved.
//

#ifndef ZodiacReader_hpp
#define ZodiacReader_hpp

#include <stdio.h>
#include <string>
#include "Date.h"
using namespace std;


class ZodiacReader
{
   private:
           Date mDate;
   public:
           ZodiacReader(Date date);
           enum Sign
    {
        ARIES, TAURUS, GEMINI, CANCER, LEO, VIRGO, LIBRA, SCORPIO, SAGITTARIUS, CAPRICORN, AQUARIUS, PISCES
    };
           Sign checkSign();
           bool onCusp();
           Sign cuspSign();
           string stringifySign(Sign sign);
           int convertDate(Date date);
};
#endif /* ZodiacReader_hpp */
