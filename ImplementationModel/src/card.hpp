//card.hpp
//This class represents the card in the flashcard game
//12/21/2016

#ifndef CARD_HPP
#define CARD_HPP

#include "cardMaterial.hpp"
#include "log.hpp"

class Card{

public:
	Card();
	Card(Term, Definition);
	~Card(){}

	void setID(int);
	void setTerm(Term);
	void setDefinition(Definition);

	//TODO: Still need to add the log feature into this
	//TODO: Still need to design how the database will be stored

	int getID();
	Term getTerm();
	Definition getDefinition();


private:

	int id;
	Term term;
	Definition def;

};


#endif