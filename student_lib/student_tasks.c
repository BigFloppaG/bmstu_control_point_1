#include "student_tasks.h"
#include <stdarg.h>
#include <stdbool.h>

// Задание 1: Разность двух чисел (0.5 балл)
int sub(int a, int b) { return 0; }

// Задание 2: Сумма N чисел (0.5 балл)
int summ(int n) { return 0; }

// Задание 3: Проверка на совершенное число (0.5 балла)
bool isPerfect(int n) { return false; }

// Задание 4: Найти минимальный элемент в массиве (0.5 балл)
int findMin(const int *arr, int size) { return 0; }

// Задание 5: Преобразовать строку в заглавные буквы (0.5 балл)
void toUpperString(const char *str, char *upper) { return; }

// Задание 6: Проверка на палиндром (0.5 балл)
bool isPalindrome(const char *str) { return false; }

// Задание 7: Сортировка массива пузырьком (любой простой алгоритм) (0.5 балла)
void bubbleSort(int *arr, int size) { return; }

// Задание 8: Вычисление НОК двух чисел (0.5 балла)
int hcf(int a, int b) { return 0; }

// Задание 9: Вычисление числа Каталана (0.5 балла)
unsigned int catalan(unsigned int n) { return 0; }

// Задание 10: Перевод числа в восьмеричную строку (0.5 балла)
void intToOctalString(unsigned int number, char *octalString) { return; };

// Задание 11: проверка корректности HTML тегов (5 баллов)
// Например: "div", "/div", NULL -> true; "div", "span", "/div", NULL -> false
bool isValidHtml(const char *tag, ...) { return false; }

// Задание 12: реализовать функцию нормализации Windows пути (5 баллов)
// Например: "C:\\a\\b\\..\\c\\.\\d\\\\" -> "C:\\a\\c\\d"
void normalizeWindowsPath(const char *path, char *normalizedPath) {
  // Реализация функции нормализации пути
  // Путь всегда корректен и начинается с диска
  return;
}

// Задание 13: реализовать функцию вычисления значения выражения в
// обратной польской нотации (10 баллов)
// Например: "2 3 + 5 *" -> 25
int reversePolishNotation(const char *expression) {
  // Реализация функции вычисления значения выражения в постфиксной нотации
  return 0;
}