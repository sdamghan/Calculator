#ifndef __DMcalcDM_Bin_BASE__
#define __DMcalcDM_Bin_BASE__

#include "BASE.h"
//Base's sub-class converting Binary to Decimal
class Bin_BASE : public BASE {
public :
  virtual double convert_base ( string s );
};

#endif