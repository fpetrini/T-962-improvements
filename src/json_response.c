#include "LPC214x.h"
#include <stdint.h>
#include <stdio.h>
#include "json_response.h"

void json_response_result(int result) {
	printf("\n{\"result\":%d}", result);
}

void json_response_message(int result, const char* message) {
	printf("\n{\"result\":%d,\"message\":\"%s\"}", result, message);
}

void json_response_int_array(int result, const int* values, int num_values) {
	printf("\n{\"result\":%d,\"values\":[", result);
	for(int i=0; i<num_values; i++) {
		printf(i==0 ? "%d" : ",%d", values[i]);
	}
	printf("]}");
}

void json_response_float_array(int result, const float* values, int num_values) {
	printf("\n{\"result\":%d,\"values\":[", result);
	for(int i=0; i<num_values; i++) {
		printf(i==0 ? "%f" : ",%f", values[i]);
	}
	printf("]}");
}

void json_response_string_array(int result, const char* values[], int num_values) {
	printf("\n{\"result\":%d,\"values\":[", result);
	for(int i=0; i<num_values; i++) {
		printf(i==0 ? "\"%s\"" : ",\"%s\"", values[i]);
	}
	printf("]}");
}
