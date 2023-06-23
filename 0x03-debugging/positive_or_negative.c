#include "main.h"
/**
 * positive_or_negative - A protoype that checks whether a number is negative or positive
 * @i: The number to be checked
 */
void positive_or_negative(int i){
	if (i < 0){
		printf("%d is negative", i);
	} else {
		printf("%d is positive", i);
	}
}
