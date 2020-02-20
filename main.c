/* 
 * File:   main.c
 * Author: papa
 *
 * Created on 20 февраля 2020 г., 15:31
 */

#include <stdio.h>
#include <stdlib.h>
#include "api_function.h"

/*
 * 
 */
int main(int argc, char** argv) {
    	printf("call apiFunction(10,20) = %d",apiFunction(10,20));
	printf("call apiFunction(30,40) = %d",apiFunction(30,40));

    return (EXIT_SUCCESS);
}

