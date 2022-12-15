#include "networking.h"

#include <array>
#include <cstdint>
#include <iostream>

enum class PacketType : uint8_t
{
    tea, coffee
};

void receive_packet(const std::array<uint8_t, 4> & header)
{
    PacketType packetType{static_cast<PacketType>(header[0])};
}

int main() {
    read_loop(receive_packet);
}
