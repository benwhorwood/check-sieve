#include "checksieve.h"
#include "sieve_driver.hh"

#include <fstream>

namespace sieve
{

#define LIBCHECKSIEVE_VERSION "0.4"

extern const char *version() {
    return LIBCHECKSIEVE_VERSION;
}

struct parse_result sieve_parse_file( const char *filename ) {
    driver driver;
    return driver.parse_file(filename);
}

struct parse_result sieve_parse_string( const char *sieve ) {
    driver driver;
    return driver.parse_string(sieve);
}

}
