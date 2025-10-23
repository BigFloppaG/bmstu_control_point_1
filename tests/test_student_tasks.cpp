#include <cstring>
#include <gtest/gtest.h>

extern "C" {
#include "student_tasks.h"
}

// ========== Задание 1: Разность двух чисел (0.5 балл) ==========
TEST(Task01_Sub, PositiveNumbers) {
  EXPECT_EQ(sub(5, 3), 2);
  EXPECT_EQ(sub(30, 20), 10);
  EXPECT_EQ(sub(300, 200), 100);
}

TEST(Task01_Sub, NegativeNumbers) {
  EXPECT_EQ(sub(-3, -5), 2);
  EXPECT_EQ(sub(-5, 10), -15);
  EXPECT_EQ(sub(10, -5), 15);
}

TEST(Task01_Sub, WithZero) {
  EXPECT_EQ(sub(0, 0), 0);
  EXPECT_EQ(sub(5, 0), 5);
  EXPECT_EQ(sub(0, 5), -5);
}

// ========== Задание 2: Сумма N чисел (0.5 балл) ==========
TEST(Task02_Summ, BaseCase) {
  EXPECT_EQ(summ(0), 0);
  EXPECT_EQ(summ(1), 1);
}

TEST(Task02_Summ, SmallNumbers) {
  EXPECT_EQ(summ(2), 3);
  EXPECT_EQ(summ(3), 6);
  EXPECT_EQ(summ(4), 10);
  EXPECT_EQ(summ(5), 15);
}

TEST(Task02_Summ, LargerNumbers) {
  EXPECT_EQ(summ(6), 21);
  EXPECT_EQ(summ(10), 55);
  EXPECT_EQ(summ(100), 5050);
}

// ========== Задание 3: Проверка на совершенное число (0.5 балла) ==========
TEST(Task03_IsPerfect, PerfectNumbers) {
  EXPECT_TRUE(isPerfect(6));
  EXPECT_TRUE(isPerfect(28));
  EXPECT_TRUE(isPerfect(496));
  EXPECT_TRUE(isPerfect(8128));
}

TEST(Task03_IsPerfect, NonPerfectNumbers) {
  EXPECT_FALSE(isPerfect(1));
  EXPECT_FALSE(isPerfect(4));
  EXPECT_FALSE(isPerfect(8));
  EXPECT_FALSE(isPerfect(9));
  EXPECT_FALSE(isPerfect(12));
  EXPECT_FALSE(isPerfect(15));
  EXPECT_FALSE(isPerfect(100));
}

TEST(Task03_IsPerfect, EdgeCases) {
  EXPECT_FALSE(isPerfect(0));
  EXPECT_FALSE(isPerfect(-6));
  EXPECT_FALSE(isPerfect(-28));
}

// ========== Задание 4: Найти минимальный элемент в массиве (0.5 балл)
// ==========
TEST(Task04_FindMin, BasicArrays) {
  int arr1[] = {1, 2, 3, 4, 5};
  EXPECT_EQ(findMin(arr1, 5), 1);

  int arr2[] = {-5, -2, -10, -1};
  EXPECT_EQ(findMin(arr2, 4), -10);

  int arr3[] = {42};
  EXPECT_EQ(findMin(arr3, 1), 42);
}

TEST(Task04_FindMin, UnorderedArrays) {
  int arr1[] = {3, 7, 2, 9, 1};
  EXPECT_EQ(findMin(arr1, 5), 1);

  int arr2[] = {100, 50, 200, 75};
  EXPECT_EQ(findMin(arr2, 4), 50);

  int arr3[] = {5, 5, 5, 5};
  EXPECT_EQ(findMin(arr3, 4), 5);
}

TEST(Task04_FindMin, MinAtEnd) {
  int arr[] = {10, 9, 8, 7, 6};
  EXPECT_EQ(findMin(arr, 5), 6);
}

// ========== Задание 5: Преобразовать строку в заглавные буквы (0.5 балл)
// ==========
TEST(Task05_ToUpperString, BasicStrings) {
  char upper[100];

  toUpperString("hello", upper);
  EXPECT_STREQ(upper, "HELLO");

  toUpperString("world", upper);
  EXPECT_STREQ(upper, "WORLD");

  toUpperString("12345", upper);
  EXPECT_STREQ(upper, "12345");
}

TEST(Task05_ToUpperString, EdgeCases) {
  char upper[100];

  toUpperString("", upper);
  EXPECT_STREQ(upper, "");

  toUpperString("a", upper);
  EXPECT_STREQ(upper, "A");
}

