#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int computeHash (char* s, unsigned long n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += s[i] - 'a' + 1;
	}
	return sum % 13;
}
int isEqual (char* a, char* b, unsigned int n) {
	for (int i = 0; i < n; i++, a++, b++) {
		if (*a !=  *b) return false;
	}
	return true;
}
int rabinkarp (char* str, char* pattern) {
	unsigned int n = strlen(str);
	unsigned int m = strlen(pattern);
	int hashArr[n - m + 1];
	hashArr[0] = computeHash (str, m);

	for (int i = 1; i < n - m + 1; i++) {
		hashArr[i] = (hashArr[i - 1] - str[i - 1] + str[i + m - 1]) % 13;
	}
	int patternHash = computeHash (pattern, m);
	for (int i = 0; i < n - m + 1; i++) {
		if ((hashArr[i] == patternHash) && isEqual(pattern, str + i, m)) {
			return i;
		}
	}
	return -1;
}
int main() {
	char* str = "Today is convocation in Integral University for batch";
	char* pattern = "oca";
	int result = rabinkarp(str, pattern);
	if (result == -1) {
		printf ("Not found\n");
	} else {
		printf("Found at %d index\n", result);
	}
	return 0;
}
