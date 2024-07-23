#include <iostream>
#include "add-nbo.h"

int main(int argc, char *argv[]) {
	if (argc != 3) {
		std::cerr << "Usage: " << argv[0] << "<file1><file2>" <<std::endl;
		return EXIT_FAILURE; // If the number of argument is not 3, print an error message and exit
	}

	uint32_t number1 = read_number_from_file(argv[1]); // Read the number from the first file
	uint32_t number2 = read_number_from_file(argv[2]); // Read the number from the second file
	
	uint32_t sum = number1 + number2; // Add the two numbers
	
	// Print the result
	std::cout << number1 << " (0x" << std::hex << number1 << std::dec << ") + "
       	       	<< number1 << " (0x" << std::hex << number1 << std::dec << ") = "
		<< sum << " (0x" << std::hex << sum << std::dec << ")" << std::endl;
	
	return EXIT_SUCCESS; // Exit the program with a success status
}
