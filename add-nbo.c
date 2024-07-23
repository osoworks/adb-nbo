#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include "add-nbo.h"

void error_exit(const char *message) {
	fprintf(stderr,"%s\n", message); //Print the error message to the standard error stream
	exit(EXIT_FAILURE); //Exit the program with a failure status
}

uint32_t read_number_from_file(const char *filename) {
	FILE *file = fopen(filename, "rb"); //Open the file in binary read mode
	if (!file) {
		error_exit("Failed to open file"); //If file opening fails, print an error message and exit
	}

	uint32_t number;
	size_t read_size = fread(&number, sizeof(uint32_t), 1, file); //Read 4 bytes (32-bit integer) from the file
	fclose(file); //Close the file
	
	if (read_size != 1) {
		error_exit("Failed to read 4 bytes from file"); //If reading fails, print an error message and exit
	}

	return ntohl(number); //Convert the number from network byte order to host byte order and return it
}
