#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
using namespace std;

int main() {
	char str[100];
	char* pch = NULL;
	gets(str);
	pch = strtok(str, " ");

	while (pch != NULL) {
		cout << pch << endl;
		pch = strtok(NULL, " ");
	}
	return 0;
}