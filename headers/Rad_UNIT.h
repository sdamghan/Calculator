#ifndef __DMcalcDM_Rad_UNIT__
#define __DMcalcDM_Rad_UNIT__

#include "UNIT.h"
//Unit's sub-class converting Radian to Radian
class Rad_UNIT : public UNIT {
public :
  virtual double convert_unit ( double x );
  
};

#endif