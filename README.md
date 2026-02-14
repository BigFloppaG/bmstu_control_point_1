# Проект для проверочных работ студентов (C)

## Структура проекта
- `student_lib/` - статическая библиотека на C с заданиями
- `tests/` - автоматические тесты для проверки решений (C++ с Google Test)

## Сборка проекта

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## Запуск тестов

```bash
cd build
ctest --output-on-failure
```

Или запустите напрямую для просмотра баллов:
```bash
./tests/student_tests
```

## Система оценивания

Каждое задание оценивается автоматически:

### Простые задания (15 заданий):
- Задания 1-11: по 0.5 балла каждое (всего 5.5 баллов)
- Задания 12-14: по 1 баллу каждое (всего 3 балла)
- Задание 15: 1.5 балла

**Итого простые:** 10 баллов

### Сложные задания (5 заданий):
- Задания 16-17: по 3 балла каждое (всего 6 баллов)
- Задание 18: 4 балла
- Задания 19-20: по 5 баллов каждое (всего 10 баллов)

**Итого сложные:** 20 баллов

**Максимально:** 30 баллов

### Критерии оценки:
- 25+ баллов - ОТЛИЧНО (5)
- 20-24.9 баллов - ХОРОШО (4)
- 15-19.9 баллов - УДОВЛЕТВОРИТЕЛЬНО (3)
- < 15 баллов - НЕУДОВЛЕТВОРИТЕЛЬНО (2)

Баллы начисляются пропорционально количеству пройденных тестов в каждом задании.

## Для студентов

Реализуйте функции в файле `student_lib/student_tasks.c`. Все объявления находятся в `student_lib/student_tasks.h`.

**Важно:** Библиотека написана на чистом C (стандарт C11).

## Задания

### Простые задания (постепенное усложнение)

1. `size_t stringLength(const char* str)` - вычислить длину строки (аналог strlen) (0.5 балла)
2. `void stringCopy(char* dest, const char* src)` - скопировать строку (аналог strcpy) (0.5 балла)
3. `void stringConcat(char* dest, const char* src)` - конкатенация строк (аналог strcat) (0.5 балла)
4. `int stringCompare(const char* str1, const char* str2)` - сравнение строк (аналог strcmp) (0.5 балла)
5. `int countChar(const char* str, char ch)` - подсчет вхождений символа (0.5 балла)
6. `int countVowels(const char* str)` - подсчет гласных букв (a,e,i,o,u) (0.5 балла)
7. `void removeSpaces(const char* str, char* result)` - удаление всех пробелов (0.5 балла)
8. `int firstWordLength(const char* str)` - длина первого слова (0.5 балла)
9. `int findSubstring(const char* str, const char* substr)` - поиск подстроки (0.5 балла)
10. `void replaceChar(const char* str, char oldChar, char newChar, char* result)` - замена символа (0.5 балла)
11. `void trimString(const char* str, char* result)` - удаление начальных и конечных пробелов (0.5 балла)
12. `void reverseWords(const char* str, char* result)` - переворот символов в каждом слове (1 балл)
13. `bool isPalindromeIgnoreCase(const char* str)` - палиндром (игнорируя регистр и пробелы) (1 балл)
14. `int countWords(const char* str)` - подсчет количества слов (1 балл)
15. `bool isAnagram(const char* str1, const char* str2)` - проверка на анаграммы (1.5 балла)

### Сложные задания

16. `void longestCommonPrefix(char* result, const char* first, ...)` - самый длинный общий префикс (variadic, 3 балла)
17. `void compressString(const char* str, char* result)` - RLE-сжатие строки (3 балла)
18. `int calculateExpression(const char* expression)` - простой калькулятор с приоритетом операций и скобками (4 балла)
19. `bool validateEmail(const char* email)` - валидация email адреса (5 баллов)
20. `int longestPalindromicSubstring(const char* str)` - самая длинная палиндромная подстрока (5 баллов)

## Для преподавателей

Система автоматически подсчитывает баллы и выводит детальный отчет после запуска тестов.
Результаты включают:
- Статус каждого задания
- Количество пройденных тестов
- Набранные баллы
- Итоговую оценку

Для изменения баллов отредактируйте файл `tests/score_calculator.h`.
