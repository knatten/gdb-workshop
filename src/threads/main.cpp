#include <thread>
#include <vector>

extern int read_important_value();
extern bool go_via_g();

void f()
{
    auto important_value = read_important_value();
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
        if(go_via_g()) {
            threads.emplace_back(g);
        }
        else
        {
            threads.emplace_back(f);
        }
    }
    for (auto& thread: threads)
    {
        thread.join();
    }
}
