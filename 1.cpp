#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main() {
	int n;
	cin >> n;

	set<int> numbers; // ������� ������ ���������

	string line;
	getline(cin, line); // ��������� ������, ����� ������� �� ����� ������
	getline(cin, line); // ��������� ������ � �������

	istringstream iss(line);
	int x;
	while (iss >> x) {
		numbers.insert(x); // ��������� ����� � ���������
	}

	cout << numbers.size() << endl; // ������� ������ ��������� (���������� ��������� �����)

	return 0;
}










