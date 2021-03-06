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
            return true;
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
bool Modify(const std::string& oldDesc, const std::string& newDesc) {
    int i = 0;
    for (; i < listCount; i++) {
        if (oldDesc == ToDoList[i].description) {
            ToDoList[i].description = newDesc;
            return true;
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
void List() {
    for (int i = 0; i < listCount; i++) {
        std::cout << "\t\t\tdescription : " << ToDoList[i].description << std::endl;
        std::cout << "\t\t\tpriority : " << ToDoList[i].priority << std::endl;
        std::cout << "\t\t\t" << std::endl;
    }
}
