#ifndef __DMcalcDMUNIT__
#define __DMcalcDMUNIT__

const double Pi = 3.141592653589793238462;
// Unit Super-class
class UNIT {
public :
  virtual double convert_unit ( double x ) = 0;

};

#endif