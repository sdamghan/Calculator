#ifndef __DMcalcDM_Oct_BASE__
#define __DMcalcDM_Oct_BASE__

#include "BASE.h"
//Base's sub-class converting Octal to Decimal
class Oct_BASE : public BASE {
public :
  virtual double convert_base ( string s );
};

#endif