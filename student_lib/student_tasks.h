#ifndef STUDENT_TASKS_H
#define STUDENT_TASKS_H
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Задание 1: Разность двух чисел (0.5 балл) */
int sub(int a, int b);

/* Задание 2: Сумма N чисел (0.5 балл) */
int summ(int n);

/* Задание 3: Проверка на совершенное число (0.5 балла) */
bool isPerfect(int n);

/* Задание 4: Найти минимальный элемент в массиве (0.5 балл) */
int findMin(const int *arr, int size);

/* Задание 5: Преобразовать строку в заглавные буквы (0.5 балл) */
void toUpperString(const char *str, char *upper);

/* Задание 6: Проверка на палиндром (0.5 балл) */
bool isPalindrome(const char *str);

/* Задание 7: Сортировка массива пузырьком (0.5 балла) */
void bubbleSort(int *arr, int size);

/* Задание 8: Вычисление НОК двух чисел (0.5 балла) */
int hcf(int a, int b);

/* Задание 9: Вычисление числа Каталана (0.5 балла) */
unsigned int catalan(unsigned int n);

/* Задание 10: Перевод числа в восьмеричную строку (0.5 балла) */
void intToOctalString(unsigned int number, char *octalString);

/* Задание 11: Проверка корректности HTML тегов (5 баллов)
 * Использует variadic arguments, завершается NULL
 * Пример: isValidHtml("div", "/div", NULL) -> true
 *         isValidHtml("div", "span", "/div", NULL) -> false
 */
bool isValidHtml(const char *tag, ...);

/* Задание 12: Реализовать функцию нормализации Windows пути (5 баллов)
 * Пример: "C:\\a\\b\\..\\c\\.\\d\\\\" -> "C:\\a\\c\\d"
 * Путь всегда корректен и начинается с диска
 */
void normalizeWindowsPath(const char *path, char *normalizedPath);

/* Задание 13: Реализовать функцию вычисления значения выражения в постфиксной
 * нотации (10 баллов) Пример: "23 34 + 5 *" -> (23 + 34) * 5 = 285
 * Поддерживаемые операции: +, -, *, /
 */
int reversePolishNotation(const char *expression);

#ifdef __cplusplus
}
#endif

#endif // STUDENT_TASKS_H
