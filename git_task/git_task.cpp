#include "git_task.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <fstream>

using namespace std;

int main() {
	string str;

	/*ifstream fromfile("file.txt");
	fromfile >> str;*/
 
	cin >> str;
	cout << anagram(str);
	return 0;
}
