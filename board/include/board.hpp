#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include <memory>
#include <vector>

#include "piece.hpp"


class Board{
    private:
        int nRows = 8;
        int nCols = 8;
        std::vector<std::unique_ptr<Piece> > pieceArray;
    public:
        Board();
        void printBoard();
        void printRowDivder();
        void printColDivider();

};

#endif