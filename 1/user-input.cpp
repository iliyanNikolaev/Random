#include <iostream>
// cout << (insertion operator)
// cin >> (extraction operator)
int main() {
    std::string name;
    int age;
    std::cout << "What's your age?: ";
    std::cin >> age;
    std::cout << "What's your full name?: ";
    // std::cin >> name;
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello " << name << "!" << "\n";
    std::cout << "Your age is " << age << " yo.";
    return 0;
}