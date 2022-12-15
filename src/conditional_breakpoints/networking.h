#pragma once

#include <array>
#include <cstdint>

template<typename Handler>
void read_loop(Handler handler)
{
    for (int i = 1; i < 30; ++i)
    {
        std::array<uint8_t, 4> packet{uint8_t{0},uint8_t{0},uint8_t{0},uint8_t{0}};
        if (i % 20 == 0)
            packet[0] = uint8_t{32};
        else if (i % 2 == 0)
            packet[0] = uint8_t{1};
        handler(packet);
    }
}
