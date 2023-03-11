#include <iostream>
#include <map>
#include <vector>
#include <string>

int main() {
    std::map<int, std::vector<std::string>> students_by_class;

    // чтение данных из файла
    int class_num;
    std::string surname;
    while (std::cin >> class_num >> surname) {
        students_by_class[class_num].push_back(surname);
    }

    // вывод отсортированного списка учеников по классам
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












