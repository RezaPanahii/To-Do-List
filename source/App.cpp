#include <iostream>
#include <string>
#include <fstream>
#include "todo.h"

bool Add(const std::string& desc, const std::string& date, const int& priority);
void List();

int main()
{
    int choice;
    do {
        std::cout << "\n";
        std::cout << "\t\t\t----------------------------\n";
        std::cout << "\t\t\t         To Do list         \n";
        std::cout << "\t\t\t----------------------------\n";
        std::cout << "\n";
        std::cout << "\t\t\t1. Add                      \n";
        std::cout << "\n";
        std::cout << "\t\t\t2. List                     \n";
        std::cout << "\n";
        std::cout << "\t\t\t3. Delete                   \n";
        std::cout << "\n";
        std::cout << "\t\t\t4. Modify                   \n";
        std::cout << "\n";
        std::cout << "\t\t\t0. Exit                   \n";
        std::cout << "\n";
        std::cout << "\t\t\tEnter your choice : ";
        std::cin >> choice;

        if (choice == 1) {
            std::string description;
            std::string current_date;
            int priority;

            std::cout << "Enter your description : \n";
            std::getline(std::cin, description);
            std::cout << "Enter your due date : \n";
            std::getline(std::cin, current_date);
            std::cout << "Enter task priority : (1 for lowest priority and 5 for highest priority) \n";
            std::cin >> priority;

            Add(description, current_date, priority);

        } else if (choice == 2) {
            List();
        } else {
            std::cout << "Wrong input!" << std::endl;
        }
    } while (choice != 0);

    return 0;
}
