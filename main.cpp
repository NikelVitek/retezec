#include <iostream>
#include "retezec.h"

int main() {
    // Testování funkcionality třídy Retezec
    Retezec retezec1;
    Retezec retezec2("svete!");
    std::cout << "retezec1: " << retezec1.obsah() << std::endl;
    std::cout << "retezec2: " << retezec2.obsah() << std::endl;
    Retezec retezec3 = retezec1 + retezec2;
    std::cout << "retezec3 (retezec1 + retezec2): " << retezec3.obsah() << std::endl;

    return 0;
}
