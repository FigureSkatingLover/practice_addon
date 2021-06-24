#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string input;
	cout << "Enter the string: ";
	cin >> input;
	vector<char> v; //исходное слово по буквам
	for (int i = 0; i < input.length(); i++) {
		v.push_back(input[i]);
	}
	vector<char> alphabet;
	alphabet = v;
	sort(alphabet.end(), alphabet.begin()); //буквы слова в порядке убывания
	bool flag = 0;
	int i = 0;
	char letter_inp;
	while (!flag) {
		letter_inp = v[v.size() - 1 - i];

	}
}
