#ifndef __DMcalcDM_Deg_UNIT__
#define __DMcalcDM_Deg_UNIT__

#include "UNIT.h"
//Unit's sub-class converting Degree to Radian
class Deg_UNIT : public UNIT {
public :
  virtual double convert_unit ( double x );
  
};

#endif