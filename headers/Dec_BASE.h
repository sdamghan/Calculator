#ifndef __DMcalcDM_Dec_BASE__
#define __DMcalcDM_Dec_BASE__

#include "BASE.h"
//Base's sub-class converting Decimal to Decimal
class Dec_BASE : public BASE {
public :
  virtual double convert_base ( string s );
};

#endif