#include <iostream>
#include "todo.h"

struct ToDo ToDoList[100];

bool Add(const std::string& desc, const int& priority) {
    // if list is full
    if (listCount < 101) {
        ToDo y = { desc, priority };
        ToDoList[listCount] = y;

        listCount++;
        return true;
    }
    else {
        return false;
    }
}
bool Delete(const std::string& desc) {
    int i = 0;
    for (; i < listCount; i++) {
        if (desc == ToDoList[i].description) {
            for (int j = i; j < listCount - 1; j++) {
                ToDoList[i].description = ToDoList[i + 1].description;
                ToDoList[i].priority = ToDoList[i + 1].priority;
            }
            listCount--;
            break;
        }
    }
    if (i == listCount) {
        return false;
    }
    else {
        return true;
    }
}
void Modify();
void List() {
    for (int i = 0; i < listCount; i++) {
        std::cout << "description : " << ToDoList[i].description << std::endl;
        std::cout << "priority : " << ToDoList[i].priority << std::endl;
        std::cout << "" << std::endl;
    }
}
