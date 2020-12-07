#ifndef BG_H
#define BG_H
#include <vector>
#include <fstream>
#include <memory>
#include <string>
#include "ABlock.h"

//blockgenerator.h
class BlockGenerator {
    int level;
    std::string file;
    bool random;
    std::shared_ptr<AbstractBlock> nextBlock;
    std::ifstream myFile;
public:
    BlockGenerator(int level, int s, std::string fileName, bool random);
    bool isRandom();
    void setRandom(bool state);
    AbstractBlock next();
    std::shared_ptr<AbstractBlock> getNext();       //returns current next block and makes a new one
    std::shared_ptr<AbstractBlock> makeBlock();     //makes a block based on level, and randomness
    std::shared_ptr<AbstractBlock> getBlock(std::string blk);   //makes a block using level and string
    void update(int lv, std::string fl, bool isRand);   //tells BlockGenerator changes affecting blocks
    std::shared_ptr<AbstractBlock> reopen();        //closes the current sequence file and reopens,
                                                    //returning the next block
};

#endif