TEST(Task05_ToUpperString, MixedCaseStrings) {
  char upper[100];

  toUpperString("Programming", upper);
  EXPECT_STREQ(upper, "PROGRAMMING");

  toUpperString("Hello World!", upper);
  EXPECT_STREQ(upper, "HELLO WORLD!");

  toUpperString("Test123", upper);
  EXPECT_STREQ(upper, "TEST123");
}

// ========== Задание 6: Проверка на палиндром (0.5 балл) ==========
TEST(Task06_IsPalindrome, Palindromes) {
  EXPECT_TRUE(isPalindrome(""));
  EXPECT_TRUE(isPalindrome("a"));
  EXPECT_TRUE(isPalindrome("aa"));
  EXPECT_TRUE(isPalindrome("aba"));
  EXPECT_TRUE(isPalindrome("abba"));
  EXPECT_TRUE(isPalindrome("racecar"));
  EXPECT_TRUE(isPalindrome("madam"));
}

TEST(Task06_IsPalindrome, NonPalindromes) {
  EXPECT_FALSE(isPalindrome("ab"));
  EXPECT_FALSE(isPalindrome("hello"));
  EXPECT_FALSE(isPalindrome("world"));
  EXPECT_FALSE(isPalindrome("abcd"));
}

TEST(Task06_IsPalindrome, Numbers) {
  EXPECT_TRUE(isPalindrome("12321"));
  EXPECT_TRUE(isPalindrome("1001"));
  EXPECT_FALSE(isPalindrome("12345"));
}

// ========== Задание 7: Сортировка массива пузырьком (0.5 балла) ==========
TEST(Task07_BubbleSort, BasicArrays) {
  int arr1[] = {5, 2, 8, 1, 9};
  bubbleSort(arr1, 5);
  int expected1[] = {1, 2, 5, 8, 9};
  EXPECT_TRUE(memcmp(arr1, expected1, sizeof(expected1)) == 0);
}

TEST(Task07_BubbleSort, AlreadySorted) {
  int arr[] = {1, 2, 3, 4, 5};
  bubbleSort(arr, 5);
  int expected[] = {1, 2, 3, 4, 5};
  EXPECT_TRUE(memcmp(arr, expected, sizeof(expected)) == 0);
}

TEST(Task07_BubbleSort, ReverseSorted) {
  int arr[] = {5, 4, 3, 2, 1};
  bubbleSort(arr, 5);
  int expected[] = {1, 2, 3, 4, 5};
  EXPECT_TRUE(memcmp(arr, expected, sizeof(expected)) == 0);
}

TEST(Task07_BubbleSort, WithNegatives) {
  int arr[] = {3, -1, 4, -5, 2};
  bubbleSort(arr, 5);
  int expected[] = {-5, -1, 2, 3, 4};
  EXPECT_TRUE(memcmp(arr, expected, sizeof(expected)) == 0);
}

TEST(Task07_BubbleSort, SingleElement) {
  int arr[] = {42};
  bubbleSort(arr, 1);
  EXPECT_EQ(arr[0], 42);
}

// ========== Задание 8: Вычисление НОК двух чисел (0.5 балла) ==========
TEST(Task08_HCF, BasicCases) {
  EXPECT_EQ(hcf(12, 8), 24);
  EXPECT_EQ(hcf(48, 18), 144);
  EXPECT_EQ(hcf(15, 20), 60);
}

TEST(Task08_HCF, CoprimeNumbers) {
  EXPECT_EQ(hcf(17, 19), 323);
  EXPECT_EQ(hcf(7, 13), 91);
}

TEST(Task08_HCF, WithOne) {
  EXPECT_EQ(hcf(1, 5), 5);
  EXPECT_EQ(hcf(10, 1), 10);
}

TEST(Task08_HCF, SameNumbers) {
  EXPECT_EQ(hcf(5, 5), 5);
  EXPECT_EQ(hcf(100, 100), 100);
}

TEST(Task08_HCF, OrderDoesNotMatter) {
  EXPECT_EQ(hcf(24, 36), hcf(36, 24));
  EXPECT_EQ(hcf(15, 25), hcf(25, 15));
}

// ========== Задание 9: Вычисление числа Каталана (0.5 балла) ==========
TEST(Task09_Catalan, BaseCase) {
  EXPECT_EQ(catalan(0), 1);
  EXPECT_EQ(catalan(1), 1);
}

