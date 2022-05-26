#include <iostream>
#include <string>
#include <fstream>

void Add();
void Delete();
void Modify();
void List();
void Menu() {
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
}

int main()
{
    // contact , add delete modify
    int choice;

    do {
        Menu();
        std::cout << "\n\t\t\tEnter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            Add();
            break;

        case 2:
            List();
            break;

        case 3:
            Delete();
            break;

        case 4:
            Modify();
            break;

        default:
            std::cout << "\t\t\tWring input!\n";
            break;
        }




    } while (choice != 0);

    return 0;
}
