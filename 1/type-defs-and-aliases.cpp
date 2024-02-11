#include <iostream>
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;
int main() {
    text_t firstName = "iliyan";
    number_t age = 26;
    std::cout << firstName << '\n';
    std::cout << age;
    return 0;
}