TEST(Task09_Catalan, SmallNumbers) {
  EXPECT_EQ(catalan(2), 2);
  EXPECT_EQ(catalan(3), 5);
  EXPECT_EQ(catalan(4), 14);
  EXPECT_EQ(catalan(5), 42);
  EXPECT_EQ(catalan(6), 132);
}

TEST(Task09_Catalan, LargerNumbers) {
  EXPECT_EQ(catalan(7), 429);
  EXPECT_EQ(catalan(8), 1430);
  EXPECT_EQ(catalan(9), 4862);
  EXPECT_EQ(catalan(10), 16796);
}

// ========== Задание 10: Перевод числа в восьмеричную строку (0.5 балла)
// ==========
TEST(Task10_IntToOctalString, BasicNumbers) {
  char octal[20];

  intToOctalString(0, octal);
  EXPECT_STREQ(octal, "0");

  intToOctalString(1, octal);
  EXPECT_STREQ(octal, "1");

  intToOctalString(7, octal);
  EXPECT_STREQ(octal, "7");

  intToOctalString(8, octal);
  EXPECT_STREQ(octal, "10");
}

TEST(Task10_IntToOctalString, TwoDigitNumbers) {
  char octal[20];

  intToOctalString(64, octal);
  EXPECT_STREQ(octal, "100");

  intToOctalString(255, octal);
  EXPECT_STREQ(octal, "377");

  intToOctalString(512, octal);
  EXPECT_STREQ(octal, "1000");
}

TEST(Task10_IntToOctalString, LargerNumbers) {
  char octal[20];

  intToOctalString(4095, octal);
  EXPECT_STREQ(octal, "7777");

  intToOctalString(32768, octal);
  EXPECT_STREQ(octal, "100000");

  intToOctalString(1000000, octal);
  EXPECT_STREQ(octal, "3641100");
}

// ========== Задание 11: Проверка корректности HTML тегов (5 баллов)
// ==========
TEST(Task11_ValidHtml, ValidSequences) {
  EXPECT_TRUE(isValidHtml("div", "/div", NULL));
  EXPECT_TRUE(isValidHtml("p", "/p", NULL));
  EXPECT_TRUE(isValidHtml("span", "/span", NULL));
  EXPECT_TRUE(isValidHtml("div", "p", "/p", "/div", NULL));
  EXPECT_TRUE(isValidHtml("div", "span", "/span", "/div", NULL));
  EXPECT_TRUE(isValidHtml("body", "div", "p", "/p", "/div", "/body", NULL));
}

TEST(Task11_ValidHtml, InvalidSequences) {
  EXPECT_FALSE(isValidHtml("div", "p", "/div", NULL));
  EXPECT_FALSE(isValidHtml("div", "/span", NULL));
  EXPECT_FALSE(isValidHtml("div", NULL));
  EXPECT_FALSE(isValidHtml("/div", NULL));
  EXPECT_FALSE(isValidHtml("div", "/div", "/div", NULL));
  EXPECT_FALSE(isValidHtml("span", "div", "/span", "/div", NULL));
}

TEST(Task11_ValidHtml, EmptySequence) { EXPECT_TRUE(isValidHtml(NULL)); }

TEST(Task11_ValidHtml, ComplexSequences) {
  EXPECT_TRUE(
      isValidHtml("html", "body", "div", "/div", "/body", "/html", NULL));
  EXPECT_TRUE(isValidHtml("div", "/div", "p", "/p", "span", "/span", NULL));
  EXPECT_FALSE(
      isValidHtml("div", "body", "span", "/body", "/span", "/div", NULL));
  EXPECT_FALSE(isValidHtml("div", "div", "div", "/div", "/div", NULL));
}

// ========== Задание 12: Нормализация Windows пути (5 баллов) ==========
TEST(Task12_NormalizeWindowsPath, BasicPaths) {
  char normalized[256];

  normalizeWindowsPath("C:\\Users\\user", normalized);
  EXPECT_STREQ(normalized, "C:\\Users\\user");

  normalizeWindowsPath("D:\\", normalized);
  EXPECT_STREQ(normalized, "D:\\");
}

TEST(Task12_NormalizeWindowsPath, WithCurrentDirectory) {
  char normalized[256];

  normalizeWindowsPath("C:\\.\\", normalized);
  EXPECT_STREQ(normalized, "C:\\");

  normalizeWindowsPath("C:\\a\\.\\b", normalized);
  EXPECT_STREQ(normalized, "C:\\a\\b");

  normalizeWindowsPath("C:\\a\\.\\b\\.\\c", normalized);
  EXPECT_STREQ(normalized, "C:\\a\\b\\c");
}

