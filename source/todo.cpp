#include <iostream>
#include "todo.h"

struct ToDo ToDoList[100];

void Add();
void Delete();
void Modify();
void List() {
    for (int i = 0; i < listCount; i++) {
        std::cout << "description : " << ToDoList[i].description << std::endl;
        std::cout << "date : " << ToDoList[i].current_date << std::endl;
        std::cout << "priority : " << ToDoList[i].priority << std::endl;
        std::cout << "" << std::endl;
    }
}
