
#ifndef PAWN_H_
#define PAWN_H_

#include "Piece.h"

class Pawn: public Piece {
    bool enPassant; //flag if liable of enpassant

public:
	Pawn(player p);
    bool isValid(Move m);
    bool getEnPassant();
	void setEnPassant();
    void removeEnPassant();
};

#endif /* PAWN_H_ */
