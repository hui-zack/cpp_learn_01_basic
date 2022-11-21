// point.cpp
//

#include "point.h"
#define LZZ_INLINE inline
using namespace std;
void Point::setX (int x)
                    {
        this->X = x;
    }
int Point::getX ()
              {
        return X;
    }
int Point::getY ()
              {
        return this->Y;
    }
void Point::setY (int y)
                    {
        Y = y;
    }
#undef LZZ_INLINE
