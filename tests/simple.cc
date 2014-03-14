#include <iostream>
#include <exception>
#include <cstdlib>

int
main()
try
{
  return EXIT_SUCCESS;
}
catch( const std::exception &ex )
{
  std::cerr << "Error: "<< ex.what() << std::endl;
  return EXIT_FAILURE;
}
