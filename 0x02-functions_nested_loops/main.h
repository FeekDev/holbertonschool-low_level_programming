#ifndef _MAIN_H_
#define _MAIN_H_

/**
 *_putchar is a fubctin print ever word c, in a string
 *
 *
 */

int _putchar(char c);


/**
 *print_alphabet - print lowercase alphabet
 *
 *
 */

void print_alphabet(void);

/**
 *print_alphabet - print lowercase alphabet 10 times
 *
 *
 **/

void print_alphabet_x10(void);

/**
 *_islower - checks for lowercase character
 *
 *
 **/

int _islower(int c);

/**
 *
 *checks for alphabetic character, lowercase or uppercase
 *
 **/

int _isalpha(int c);

/**
 *
 *Sign of a number
 *
 **/

int print_sign(int n);

/**
 *
 *that computes the absolute value of an integer
 *
 **/

int _abs(int n);

/**
 *
 * that prints the last digit of a number, with mod
 *
 **/

int print_last_digit(int n);

/**
 *
 * that prints the every minutes in a day
 *
 **/

void jack_bauer(void);

/**
 *
 * prints the 9 times table, starting with 0.
 *
 **/

void times_table(void);

/**
 *
 * adds two integers and returns the result
 *
 **/
int add(int, int);

#include "main.h"

/**
 * 
 *print all number <98 && >98
 *
 */

void print_to_98(int n);



#endif /* _MAIN_H_ */
