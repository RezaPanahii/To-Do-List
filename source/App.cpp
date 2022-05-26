#include <iostream>
#include <string>
#include <fstream>
#include "todo.h"

bool Add(const std::string& desc, const int& priority);
void List();
bool Delete(const std::string& desc);
bool Modify(const std::string& oldDesc, const std::string& newDesc);

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
        std::cin.get();
        system("cls");

        if (choice == 1) {
            std::string description;
            int priority;

            std::cout << "\t\t\tEnter your description : \n";
            std::cout << "\t\t\t";
            std::getline(std::cin, description);
            std::cout << "\t\t\tEnter task priority : (1 for lowest priority and 5 for highest priority) \n";
            std::cout << "\t\t\t";
            std::cin >> priority;

            if (Add(description, priority)) {
                std::cout << "\t\t\tAdded successfully!" << std::endl;
            }
        }
        else if (choice == 2) {
            List();
            std::cout << "\t\t\t";
            std::cin.get();
        }
        else if (choice == 3) {
            // if (listCount > 0) {
            std::string description;

            std::cout << "\t\t\tEnter the task you want to delete : \n";
            std::cout << "\t\t\t";
            std::getline(std::cin, description);
            if (Delete(description)) {
                std::cout << "\t\t\tDeleted successfully!" << std::endl;
            }
            else {
                std::cout << "\t\t\tDescription not found!" << std::endl;
            }
            // }
            // else if (listCount <= 0){
            //     std::cout << "\t\t\t" << listCount << std::endl;
            //     std::cout << "\t\t\tList is empty!" << std::endl;
            // }
        }
        else if (choice == 4) {
            std::string oldDesc;
            std::string newDesc;

            // if (listCount > 0) {
            std::cout << "\t\t\tEnter the task you want to modify : \n";
            std::cout << "\t\t\t";
            std::getline(std::cin, oldDesc);
            std::cout << "\t\t\tEnter the new description : \n";
            std::cout << "\t\t\t";
            std::getline(std::cin, newDesc);

            if (Modify(oldDesc, newDesc)) {
                std::cout << "Modification successful!" << std::endl;
            }
            else {
                std::cout << "Modification unsuccessful!" << std::endl;
            }
            // }
            // else {
            //     std::cout << "\t\t\t" << listCount << std::endl;
            //     std::cout << "\t\t\tList is empty!" << std::endl;
            // }
        }
        else if (choice == 0) {
            break;
        }
        else {
            std::cout << "\t\t\tWrong input!" << std::endl;
        }
    } while (choice != 0);

    return 0;
}
