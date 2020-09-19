#ifndef __DMcalcDM_Grd_UNIT__
#define __DMcalcDM_Grd_UNIT__

#include "UNIT.h"
//Unit's sub-class converting Gradian to Radian
class Grd_UNIT : public UNIT {
  public :
    virtual double convert_unit ( double x );
  
};

#endif