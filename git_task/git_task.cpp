#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	string str; 
	cin >> str;
	int len = str.length();
	for (int i = len - 1; i > 0; i--) { 
		if (str[i - 1] < str[i]) {
			int p = i;
			for (int j = p; j < len; j++) {
				if (str[j] <= str[p] && str[i - 1] < str[j]) p = j; 
			}
			swap(str[i - 1], str[p]); 
			for (int j = len - 1; i < j; i++, j--) { 
				swap(str[i], str[j]);
			}
			break;
		}
	}
	cout << str;
	return 0;
}
