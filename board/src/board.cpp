#include "board.hpp"

Board::Board(){
    for (int i = 0; i < 64; i++){
        pieceArray.emplace_back(nullptr);
    }
    pieceArray[0] = std::make_unique<Rook>(0);
    pieceArray[1] = std::make_unique<Knight>(0);
    pieceArray[2] = std::make_unique<Bishop>(0);
    pieceArray[3] = std::make_unique<Queen>(0);
    pieceArray[4] = std::make_unique<King>(0);
    pieceArray[5] = std::make_unique<Bishop>(0);
    pieceArray[6] = std::make_unique<Knight>(0);
    pieceArray[7] = std::make_unique<Rook>(0);

    for(int i = 8; i < 16; i++){
        pieceArray[i] = std::make_unique<Pawn>(0);
    }

    pieceArray[56] = std::make_unique<Rook>(1);
    pieceArray[57] = std::make_unique<Knight>(1);
    pieceArray[58] = std::make_unique<Bishop>(1);
    pieceArray[59] = std::make_unique<Queen>(1);
    pieceArray[60] = std::make_unique<King>(1);
    pieceArray[61] = std::make_unique<Bishop>(1);
    pieceArray[62] = std::make_unique<Knight>(1);
    pieceArray[63] = std::make_unique<Rook>(1);

    for(int i = 48; i < 56; i++){
        pieceArray[i] = std::make_unique<Pawn>(1);
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
            std::cout << "|  ";
            if (pieceArray[nRows*row + col] == nullptr){
                std::cout << " ";
            } else {
                pieceArray[nRows*row + col]->print();
            }
            
            std::cout << "  ";
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

