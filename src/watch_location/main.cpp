#include <iostream>

void f()
{
    int i;
    std::cout << i << std::endl;
}

void g()
{
    int i = 2;
    std::cout << i << std::endl;
}

int main() {
    f();
    g();
    f();
}
