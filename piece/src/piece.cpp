#include "piece.hpp"

void Piece::print(){
    std::cout << static_cast<char>(printChar + isBlackTeam*32);
}
