
#include <iostream>
#include "../headers/ToDoList.h"

ToDo::ToDo(const std::string &_type, const std::string &_priority, const std::string &_deadline) {

    this->type = _type;
    this->priority = _priority;
    this->deadline = _deadline;

}

std::istream &operator>>(std::istream &in, ToDo &todo) {


    return in;
}

std::ostream &operator<<(std::ostream &out, const ToDo &todo) {

    return out;
}

void ToDo::read(std::istream &in) {
    std::cout << "Tipul task-ului: ";
    in >> type;

    std::cout << "Prioritate: ";
    in >> priority;

    std::cout << "Deadline: ";
    in >> deadline;




}

void ToDo::print(std::ostream &out) const {
    out << "Tipul task-ului: " << type << "\n";
    out << "Prioritate: " << priority << "\n";
    out << "Today I am feeling: " <<  deadline << "\n";

}

void ToDo::addTask(std::string task) {
    tasks.emplace_back(task);

}
 Type type() {
    return Type::Homework;
}