#include <iostream>
#include <map>
#include <vector>
#include <string>

int main() {
    std::map<int, std::vector<std::string>> students_by_class;

    // ÷òåíèå äàííûõ èç ôàéëà
    int class_num;
    std::string surname;
    while (std::cin >> class_num >> surname) {
        students_by_class[class_num].push_back(surname);
    }

    // âûâîä îòñîðòèðîâàííîãî ñïèñêà ó÷åíèêîâ ïî êëàññàì
    for (int class_num = 9; class_num <= 11; ++class_num) {
        auto it = students_by_class.find(class_num);
        if (it != students_by_class.end()) {
            for (const auto& surname : it->second) {
                std::cout << class_num << " " << surname << "\n";
            }
        }
    }

    return 0;
}












