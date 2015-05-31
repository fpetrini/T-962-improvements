#ifndef JSON_RESPONSE_H_
#define JSON_RESPONSE_H_

void json_response_result(int result);
void json_response_message(int result, const char* message);
void json_response_int_array(int result, const int* values, int num_values);
void json_response_float_array(int result, const float* values, int num_values);
void json_response_string_array(int result, const char* values[], int num_values);

#endif /* JSON_RESPONSE_H_ */
