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
    // print tiles
    int start = isWhitesTurn ? endRow : startRow; // Set starting value
    int end = isWhitesTurn ? startRow-1 : endRow+1;  // Set ending valu(exclusive)
    int step = isWhitesTurn ? -1 : 1;  // Set step based on direction
    
    char charArray[] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    
    // Print the header line
    printLine(charArray,false,false);

    for(int row = start; row != end; row+=step){ 
        charArray[0] = '0' + row;    
        for (int col = startCol; col <= endCol; col++){
            int idx = convertCoordinatePair(row,col);
            if (pieceArray[idx] == nullptr){
                charArray[col] = ' ';
            } else {
                charArray[col] = pieceArray[idx]->getChar();
            }
        }
        printLine(charArray,true,row%2);
    }
}

void Board::printLine(char* charArray, bool print3, bool isOddRow){
    int offset = 40;
    int colorCode;
    if(print3){
        // Print the first line
        colorCode = offset + isOddRow * 7;
        std::cout << "\033[" << colorCode << "m   ";
        for (int col = 1; col < 9; col++){
            colorCode = offset + (col + isOddRow) % 2 * 7;
            std::cout << "\033[" << colorCode << "m       ";
        }
        std::cout << "\033[0m\n";
    }

    // Print the middle line
    colorCode = offset + isOddRow * 7;
    std::cout << "\033[" << colorCode << "m " << charArray[0] << " ";
    for (int col = 1; col < 9; col++){
        colorCode = offset + (col + isOddRow) % 2 * 7;
        std::cout << "\033[" << colorCode << "m   " << charArray[col] << "   ";
    }   
    std::cout << "\033[0m\n";

    if(print3){
        // print the last line
        colorCode = offset + isOddRow * 7;
        std::cout << "\033[" << colorCode << "m   ";
        for (int col = 1; col < 9; col++){
            colorCode = offset + (col + isOddRow) % 2 * 7;
            std::cout << "\033[" << colorCode << "m       ";
        }        
        std::cout << "\033[0m\n";
    }
}



int Board::convertCoordinatePair(int row, int col){
    return (row-1)*8+col-1;
}

void Board::move(char * mv, int length, bool isWhitesturn){
    return;
}

