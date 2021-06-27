#include "git_task.cpp"

using namespace std;

typedef bool (*test)();

int testTask(test* tests, size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		if (tests[i]())
			return i + 1;
	}
	return 0;
}

bool test1() // нормальное
{
	string str = "abdc";
	string result = "acbd";
	str = anagram(str);
	if (str.compare(result))
		return true;
	else
		return false;
}
bool test2() // нормальное
{
	string str = "abcdefg";
	string result = "abcdegf";
	str = anagram(str);
	if (str.compare(result))
		return true;
	else
		return false;
}
bool test3() // нормальное
{
	string str = "word";
	string result = "wrdo";
	str = anagram(str);
	if (str.compare(result))
		return true;
	else
		return false;
}
bool test4() // нормальное
{
	string str = "bbbcccaaa";
	string result = "bbcaaabcc";
	str = anagram(str);
	if (str.compare(result))
		return true;
	else
		return false;
}
bool test5() // нормальное
{
	string str = "string";
	string result = "strngi";
	str = anagram(str);
	if (str.compare(result))
		return true;
	else
		return false;
}
bool test6() // нормальное
{
	string str = "aboba";
	string result = "aoabb";
	str = anagram(str);
	if (str.compare(result))
		return true;
	else
		return false;
}
bool test7() // граничное
{
	string str = "zyxhgfedcba";
	string result = "zyxhgfedcba";
	str = anagram(str);
	if (str.compare(result))
		return true;
	else
		return false;
}
bool test8() // граничное
{
	string str = "dcba";
	string result = "dcba";
	str = anagram(str);
	if (str.compare(result))
		return true;
	else
		return false;
}
bool test9() // исключительное
{
	string str = "ddddddddddddddddddddddddddd";
	string result = "ddddddddddddddddddddddddddd";
	str = anagram(str);
	if (str.compare(result))
		return true;
	else
		return false;
}
bool test10() // исключительное
{
	string str = "aaaaaaaaaa";
	string result = "aaaaaaaaaa";
	str = anagram(str);
	if (str.compare(result))
		return true;
	else
		return false;
}

int main()
{
	test* tests = new test[10];
	tests[0] = &test1;
	tests[1] = &test2;
	tests[2] = &test3;
	tests[3] = &test4;
	tests[4] = &test5;
	tests[5] = &test6;
	tests[6] = &test7;
	tests[7] = &test8;
	tests[8] = &test9;
	tests[9] = &test10;

	int result = testTask(tests, 10);
	if (result)
		cout << "Error " << result;
	else
		cout << "OK";
	return 0;
}