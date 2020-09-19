#include "../headers/Dec_BASE.h"
double Dec_BASE :: convert_base ( string s ) {
  
    double result=0;
  int point = s.find ('.');
  int temp=0;
  int i=0,n=0,sign=1;
    if  ( point < s.length()-1 && point > -1 ) {	
        i=point-1,n=0;
	if ( s[0]=='-' ) {
	      sign = -1;
	      while ( i!= 0 ) {
	      temp=( s[i]-'0' );
	      result += temp*pow( 10, n );
	      i--; n++;
	      }
	    
	    
	      i=s.length()-1; n=-( s.length()-point-1 );
	      while ( i!= point ) {
		temp = ( s[i]-'0' );
		result += temp*pow( 10, n );
		i--; n++;
	        }
	    
	}
	
	
	else  {
	      while ( i!= -1 ) {
		temp=( s[i]-'0' );
		result += temp*pow( 10, n );
		i--; n++;
	        }
	      
	      
	      i=s.length()-1; n=-( s.length()-point-1 );
	      while ( i!= point ) {
		temp = ( s[i]-'0' );
		result += temp*pow( 10, n );
		i--; n++;
	        }
	  }
	  
    }
    
    else {
    
      i=s.length()-1; n=0;
      if ( s[0]=='-' ) {
	sign = -1;
	    while ( i!= 0 ) {
		temp=( s[i]-'0' );
		result += temp*pow( 10, n );
		i--; n++;
	      }
	  }
	  
      else  {
	    while ( i!= -1 ) {
		temp=( s[i]-'0' );
		result += temp*pow( 10, n );
		i--; n++;
	      }
	  }
    }
  return result*sign; 
  
}