TEST(Task12_NormalizeWindowsPath, WithParentDirectory) {
  char normalized[256];

  normalizeWindowsPath("C:\\a\\b\\..\\c", normalized);
  EXPECT_STREQ(normalized, "C:\\a\\c");

  normalizeWindowsPath("C:\\a\\..\\b", normalized);
  EXPECT_STREQ(normalized, "C:\\b");

  normalizeWindowsPath("C:\\a\\b\\c\\..\\..\\d", normalized);
  EXPECT_STREQ(normalized, "C:\\a\\d");
}

TEST(Task12_NormalizeWindowsPath, WithTrailingSlashes) {
  char normalized[256];

  normalizeWindowsPath("C:\\a\\b\\\\", normalized);
  EXPECT_STREQ(normalized, "C:\\a\\b");

  normalizeWindowsPath("C:\\a\\\\\\b", normalized);
  EXPECT_STREQ(normalized, "C:\\a\\b");
}

TEST(Task12_NormalizeWindowsPath, ComplexCases) {
  char normalized[256];

  normalizeWindowsPath("C:\\a\\b\\..\\c\\.\\d\\\\", normalized);
  EXPECT_STREQ(normalized, "C:\\a\\c\\d");

  normalizeWindowsPath("D:\\home\\.\\user\\..\\admin\\.\\docs", normalized);
  EXPECT_STREQ(normalized, "D:\\home\\admin\\docs");

  normalizeWindowsPath("C:\\..\\", normalized);
  EXPECT_STREQ(normalized, "C:\\");

  normalizeWindowsPath("C:\\a\\b\\..\\..\\", normalized);
  EXPECT_STREQ(normalized, "C:\\");
}

TEST(Task12_NormalizeWindowsPath, MultipleParentDirectories) {
  char normalized[256];

  normalizeWindowsPath("C:\\a\\b\\c\\..\\..\\..\\d", normalized);
  EXPECT_STREQ(normalized, "C:\\d");

  normalizeWindowsPath("C:\\a\\b\\..\\c\\..\\d", normalized);
  EXPECT_STREQ(normalized, "C:\\a\\d");
}

TEST(Task13_ReversePolishNotation, BasicExpressions) {
  EXPECT_EQ(reversePolishNotation("3 4 +"), 7);
  EXPECT_EQ(reversePolishNotation("10 2 -"), 8);
  EXPECT_EQ(reversePolishNotation("5 6 *"), 30);
  EXPECT_EQ(reversePolishNotation("8 4 /"), 2);
}

TEST(Task13_ReversePolishNotation, ComplexExpressions) {

  EXPECT_EQ(reversePolishNotation("3 4 + 2 * 7 /"), 2);

  EXPECT_EQ(reversePolishNotation("5 1 2 + 4 * + 3 -"), 14);

  EXPECT_EQ(reversePolishNotation("10 2 8 * + 3 -"), 23);
}

TEST(Task13_ReversePolishNotation, SingleNumber) {
  EXPECT_EQ(reversePolishNotation("42"), 42);
}

TEST(Task13_ReversePolishNotation, DivisionByZero) {
  EXPECT_EQ(reversePolishNotation("8 0 /"), 0);
}

TEST(Task13_ReversePolishNotation, NegativeNumbers) {
  EXPECT_EQ(reversePolishNotation("-3 -4 +"), -7);
  EXPECT_EQ(reversePolishNotation("10 -2 -"), 12);
  EXPECT_EQ(reversePolishNotation("-5 6 *"), -30);
  EXPECT_EQ(reversePolishNotation("8 -4 /"), -2);
}

TEST(Task13_ReversePolishNotation, MixedOperations) {
  EXPECT_EQ(reversePolishNotation("2 3 + 5 * 6 -"), 19);
  EXPECT_EQ(reversePolishNotation("4 2 / 3 + 7 *"), 35);
}

TEST(Task13_ReversePolishNotation, MultipleDigitNumbers) {
  EXPECT_EQ(reversePolishNotation("12 34 +"), 46);
  EXPECT_EQ(reversePolishNotation("100 25 -"), 75);
  EXPECT_EQ(reversePolishNotation("15 3 *"), 45);
  EXPECT_EQ(reversePolishNotation("144 12 /"), 12);
}