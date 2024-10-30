#ifndef PIECE_HPP
#define PIECE_HPP

#include <iostream>

class Piece{
    private:
        int location;
        std::string pieceName;

    protected:
        char printChar;
        bool isBlackTeam;
    public:
        Piece(){};
        Piece(bool isBlackTeam, char printChar):isBlackTeam(isBlackTeam),printChar(printChar){};
        char getChar(){return printChar+ isBlackTeam*32;}
        void print();    
};

class King: public Piece{
    private:

    public:
        King(bool isBlackTeam): Piece(isBlackTeam,'K'){};
};

class Queen: public Piece{
    private:

    public:
        Queen(bool isBlackTeam): Piece(isBlackTeam,'Q'){};
};

class Bishop: public Piece{
    private:
        
    public:
        Bishop(bool isBlackTeam): Piece(isBlackTeam,'B'){};
};

class Knight: public Piece{
    private:
        
    public:
        Knight(bool isBlackTeam): Piece(isBlackTeam,'N'){};
};

class Rook: public Piece{
    private:
        
    public:
        Rook(bool isBlackTeam): Piece(isBlackTeam,'R'){};
};

class Pawn: public Piece{
    private:
        
    public:
        Pawn(bool isBlackTeam): Piece(isBlackTeam,'P'){};
};


#endif