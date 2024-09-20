#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>


class Board{
    private:
        int nRows = 8;
        int nCols = 8;
        char* pieces;
    public:
        Board();
        void printBoard();
        void printRowDivder();
        void printColDivider();

};

#endif