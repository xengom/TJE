#include "stdio.h"

int main() {
	printf(">>> system infoormation <<<\n");
	printf("char size : %d \n", sizeof(char));
	printf("short size : %d \n", sizeof(short));
	printf("int size : %d \n", sizeof(int));
	printf("long size : %d \n", sizeof(long));
	printf("float size : %d \n", sizeof(float));
	printf("double size : %d \n", sizeof(double));

	printf("char* size : %d \n", sizeof(char*));
	printf("short* size : %d \n", sizeof(short*));
	printf("int* size : %d \n", sizeof(int*));
	printf("long* size : %d \n", sizeof(long*));
	printf("float* size : %d \n", sizeof(float*));
	printf("double* size : %d \n", sizeof(double*));

	printf("void* size : %d \n", sizeof(void*));
}