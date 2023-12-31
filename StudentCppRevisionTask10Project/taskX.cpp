﻿
#include "tasks.h"

/*	Task X. The Largest Sequence of Number Digits [наибольшая последовательность цифр числа]
*
*	Дано целое число. Необходимо определить, какое наибольшее число подряд идущих
*	цифр заданного числа равны друг другу. Если не нашлось ни одной пары, тройки
*	и т.д. подряд идущих цифр, равных друг другу, то программа должна вывести число 1.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено число, которое является решение задачи.
*
*	[Sample function input 1]: 123456
*	[Sample function output 1]: 1
*
*	[Sample function input 2]: 1234567789
*	[Sample function output 2]: 2
*
*	[Sample function input 3]: 1122233335
*	[Sample function output 3]: 4
*
*	[Sample function input 4]: 0
*	[Sample function output 4]: 1
*
*	[Sample function input 5]: -15
*	[Sample function output 5]: 1
*/

int taskX(long long number) {
	number = number > 0 ? number : -number;
	short count = 1, save_count = 1;
	short digit = number % 10;
	number /= 10;

	while (number > 0) {
		short new_digit = number % 10;
		if (digit == new_digit) {
			count++;
			save_count = save_count > count ? save_count : count;
		}
		else {
			digit = new_digit;
			save_count = save_count > count ? save_count : count;
			count = 1;
		}
		number /= 10;
	}

	return save_count;
}