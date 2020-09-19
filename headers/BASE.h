#ifndef __DMcalcDM_BASE__
#define __DMcalcDM_BASE__

#include <string>
#include <cmath>
using namespace std;
// Base Super-class
class BASE {
public :
  virtual double convert_base ( string s ) = 0;
};

#endif