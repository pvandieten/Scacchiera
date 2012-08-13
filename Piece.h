/*
 * Piece.h
 *
 *  Created on: 16/giu/2012
 *      Author: massimiliano
 */

#ifndef PIECE_H_
#define PIECE_H_

#include "structures.h"

class Piece {
    
protected:
    player pla;
    char type;
    // Position pos;
    bool hasMoved;
    
public:
	Piece();
	virtual ~Piece();
	player getPlayer();
	char getType();
	// int moveTo(Position p);
    virtual bool isValid(Move m);
};

#endif /* PIECE_H_ */
