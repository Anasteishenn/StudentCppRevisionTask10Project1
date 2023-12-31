﻿#include "tasks.h"

/*	Task 03. The Double Max [вторая максимальная цифра]
*
*	Дано целое число. Необходимо определить вторую по величине цифру данного числа,
*	т.е. цифру, которая будет наибольшим, если из числа удалить наибольшую цифру.
*	Если нет такой цифры, то должно быть возвращено число -1.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено число, которое является решение задачи.
*
*	[ input 1]: 12345
*	[output 1]: 4
*
*	[ input 2]: -56789
*	[output 2]: 8
*
*	[ input 3]: 11111
*	[output 3]: -1
*
*	[ input 4]: 0
*	[output 4]: -1
*/

int task03(long long number) {
	number = number > 0 ? number : -number;

	int maxValue = -1;
	int SecondMaxValue = -1;
	while (number > 0) {
		int digit = number % 10;
		if (digit > maxValue)
		{
			SecondMaxValue = maxValue;
			maxValue = digit;
		}
		if (digit > SecondMaxValue and digit < maxValue)
		{
			SecondMaxValue = digit;
		}

		number /= 10;
	}

	return SecondMaxValue;
}