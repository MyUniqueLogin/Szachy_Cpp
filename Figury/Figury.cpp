/*
 * Figury.cpp
 *
 *  Created on: 29.04.2018
 *      Author: Mariusz
 */

#include "Figury.h"

Figury::Figury(int x, int y, int team, int type)
	: _x(x), _y(y), _team(team), _type(type), _elongation_move(8, 0)
{
	//--podstawowe ruchy
	switch(type)
	case 1:	_probable_move = 0b11111111;	break;
	case 2:	_probable_move = 0b11111111;	break;
	case 3:	_probable_move = 0b1010101;		break;
	case 4:	_probable_move = 0b10101010;	break;
	case 5:	_probable_move = 0b111111111;	break;
	case 6:	_probable_move = 0b00000001;	break;
}

void Figury::calc_possible_move(vector<vector<Figury> > _plansza)
{
	if(_x==0 || _y==0) return;
	_possible_move = 0b10000000000; //testowe
}

/*
 *
 * 100000000 	Skoczek
 *
 * 10000000		NW
 * 1000000		W
 * 100000		SW
 * 10000		S
 * 1000			SE
 * 100			E
 * 10 			NE
 * 1 			N
 *
 * 1 Krol
 * 2 Hetman
 * 3 Wieza
 * 4 Goniec
 * 5 Skoczek
 * 6 Pion
 *
 * \ | /
 * - F -
 * / | \
 *
 *  x|x
 * x | x
 * |-S-|
 * x | x
 *  x|x
 *
 */

