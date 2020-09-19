#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <cstdlib>

#include "../headers/UNIT.h"
#include "../headers/Deg_UNIT.h"
#include "../headers/Grd_UNIT.h"
#include "../headers/Rad_UNIT.h"

#include "../headers/BASE.h"
#include "../headers/Bin_BASE.h"
#include "../headers/Dec_BASE.h"
#include "../headers/Oct_BASE.h"
#include "../headers/Hex_BASE.h"


vector<string> Read_input() {
  
    vector<string> lines;

    string line;
    while ( getline( cin, line ) ) {
        lines.push_back(line);
    }
    
    return lines;
}


int main () {
  
  bool shift=false;
  float result=0;
  
  int current_unit=0;
  vector <UNIT*> Units;
    Units.push_back ( new Rad_UNIT() );
    Units.push_back ( new Deg_UNIT() );
    Units.push_back ( new Grd_UNIT() );
  
  int current_base=0;
  vector <BASE*> Bases;
    Bases.push_back ( new Dec_BASE() );
    Bases.push_back ( new Bin_BASE() );
    Bases.push_back ( new Oct_BASE() );
    Bases.push_back ( new Hex_BASE() );
  
  
  string temp = ""; 
  vector <string> lines = Read_input();
  
  for ( int i=0; i<lines.size(); ++i ) {
    temp = lines[ i ];
   
    if ( temp.find ( "shift" ) != string::npos ) {
      if ( shift == false ) shift = true;
      else if ( shift == true ) shift = false;
      continue;
    
    }
    
    else if ( temp.find ( "Bin" ) != string::npos ){
      current_base = 1;continue;}
    
    else if ( temp.find ( "Dec" ) != string::npos ){
      current_base = 0;continue;}
    
    else if ( temp.find ( "Oct" ) != string::npos ){
      current_base = 2;continue;}
    
    else if ( temp.find ( "Hex" ) != string::npos ){
      current_base = 3;continue;}
    
    
    else if ( temp.find ( "Rad" ) != string::npos ){
      current_unit = 0;continue;}
    
    else if ( temp.find ( "Deg" ) != string::npos ){
      current_unit = 1;continue;}
    
    else if ( temp.find ( "Grd" ) != string::npos ){
      current_unit = 2;continue;}
    
    
    else {
      
      if ( temp[0] == '+' ) {
	int j=2;
	while ( temp[ j ] != ' ' ) j++;
	
	string a = temp.substr( 2, j-2 );
	string b = temp.substr( j+1, temp.length() - j-1 );
	
	double a1 =  Bases[ current_base ]->convert_base ( a ) ;
	double a2 =  Bases[ current_base ]->convert_base ( b ) ;
	
	if ( shift == false )
	  result = a1+a2;
	else if ( shift == true )
	  result = a1*a2;
      
      }
      
      
      else if ( temp[0] == '-' ) {
	int j=2;
	while ( temp[ j ] != ' ' ) j++;
	string a = temp.substr( 2, j-2 );
	string b = temp.substr( j+1, temp.length() - j-1 );
	
	double a1 =  Bases[ current_base ]->convert_base ( a ) ;
	double a2 =  Bases[ current_base ]->convert_base ( b ) ;
	
	if ( shift == false )
	  result = a1-a2;
	else if ( shift == true )
	  result = a1/a2;

      }
      
      
      else if ( temp.substr( 0, 3 ) == "sin" ) {
	string a = temp.substr( 4, temp.length()-4 );
	
	double a1 = Units[ current_unit ]->convert_unit ( Bases[ current_base ]->convert_base ( a ) );
	
	if ( shift == false )
	  result = sin (a1);
	else if ( shift == true )
	  result = cos (a1);
      

      }
      
      
      else if ( temp.substr( 0, 2 ) == "ln" ) {
	string a = temp.substr( 3, temp.length()-3 );
	
	double a1 =  Bases[ current_base ]->convert_base ( a ) ;
	
	if ( shift == false )
	  result = log (a1);
	else if ( shift == true ){
	  a1 = Units[ current_unit ]->convert_unit (a1);
	  result = tan (a1);
	}
	  
      }
    }

    int x = trunc(result *10000);
    float out = x/10000.0;
    
      cout << fixed << setprecision(4) << out << endl;
    }

}
      
  
