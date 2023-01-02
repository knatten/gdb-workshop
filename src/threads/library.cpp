#include <random>

int read_important_value()
{
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(0, 10);
    return uniform_dist(e1);
}

bool go_via_g()
{
    static int count = 0;
    return count++ > 1;
}
