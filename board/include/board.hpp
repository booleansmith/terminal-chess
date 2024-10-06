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
        char startCol = 'a';
        char endCol = 'h';
        int startRow = 1;
        int endRow = 8;
        std::vector<std::unique_ptr<Piece> > pieceArray;
        int convertCoordinatePair(char * cp);

    public:
        Board();
        void printBoard(bool isWhitesTurn);
        void printRowDivder();
        void printColDivider();
        void move(char * mv, int length, bool isWhitesturn);
};

#endif