#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main() {
	int n;
	cin >> n;

	set<int> numbers; // ñîçäàåì ïóñòîå ìíîæåñòâî

	string line;
	getline(cin, line); // ñ÷èòûâàåì ñòðîêó, ÷òîáû ïåðåéòè íà íîâóþ ñòðîêó
	getline(cin, line); // ñ÷èòûâàåì ñòðîêó ñ ÷èñëàìè

	istringstream iss(line);
	int x;
	while (iss >> x) {
		numbers.insert(x); // äîáàâëÿåì ÷èñëî â ìíîæåñòâî
	}

	cout << numbers.size() << endl; // âûâîäèì ðàçìåð ìíîæåñòâà (êîëè÷åñòâî ðàçëè÷íûõ ÷èñåë)

	return 0;
}










