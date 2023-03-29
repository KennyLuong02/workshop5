#include <string>
#include "Musician.h"

using namespace std;

Musician::Musician() {
     inst = "null";
     exp = 0;
};

Musician::Musician(string instrument, int experience) {
     inst = instrument;
     exp = experience;
};

string Musician::get_instrument() {
    return inst;
};

int Musician::get_experience() {
    return exp;
};