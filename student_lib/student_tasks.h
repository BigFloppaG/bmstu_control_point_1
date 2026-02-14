#ifndef STUDENT_TASKS_H
#define STUDENT_TASKS_H
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

// ============== ПРОСТЫЕ ЗАДАНИЯ (15 заданий, 0.5-1.5 балла) ==============

/* Задание 1: Вычислить длину строки (0.5 балла)
 * Реализуйте аналог strlen
 * Пример: stringLength("hello") -> 5
 */
size_t stringLength(const char *str);

/* Задание 2: Скопировать строку (0.5 балла)
 * Реализуйте аналог strcpy
 * Пример: stringCopy(dest, "hello") -> dest содержит "hello"
 */
void stringCopy(char *dest, const char *src);

/* Задание 3: Конкатенация строк (0.5 балла)
 * Реализуйте аналог strcat - добавить src в конец dest
 * Пример: dest="Hello", src=" World" -> dest="Hello World"
 */
void stringConcat(char *dest, const char *src);

/* Задание 4: Сравнение строк (0.5 балла)
 * Реализуйте аналог strcmp
 * Возвращает: 0 если равны, <0 если str1<str2, >0 если str1>str2
 */
int stringCompare(const char *str1, const char *str2);

/* Задание 5: Подсчитать количество вхождений символа (0.5 балла)
 * Пример: countChar("hello", 'l') -> 2
 */
int countChar(const char *str, char ch);

/* Задание 6: Подсчитать количество гласных букв (0.5 балла)
 * Гласные: a, e, i, o, u (регистр не важен)
 * Пример: countVowels("Hello World") -> 3
 */
int countVowels(const char *str);

/* Задание 7: Удалить все пробелы из строки (0.5 балла)
 * Пример: removeSpaces("a b c") -> result="abc"
 */
void removeSpaces(const char *str, char *result);

/* Задание 8: Найти длину первого слова (0.5 балла)
 * Слово - последовательность непробельных символов
 * Пример: firstWordLength("  hello world") -> 5
 */
int firstWordLength(const char *str);

/* Задание 9: Найти подстроку в строке (0.5 балла)
 * Возвращает индекс первого вхождения или -1
 * Пример: findSubstring("hello world", "wor") -> 6
 */
int findSubstring(const char *str, const char *substr);

/* Задание 10: Заменить все вхождения символа (0.5 балла)
 * Пример: replaceChar("hello", 'l', 'p') -> result="heppo"
 */
void replaceChar(const char *str, char oldChar, char newChar, char *result);

/* Задание 11: Удалить начальные и конечные пробелы (trim) (0.5 балла)
 * Пример: trimString("  hello  ") -> result="hello"
 */
void trimString(const char *str, char *result);

/* Задание 12: Перевернуть слова в строке (1 балл)
 * Слова остаются на своих местах, но символы внутри каждого слова
 * переворачиваются Пример: reverseWords("hello world") -> "olleh dlrow"
 */
void reverseWords(const char *str, char *result);

/* Задание 13: Палиндром без учета регистра и пробелов (1 балл)
 * Пример: isPalindromeIgnoreCase("A man a Plan") -> true
 */
bool isPalindromeIgnoreCase(const char *str);

/* Задание 14: Подсчитать количество слов в строке (1 балл)
 * Слова разделяются пробелами, табами, переносами строк
 * Пример: countWords("  hello   world  ") -> 2
 */
int countWords(const char *str);

/* Задание 15: Проверка на анаграммы (1.5 балла)
 * Две строки являются анаграммами, если содержат одинаковые буквы
 * Регистр не учитывается, пробелы игнорируются
 * Пример: isAnagram("listen", "silent") -> true
 */
bool isAnagram(const char *str1, const char *str2);

// ============== СЛОЖНЫЕ ЗАДАНИЯ (5 заданий, 3-5 баллов) ==============

/* Задание 16: Найти самый длинный общий префикс (3 балла)
 * Использует variadic arguments, завершается NULL
 * Пример: longestCommonPrefix("flower", "flow", "flight", NULL) -> "fl"
 */
void longestCommonPrefix(char *result, const char *first, ...);

/* Задание 17: RLE-сжатие строки (3 балла)
 * Run-Length Encoding: заменить повторяющиеся символы на "символ+количество"
 * Пример: compressString("aaabbcccc") -> "a3b2c4"
 * Если символ встречается 1 раз, просто выводим символ: "abc" -> "abc"
 */
void compressString(const char *str, char *result);

/* Задание 18: Простой калькулятор (4 балла)
 * Вычислить значение выражения с операциями +, -, *, /
 * Выражение в инфиксной нотации, может содержать скобки
 * Пример: calculateExpression("2 + 3 * 4") -> 14
 *         calculateExpression("(2 + 3) * 4") -> 20
 */
int calculateExpression(const char *expression);

/* Задание 19: Валидация email адреса (5 баллов)
 * Проверить, что строка является корректным email
 * Правила:
 *   - есть ровно один символ @
 *   - до @ минимум 1 символ (буквы, цифры, точка, дефис, подчеркивание)
 *   - после @ есть домен с точкой
 *   - доменная зона минимум 2 символа
 * Пример: validateEmail("user@example.com") -> true
 *         validateEmail("invalid.email") -> false
 */
bool validateEmail(const char *email);

/* Задание 20: Найти самую длинную палиндромную подстроку (5 баллов)
 * Вернуть длину самой длинной палиндромной подстроки
 * Пример: longestPalindromicSubstring("babad") -> 3 ("bab" или "aba")
 *         longestPalindromicSubstring("cbbd") -> 2 ("bb")
 */
int longestPalindromicSubstring(const char *str);

#ifdef __cplusplus
}
#endif

#endif // STUDENT_TASKS_H
