
#include "../headers/Feel.h"

Feel::Feel(int &_stare) {
    this->stare = _stare;

}

std::istream &operator>>(std::istream &in, Feel &feel) {
    feel.read( in);

    return in;
}

std::ostream &operator<<(std::ostream &out, const Feel &feel) {
    feel.print( out);

    return out;
}

void Feel::read(std::istream &in) {
    std::cout << "Rate how you feeling today:" << "\n";
    std::cout << " Today I am feeling : " << "\n";
    in >> stare;

    if ( stare < 5 ){
        std::cout << " https://www.youtube.com/watch?v=iOa7uE23qc4&list=PLVOXUojQhsNoPKAvvb7mWzscvQtapR7MG \n";
    } else {
        if (stare > 5){
            std::cout << " Keep up the good work!! \n";
        }
    }

}

void Feel::print(std::ostream &out) const {
    out << "Rate how you feeling today: " << "\n";
    out << "Today I am feeling: " <<  stare << "\n";

}
