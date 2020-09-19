#ifndef __DMcalcDM_Hex_BASE__
#define __DMcalcDM_Hex_BASE__

#include "BASE.h"
//Base's sub-class converting Hexa-decimal to Decimal
class Hex_BASE : public BASE {
public :
  virtual double convert_base ( string s );
};

#endif