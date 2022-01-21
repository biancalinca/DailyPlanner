
#ifndef DAILYPLANNER_FEEL_H
#define DAILYPLANNER_FEEL_H
#include <iostream>

class Feel {
private:
    int stare{};

public:
    Feel() = default;
    ~Feel() = default; // virtual pt ca o sa avem o mostenire in diamant
    Feel(int &_stare);
    Feel(const Feel&) = default;
    Feel &operator=(const Feel&) = default;

    friend std::istream& operator>>(std::istream& in, Feel& feel); // citire
    friend std::ostream& operator<<(std::ostream& out, const Feel& feel);

    void read(std::istream& in);
    void print(std::ostream& out) const ; // const pt a
};

#endif //DAILYPLANNER_FEEL_H
