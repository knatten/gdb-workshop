#include <cassert>
#include <iostream>
#include <string>
#include <vector>

struct Kid
{
    std::string name;
    int gifts;
};

int giftsToMake(const std::vector<Kid>& kids)
{
    int total = kids[0].gifts;
    for(int i = 1 ; i < kids.size() ; ++ i)
    {
        total += kids[i].gifts;
    }
    return total;
}

int main() {
    assert(giftsToMake({{"alice", 1}}) == 1);
    assert(giftsToMake({{"bob", 0}}) == 0);
    assert(giftsToMake({{"alice", 1}, {"bob", 3}}) == 4);
    assert(giftsToMake({{"alice", 2}, {"bob", -1}}) == 1);
    assert(giftsToMake({}) == 0);
}
