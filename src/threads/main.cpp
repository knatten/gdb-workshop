#include <iostream>
#include <random>
#include <thread>
#include <vector>

bool random_bool()
{
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(0, 1);
    return static_cast<bool>(uniform_dist(e1));
}

void f()
{
    bool value = random_bool();
    std::this_thread::sleep_for(std::chrono::hours{1});
}

void g()
{
    f();
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 0; i < 3; ++i)
    {
        threads.emplace_back([]()
            {
                if (random_bool())
                    f();
                g();
            }
        );
    }
    for (auto& thread: threads)
    {
        thread.join();
    }
}
