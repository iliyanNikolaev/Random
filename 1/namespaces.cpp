#include <iostream>
namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}
int main()
{
    // using namespace first;
    // using namespace second;
    // int x = 0;
    // std::string str = "testtext";
    // std::cout << x;
    // std::cout << first::x << '\n';
    // std::cout << second::x << '\n';
    using namespace std;
    string str = "testtext";
    cout << str;
    return 0;
}