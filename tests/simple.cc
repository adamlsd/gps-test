#include <iostream>
#include <exception>
#include <cstdlib>
#include <cassert>

#include "gpstring.h"
#include "linklist.h"

int
main()
try
{
  gpstring s( "Hello World" );
  const gpstring s2= s;
  
  s+= "Goodbye World";
  
  const gpstring gbw= "Goodbye World";
  
  assert( s != s2 );
  
  assert( "Oops" + s != s );
  assert( s + "OOPS" != s );
  
  assert( s + gbw == s2 );
  
  assert( gbw + s != s2 );

  assert( gbw[ 4 ] == 'b' );

  return EXIT_SUCCESS;
}
catch( const std::exception &ex )
{
  std::cerr << "Error: "<< ex.what() << std::endl;
  return EXIT_FAILURE;
}
