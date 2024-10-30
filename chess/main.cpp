#include <iostream>
#include "board.hpp"
#include <locale>  // For std::locale and UTF-8 support
#include <codecvt> // For std::wstring_convert


int main(){

    const int boardSize = 8;


    for (int row = 0; row < boardSize; ++row) {
        for (int col = 0; col < boardSize; ++col) {
            // Use a conditional to alternate colors like a chessboard pattern
            if ((row + col) % 2 == 0) {
                std::cout << "\033[47m b ";  // White background
            } else {
                std::cout << "\033[40m r ";  // Black background
            }
        }
        // Reset color after each row and move to the next line
        std::cout << "\033[0m\n";
    }

    std::cout << "Welcome to terminal chess\n";
    Board myBoard;
    std::cout << "White teams' perspective\n";
    // myBoard.printBoard(1);
    std::cout << "Black teams' perspective\n";
    myBoard.printBoard(0);
}