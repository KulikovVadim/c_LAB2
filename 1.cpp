#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main() {
	int n;
	cin >> n;

	set<int> numbers; // создаем пустое множество

	string line;
	getline(cin, line); // считываем строку, чтобы перейти на новую строку
	getline(cin, line); // считываем строку с числами

	istringstream iss(line);
	int x;
	while (iss >> x) {
		numbers.insert(x); // добавляем число в множество
	}

	cout << numbers.size() << endl; // выводим размер множества (количество различных чисел)

	return 0;
}










