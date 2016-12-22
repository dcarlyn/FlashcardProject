//card.cpp
//Class for representing the card in flashcards
//12/21/16

#include "card.hpp"

Card::Card(){}

Card::Card(Term t, Definition d){
	term = t;
	def = d;
}

void Card::setID(int ID){
	id = ID;
}

void Card::setTerm(Term t){
	term = t;
}

void Card::setDefinition(Definition d){
	def = d;
}

int Card::getID(){
	return id;
}

Term Card::getTerm(){
	return term;
}

Definition Card::getDefinition(){
	return def;
}