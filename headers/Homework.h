#ifndef DAILYPLANNER_HOMEWORK_H
#define DAILYPLANNER_HOMEWORK_H


#include <string>

class Homework {
protected:
    std::string numeMaterie;
    int numarExercitii{};


public:
    Homework() = default;
    virtual ~Homework() = default; // virtual pt ca o sa avem o mostenire in diamant
    Homework(const std::string &_numeMaterie, int &_numarExercitii);
    Homework(const Homework&) = default;
    Homework &operator=(const Homework&) = default;

    //facem operatorii de citire si afisare

    friend std::istream& operator>>(std::istream& in, Homework& homework); // citire
    friend std::ostream& operator<<(std::ostream& out, const Homework& homework); // afisare

    //facem functiile de citire si afisare


    virtual void read(std::istream& in);

    virtual void print(std::ostream& out) const; // const pt a

};

#endif //DAILYPLANNER_HOMEWORK_H
