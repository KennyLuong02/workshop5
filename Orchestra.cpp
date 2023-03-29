#include <string>
#include "Musician.h"
#include "Orchestra.h"

using namespace std;

Orchestra::Orchestra() {
    size = 0;
    current_size = 0;
};

Orchestra::Orchestra(int size) {
    this->size = size;
    current_size = 0;
    members = new Musician[size];
};

int Orchestra::get_current_number_of_members() {
    return current_size;
};

bool Orchestra::has_instrument(string instrument) {
    bool asc = false;

    for (int i = 0; i < size; i++) {
        if (members[i].get_instrument() == instrument) {
            asc = true;
            return asc;
        } else {
            asc = false;
        }
    }

    return asc;
};

Musician * Orchestra::get_members() {
    return members;
};

bool Orchestra::add_musician(Musician new_musician) {
    bool asc = false;
    // current_size;

    if (current_size < size) {
        members[current_size] = new_musician;
        current_size++;
        return true;
    } else {
        return false;
    }
};

Orchestra::~Orchestra() {
    delete[] members;
};