#include <iostream>
#include <ctime>
#include <vector>
#include "headers/Homework.h"
#include "headers/Study.h"
#include "headers/ExamPrep.h"
#include "headers/Feel.h"
#include "headers/ToDoList.h"

/* Andreea vrea sa-si organizeze timpul mai bine din 2022, asa ca isi creeaza o aplicatie numita Daily Planner.
 * Prima data, aplicatia o va intreba cum se simte in ziua respectiva, Andreea dand o nota starii ei de spirit de la 1
 * la 10. Daca nota este sub 5, aplicatia ii va furniza un playlist cu muzica preferata, iar daca este mai mare de 5
 * ii va afisa quote-ul "Keep up the good work!".
 * In continuare, isi va scrie in lista de to do task-urile pe care le are in ziua respectiva.
 * Task- urile sunt urmatoarele: homework, learning, groceries, health, exam prep, gestionare bani
 * - homework care are ca atribute " numele materiei", " nr de exercitii", " deadline-ul "
 * - learning care contine atributele " nume materie", " nr capitole parcurse" " nr. capitole totale", "dificultate" ,"deadline"
 * - exam prep contine atat homework cat si learning, in plus se adauga " nr de zile alocate per exam"
 * - groceries este lista de cumparaturi lunara si contine " aliment" " pret " " cantitate" (vom face functii de add produs
 * si remove produs from list"
 * - gestionare bani va consta in " buget initial" o lista de "cheltuieli"- mancare, haine, cadouri etc (cheluieli necesare
 * + cheltuieli extra poftele inimii gen)
 * - health tine evidenta numarului de pahare de apa pe care le a baut Andreea intr-o zi, nr de calorii si cate ore
 *  (minute) de sport a facut.
 * Alte precizari:
 * - la clasele homework, learning si exam prep vom crea niste functii care vor afisa:
 *    --> cat de urgent este task-ul ( ..., urgent)
 *    --> statusul task-ului ( started, in process, completed)
 *    --> daca este facuta treaba sau nu ( done sau missing); daca e done se afiseaza "good job!", iar daca e missing
 *    se afiseaza " try again" si se va crea o functie de " reDo" ????
 *    -->se va crea un meniu in care se afiseaza toate nebuniile din planner

 */
//class User{
//private:
//    std::string name;
//    std::string lastname;
//    int age;
//
//public:
//    User() = default;
//    User(const std::string &name, const std::string &lastname, int age);
//    ~User() = default; //destructor default
//    User(const User& User);
//
//    const std::string &getName() const;
//
//    void setName(const std::string &name);
//
//    const std::string &getLastname() const;
//
//    void setLastname(const std::string &lastname);
//
//    int getAge() const;
//
//    void setAge(int age);
//
//    friend void afisare_user(User user); //functie friend
//
//};
////contructor
//User::User( const std::string &name,const std::string &lastname, int age){
//    this->name = name;
//    this->lastname = lastname;
//    this->age = age;
//}
//// constructorul de copiere
//User::User(const User  &user){
//    this->name = user.name;
//    this->lastname = user.lastname;
//    this->age = user.age;
//}
//
//const std::string &User::getName() const {
//    return name;
//}
//
//void User::setName(const std::string &name) {
//    User::name = name;
//}
//
//const std::string &User::getLastname() const {
//    return lastname;
//}
//
//void User::setLastname(const std::string &lastname) {
//    User::lastname = lastname;
//}
//
//int User::getAge() const {
//   return age;
//}
//
//void User::setAge(int age) {
//    User::age = age;
//}
//
//void afisare_user(User user){
//    std::cout << "Who's the owner? " << "\n"<< user.name << " " << user.lastname << "\n";
//
//}

/*
//crearea listei de To Do
class To Do{
private:
    std::string type; // tema, appointment, events,
    std::string priority;
    std::string deadline;

    //constructor
public:
    To Do(const std::string &type, const std::string &priority, const std::string &deadline){
        this->type = type;
        this->priority = priority;
        this->deadline = deadline;
    }

    const std::string &getType() const {
        return type;
    }

    void setType(const std::string &type) {
        To Do: :type  = type;
    }

    const std::string &getPriority() const {
        return priority;
    }

    void setPriority(const std::string &priority) {
        To Do::priority = priority;
    }

    const std::string &getDeadline() const {
        return deadline;
    }

    void setDeadline(const std::string &deadline) {
        To Do::deadline = deadline;
    }


    friend std::ostream &operator<<(std::ostream &os, const ToDo &aDo);
};

void afisare_task(To Do mytodo){
    std::cout << "Add tasks:" <<"\n";

}


std::ostream &operator<<(std::ostream &os, const To Do &aDo) {
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
    std::vector<To Do> ;

    //To Do task("homework","urgent","today");
    afisare_task(task);





    return 0;
}
 */

int main() {

    //genereaza data curenta
    std::time_t t = std::time(0);
    std::tm* date = std::localtime(&t);
    std::cout << "Today date is: " << (date->tm_year + 1900) << '/'<< (date->tm_mon + 1) << '/'<< date->tm_mday << "\n";


    ToDo todo1("mate", "urgent", "maine");
    todo1.addTask("Homework");
    std::cout << todo1 << "\n";

    Feel *f = new Feel;
    auto *e = new ExamPrep;


    ToDo *td = new ToDo;
    f->read(std::cin);
    td->read(std::cin);
    e->read(std::cin);
    f->print(std::cout);
    td->print(std::cout);
    e->print(std::cout);

    return 0;
}