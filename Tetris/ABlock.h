#ifndef ABLOCK_H
#define ABLOCK_H

#include <vector>
#include "Coordinate.h"

class AbstractBlock {
protected:
    char piece;
    int level;
    std::vector<Coordinate> coords;
public:
    char getPiece();
    std::vector<Coordinate> getCoords();
    void setCoords(std::vector<Coordinate> c);	
    Coordinate getBotLeft(const std::vector<Coordinate> coor);	//Used to rotate the block
    Coordinate getTopLeft(const std::vector<Coordinate> coor);	
    void left();													
    void right();
    void down();
    void rotateCW();
    void rotateCCW();
    void renderBlock();											//Used to display next block
    int getLevel();
    AbstractBlock &operator=(const AbstractBlock &other);
    virtual ~AbstractBlock();
};

#endif

