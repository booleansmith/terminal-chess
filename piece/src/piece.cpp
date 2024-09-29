#include "piece.hpp"

void Piece::print(){
    std::cout << static_cast<char>(printChar + isBlackTeam*32);
}

// void King::print(){
//     std::cout << "K";
// }

// void Queen::print(){
//     std::cout << "Q";
// }

// void Bishop::print(){
//     std::cout << 66 + isBlackTeam*32;
// }

// void Knight::print(){
//     std::cout << "N";
// }

// void Rook::print(){
//     std::cout << "R";
// }

// void Pawn::print(){
//     std::cout << "P";
// }