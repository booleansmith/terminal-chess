#include "board.hpp"

Board::Board(){
    pieces = new char[64];
    for (int i = 0; i < 64; i++){
        pieces[i] = ' ';
    }
    pieces[0] = 'r';
    pieces[1] = 'n';
    pieces[2] = 'b';
    pieces[3] = 'q';
    pieces[4] = 'k';
    pieces[5] = 'b';
    pieces[6] = 'n';
    pieces[7] = 'r';
    for(int i = 8; i < 16; i++){
        pieces[i] = 'p';
    }
    pieces[56] = 'R';
    pieces[57] = 'N';
    pieces[58] = 'B';
    pieces[59] = 'Q';
    pieces[60] = 'K';
    pieces[61] = 'B';
    pieces[62] = 'N';
    pieces[63] = 'R';
    for(int i = 48; i < 56; i++){
        pieces[i] = 'P';
    }

}
void Board::printBoard(){
    std::cout << "Printing the board here\n";
    // Print first line
    for(char c = 'a'; c <= 'h'; c++){
        std::cout << " |  " << c << " ";
    }
    std::cout << " |\n";

    // print tiles
    for(int row = 0; row < nRows; row++){
        printRowDivder();
        printColDivider();

        // Print pieces
        std::cout << 8-row;
        for (int col = 0; col < nCols; col++){
            std::cout << "|  " << pieces[nRows*row + col] << "  ";
        }
        std::cout << "|\n";

        printColDivider();
    }
    printRowDivder();
}


void Board::printRowDivder(){
    for (int i = 0; i < 50; i++){ // todo: use variable
        std::cout << "-";
    }
    std::cout << std::endl;
}
void Board::printColDivider(){
    std::cout << " |";
    for (int i = 0; i < nCols; i++){
        std::cout << "     |";
    }
    std::cout << std::endl;
}

