#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	string input;
	cout << "Enter the string: ";
	cin >> input;
	transform(input.begin(), input.end(), input.begin(), tolower);
	vector<char> v; //исходное слово по буквам
	for (int i = 0; i < input.length(); i++) {
		v.push_back(input[i]);
	}
	vector<char> alphabet;
	alphabet = v;

	for (int a = 0; a < alphabet.size(); a++) {
		char c = alphabet[a];
		int posc = a+1;
		for (int b = posc; b < alphabet.size(); b++) {
			if (alphabet[b] == c) {
				alphabet.erase(alphabet.begin() + b);
			}
		}
	}

	sort(alphabet.begin(), alphabet.end()); //буквы слова в порядке 
	bool flag = 0;
	int i = 0;
	char letter_inp;
	while (i!=input.size()) {
		letter_inp = v[v.size() - 1 - i];
		vector<char>::iterator iter;
		iter = find(alphabet.begin(), alphabet.end(), letter_inp);
		vector<char>::iterator pos;
		pos = iter++;
		if (pos != alphabet.end()) {
			flag = true;
			alphabet[0] = *pos;
			cout << "good" << endl;
		}
		i++;
	}
	v[v.size() - i] = alphabet[0];
	cout << "result: ";
	for (int j = 0; j < v.size(); j++) {
		cout << v[j];
	}
	return 0;
}
