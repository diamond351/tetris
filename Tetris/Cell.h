#ifndef CELL_H
#define CELL_H
#include "ABlock.h"

class Cell {
    Coordinate coord;
    char piece;
public:
    Cell();
    Coordinate getCoord();
    void setCoord(Coordinate c);
    void setPiece(char c);
    char getPiece();
    void textRender();
    ~Cell();
};

#endif
