#include <iostream>
#include <array>

int global;

void f()
{
    global = 42;
}

void g()
{
    std::array<int,3> values;
    values[0] = 1;
    values[1] = 2;
    values[2] = 3;
}

int main() {
    std::cout << global << std::endl;
    f();
    std::cout << global << std::endl;
    g();
}
