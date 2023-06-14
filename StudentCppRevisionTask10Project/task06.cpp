#include "tasks.h"

/*	Task 06. The Count of Local Maximus [количество локальных максимумов]
*
*	Элемент последовательности называется локальным максимумом,
*	если он строго больше предыдущего и последующего элемента
*	последовательности. Первый и последний элемент последовательности
*	не являются локальными максимумами по определению.
*	Дано целое число. Необходимо подсчитать количество строгих локальных
*	максимумов среди цифр заданного числа.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено количество строгих локальных максимумов.
*
*	[ input 1]: 2414241
*	[output 1]: 3
*
*	[ input 2]: 131131
*	[output 2]: 2
*
*	[ input 3]: 0
*	[output 3]: 0
*
*	[ input 4]: -13245
*	[output 4]: 1
*
*	[ input 5]: 12345
*	[output 5]: 0
*/

int task06(long long number) {
	number = number > 0 ? number : -number;
	int count = 0;
	short digit2 = number % 10;
	number /= 10;
	short digit3 = number % 10;
	number /= 10;
	while (number > 0) {
		short digit1 = digit2;
		digit2 = digit3;
		digit3 = number % 10;
		if (digit2 > digit1 and digit2 > digit3) {
			count++;
		}
		number /= 10;
	}

	return count;
}