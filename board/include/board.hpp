#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include <memory>
#include <vector>
#include <cstring>
#include <stdexcept>

#include "piece.hpp"

class Board{
    private:
        char startCol = 1;
        char endCol = 8;
        int startRow = 1;
        int endRow = 8;
        std::vector<std::unique_ptr<Piece> > pieceArray;
        int convertCoordinatePair(int row, int col);
        void printLine(char* characterArray, bool print3, bool isOddRow);

    public:
        Board();
        void printBoard(bool isWhitesTurn);
        void move(char * mv, int length, bool isWhitesturn);
};

#endif