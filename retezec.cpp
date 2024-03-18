#include <cstring>
#include "retezec.h"

Retezec::Retezec() {
    length = 0;
    text = new char[1];
    text[0] = '\0';
}

Retezec::Retezec(const char *str) {
    length = strlen(str);
    text = new char[length + 1];
    strcpy(text, str);
}

Retezec::Retezec(const Retezec &other) {
    length = other.length;
    text = new char[length + 1];
    strcpy(text, other.text);
}

Retezec::~Retezec() {
    delete[] text;
}

const char* Retezec::obsah() const {
    return text;
}

void Retezec::setRetezec(const char *str) {
    delete[] text;
    length = strlen(str);
    text = new char[length + 1];
    strcpy(text, str);
}

int Retezec::delka() const {
    return length;
}

char& Retezec::operator[](int index) {
    return text[index];
}

Retezec& Retezec::operator=(const Retezec &other) {
    if (this != &other) {
        delete[] text;
        length = other.length;
        text = new char[length + 1];
        strcpy(text, other.text);
    }
    return *this;
}

Retezec& Retezec::operator+=(const Retezec &other) {
    char *temp = new char[length + other.length + 1];
    strcpy(temp, text);
    strcat(temp, other.text);
    delete[] text;
    text = temp;
    length += other.length;
    return *this;
}

Retezec operator+(const Retezec &lhs, const Retezec &rhs) {
    Retezec result(lhs);
    result += rhs;
    return result;
}
