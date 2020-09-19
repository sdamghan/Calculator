#include "../headers/Hex_BASE.h"
double Hex_BASE :: convert_base ( string s ) {

  double result=0;
  int point = s.find ('.');
  int temp=0;
  int i=point-1,n=0,sign=1;
  
  if  ( point < s.length()-1 && point > -1 ) {
    
    if ( s[0]=='-' ) {
      sign=-1;
	      while ( i!= 0 ) {
		if ( s[i] == 'A' ) temp=10;
		else if ( s[i] == 'B' ) temp=11;
		else if ( s[i] == 'C' ) temp=12;
		else if ( s[i] == 'D' ) temp=13;
		else if ( s[i] == 'E' ) temp=14;
		else if ( s[i] == 'F' ) temp=15;
		else temp=( s[i]-'0' );
		
		result += temp*pow( 16, n );
		i--; n++; 
	      }
	      
	      
	      i=s.length()-1; n=-( s.length()-point-1 );
	      while ( i!= point ) {
		if ( s[i] == 'A' ) temp=10;
		else if ( s[i] == 'B' ) temp=11;
		else if ( s[i] == 'C' ) temp=12;
		else if ( s[i] == 'D' ) temp=13;
		else if ( s[i] == 'E' ) temp=14;
		else if ( s[i] == 'F' ) temp=15;
		else temp = ( s[i]-'0' );
		
		result += temp*pow( 16, n );
		i--; n++; 
	      }
	    }
	    
      else {
	while ( i!= -1 ) {
	    if ( s[i] == 'A' ) temp=10;
	    else if ( s[i] == 'B' ) temp=11;
	    else if ( s[i] == 'C' ) temp=12;
	    else if ( s[i] == 'D' ) temp=13;
	    else if ( s[i] == 'E' ) temp=14;
	    else if ( s[i] == 'F' ) temp=15;
	    else temp=( s[i]-'0' );
	    
	    result += temp*pow( 16, n );
	    i--; n++; 
	  }
	  
	  
	  i=s.length()-1; n=-( s.length()-point-1 );
	  while ( i!= point ) {
	    if ( s[i] == 'A' ) temp=10;
	    else if ( s[i] == 'B' ) temp=11;
	    else if ( s[i] == 'C' ) temp=12;
	    else if ( s[i] == 'D' ) temp=13;
	    else if ( s[i] == 'E' ) temp=14;
	    else if ( s[i] == 'F' ) temp=15;
	    else temp = ( s[i]-'0' );
	    
	    result += temp*pow( 16, n );
	    i--; n++; 
	  }
      }
  }
  
  else {
   i=s.length()-1; n=0;
   
   if  ( s[0] == '-' ) {
	  sign=-1;
	  while ( i!= 0 ) {
		  if ( s[i] == 'A' ) temp=10;
		  else if ( s[i] == 'B' ) temp=11;
		  else if ( s[i] == 'C' ) temp=12;
		  else if ( s[i] == 'D' ) temp=13;
		  else if ( s[i] == 'E' ) temp=14;
		  else if ( s[i] == 'F' ) temp=15;
		  else temp=( s[i]-'0' );
		  
		  result += temp*pow( 16, n );
		  i--; n++; 
		}    
	    }
	    
    else {
      
      while ( i!= -1 ) {
		  if ( s[i] == 'A' ) temp=10;
		  else if ( s[i] == 'B' ) temp=11;
		  else if ( s[i] == 'C' ) temp=12;
		  else if ( s[i] == 'D' ) temp=13;
		  else if ( s[i] == 'E' ) temp=14;
		  else if ( s[i] == 'F' ) temp=15;
		  else temp=( s[i]-'0' );
		  
		  result += temp*pow( 16, n );
		  i--; n++; 
		}
	}
	  
  }

  return result*sign;
}
