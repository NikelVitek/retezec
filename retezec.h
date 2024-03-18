#ifndef RETEZEC_H
#define RETEZEC_H

class Retezec {
private:
    char *text; // Dynamicky alokovaný řetězec
    int length; // Délka řetězce

public:
    Retezec();
    Retezec(const char *str);
    Retezec(const Retezec &other);
    ~Retezec();

    const char* obsah() const;
    void setRetezec(const char *str);
    int delka() const;
    char& operator[](int index);
    Retezec& operator=(const Retezec &other);
    Retezec& operator+=(const Retezec &other);
    friend Retezec operator+(const Retezec &lhs, const Retezec &rhs);
};

#endif
