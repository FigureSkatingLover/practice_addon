#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <fstream>

using namespace std;

int main() {
	string str;

	ifstream fromfile("file.txt");
	fromfile >> str;
 
	//cin >> str;
	int len = str.length();
	//алгоритм Нарайяны (поиск следующей лексикографической последовательности)
	for (int i = len - 1; i > 0; i--) { //поиск наибольшего индекса
		if (str[i - 1] < str[i]) {
			int p = i;
			for (int j = p; j < len; j++) {
				if (str[j] <= str[p] && str[i - 1] < str[j]) p = j; //поворот
			}
			swap(str[i - 1], str[p]); //суфф<->поворот
			for (int j = len - 1; i < j; i++, j--) { //разворот суффикса
				swap(str[i], str[j]);
			}
			break;
		}
	}
	cout << str;
	return 0;
}
