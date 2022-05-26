#include <iostream>
#include "todo.h"

struct ToDo ToDoList[100];

bool Add(const std::string& desc, const int& priority) {
    // if list is full
    if (listCount < 101) {
        ToDo y = { desc, priority };
        ToDoList[listCount] = y;

        listCount++;
    } else {
        return false;
    }
}
void Delete();
void Modify();
void List() {
    for (int i = 0; i < listCount; i++) {
        std::cout << "description : " << ToDoList[i].description << std::endl;
        std::cout << "priority : " << ToDoList[i].priority << std::endl;
        std::cout << "" << std::endl;
    }
}
