#ifndef DAILYPLANNER_TODOLIST_H
#define DAILYPLANNER_TODOLIST_H

#include <vector>
#include <string>
#include <typeindex>


enum class Type {Homework, Study, ExamPrep};



class ToDo {
private:
    std::string type; // tema, appointment, events,
    std::string priority;
    std::string deadline;
    std::vector<std::string> tasks;

public:
    ToDo() = default;
    ~ToDo() = default;
    ToDo(const std::string &_type, const std::string &_priority, const std::string &_deadline);
    ToDo(const ToDo&) = default;
    ToDo &operator=(const ToDo&) = default;

    friend std::istream& operator>>(std::istream& in, ToDo& todo); // citire
    friend std::ostream& operator<<(std::ostream& out, const ToDo& todo);

    void read(std::istream& in);
    void print(std::ostream& out) const ;
    virtual void addTask(std::string task);

};

#endif //DAILYPLANNER_TODOLIST_H
