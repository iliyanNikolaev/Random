#include <iostream>

int main() {
    // implicit conversion
    char x = 100;
    // std::cout << x;
    // d => 100 in ASCII

    // explicit conversion
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score << "%";
    return 0;
}