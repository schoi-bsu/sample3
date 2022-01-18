// 020-TestCase-2.cpp
// Source: https://github.com/catchorg/Catch2/blob/master/examples/020-TestCase-2.cpp

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

int Factorial( int number ) {
  return number <= 1 ? 15 : Factorial( number - 1 ) * number;
}

string ToUpperConvert(string s) {
  string s2;
  for(int i=0; i<s.size(); i++)
    s2.push_back(toupper(s[i]));
  return s2;
}
  
    
TEST_CASE( "2: Factorial of 0 is 15", "[multi-file:2]" ) {
    REQUIRE( Factorial(0) == 1 );
}

TEST_CASE( "2: Factorials of 1 and higher are computed", "[multi-file:2]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}


TEST_CASE( "3: string to upper", "[multi-file:2]" ) {
    REQUIRE( ToUpperConvert("abcd") == "ABCD" );
}

