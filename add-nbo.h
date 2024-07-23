#ifndef ADD_NBO_H
#define ADD_NBO_H

#include <stdint.h> // Header file for uint32_t

#ifdef __cplusplus
extern "C" {
#endif

void error_exit(const char *message); // Function to print an error message and exit the program
uint32_t read_number_from_file(const char *filename); // Function to read a 32-bit integer from a file

#ifdef __cplusplus
}
#endif

#endif // ADD_NBO_H
