#include <iostream>
#include <string>
#include <fstream>
#include "todo.h"

bool Add(const std::string& desc, const int& priority);
void List();
bool Delete(const std::string& desc);

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
            int priority;

            std::cout << "Enter your description : \n";
            std::getline(std::cin, description);
            std::cout << "Enter task priority : (1 for lowest priority and 5 for highest priority) \n";
            std::cin >> priority;

            if (Add(description, priority)) {
                std::cout << "Added successfully!" << std::endl;
            }
        } else if (choice == 2) {
            List();
        }
        else if (choice == 3) {
            std::string description;
            
            std::cout << "Enter the task you want to delete : \n";
            std::getline(std::cin, description);
            if (Delete(description)) {
                std::cout << "Deleted successfully!" << std::endl;
            }
            else {
                std::cout << "Description not found!" << std::endl;
            }
        }
        else {
            std::cout << "Wrong input!" << std::endl;
        }
    } while (choice != 0);

    return 0;
}
