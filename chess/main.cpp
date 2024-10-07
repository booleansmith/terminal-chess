#include <iostream>
#include "board.hpp"


int main(){
    std::cout << "Welcome to terminal chess\n";
    Board myBoard;
    std::cout << "White teams' perspective\n";
    myBoard.printBoard(1);
    std::cout << "Black teams' perspective\n";
    myBoard.printBoard(0);
}