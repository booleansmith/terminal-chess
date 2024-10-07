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
void Board::printBoard(bool isWhitesTurn){
    // Print first line
    for(char c = startCol; c <= endCol; c++){
        std::cout << " |  " << c << " ";
    }
    std::cout << " |\n";

    // print tiles
    int start = isWhitesTurn ? endRow : startRow; // Set starting value
    int end = isWhitesTurn ? startRow-1 : endRow+1;  // Set ending valu(exclusive)
    int step = isWhitesTurn ? -1 : 1;  // Set step based on direction

    for(int row = start; row != end; row+=step){
        printRowDivder();
        printColDivider();

        // Print pieces
        std::cout << row;
        for (char col = startCol; col <= endCol; col++){
            std::cout << "|  ";
            char pair[] = {col,static_cast<char>(row+(int)'0')};
            int idx = convertCoordinatePair(pair);
            if (pieceArray[idx] == nullptr){
                std::cout << " ";
            } else {
                pieceArray[idx]->print();
            }
            // std::cout << idx;
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
    for (char i = startCol; i <= endCol; i++){
        std::cout << "     |";
    }
    std::cout << std::endl;
}

int Board::convertCoordinatePair(char * cp){
    // if(strlen(cp) != 2){ // TODO: Figure out how many elements should be in this array
    //     std::cout << strlen(cp) << std::endl;
    //     throw std::runtime_error("Coordinate pair must be 2, because its a pair...");
    // }
    int col = (int)cp[0]-startCol;
    int row = cp[1]-'0';
    return (row-1)*8+col;
}

void Board::move(char * mv, int length, bool isWhitesturn){
    return;
}

