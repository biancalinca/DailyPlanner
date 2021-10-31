#include <iostream>
#include <ctime>
#include <vector>


class User{
private:
    std::string name;
    std::string lastname;
    int age;

public:
    User() = default;
    User(const std::string &name, const std::string &lastname, int age);
    ~User() = default; //destructor default
    User(const User& User);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getLastname() const;

    void setLastname(const std::string &lastname);

    int getAge() const;

    void setAge(int age);

    friend void afisare_user(User user); //functie friend

};
//contructor
User::User( const std::string &name,const std::string &lastname, int age){
    this->name = name;
    this->lastname = lastname;
    this->age = age;
}
// constructorul de copiere
User::User(const User  &user){
    this->name = user.name;
    this->lastname = user.lastname;
    this->age = user.age;
}

const std::string &User::getName() const {
    return name;
}

void User::setName(const std::string &name) {
    User::name = name;
}

const std::string &User::getLastname() const {
    return lastname;
}

void User::setLastname(const std::string &lastname) {
    User::lastname = lastname;
}

int User::getAge() const {
   return age;
}

void User::setAge(int age) {
    User::age = age;
}

void afisare_user(User user){
    std::cout << "Who's the owner? " << "\n"<< user.name << " " << user.lastname << "\n";

}
//crearea listei de To Do
class ToDo{
private:
    std::string type;
    std::string priority;
    std::string deadline;

    //constructor
public:
    ToDo(const std::string &type, const std::string &priority, const std::string &deadline){
        this->type = type;
        this->priority = priority;
        this->deadline = deadline;
    }

    const std::string &getType() const {
        return type;
    }

    void setType(const std::string &type) {
        ToDo::type = type;
    }

    const std::string &getPriority() const {
        return priority;
    }

    void setPriority(const std::string &priority) {
        ToDo::priority = priority;
    }

    const std::string &getDeadline() const {
        return deadline;
    }

    void setDeadline(const std::string &deadline) {
        ToDo::deadline = deadline;
    }


    friend std::ostream &operator<<(std::ostream &os, const ToDo &aDo);
};

void afisare_task(ToDo mytodo){
    std::cout << "Add tasks:" <<"\n";

}


std::ostream &operator<<(std::ostream &os, const ToDo &aDo) {
    os << "type: " << aDo.type << " priority: " << aDo.priority << " deadline: " << aDo.deadline;
    return os;
}






int main(){

    //genereaza data curenta
    std::time_t t = std::time(0);
    std::tm* date = std::localtime(&t);
    std::cout << "Today date is: " << (date->tm_year + 1900) << '/'<< (date->tm_mon + 1) << '/'<< date->tm_mday << "\n";


    User admin("bia","maria", 20);
    afisare_user(admin);
    std::vector<ToDo> todo;

    ToDo task("homework","urgent","today");
    afisare_task(task);





    return 0;
}