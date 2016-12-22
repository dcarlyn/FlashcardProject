//main.cpp
//David Carlyn
//12/21/2016

#include <iostream>
#include "card.hpp"

void foo(){

	std::cout << Log::getInstance()->getFolderID() << std::endl;
	Log::getInstance()->setFolderID(3);
}

CardMaterial bar(){
	Term term2;

	return term2;
}

CardMaterial bar2(){
	Definition def2;

	return def2;
}

int main(){
	std::cout << "Hello, David" << std::endl;

	Log::getInstance()->setFolderID(5);
	foo();
	std::cout << Log::getInstance()->getFolderID() << std::endl;

//	CardMaterial material;

	Term term1;
	Definition def1;

	term1 = bar();
	def1 = bar2();

	term1.setText("Text");
	def1.setText("Def");

	std::cout << term1.getText() << std::endl;
	std::cout << def1.getText() << std::endl;

	Card c;
	Card d(term1, def1);

	c.setTerm(term1);
	c.setDefinition(def1);
	c.setID(1);
	d.setID(2);

	std::cout << "Card ID: " << d.getID() << std::endl;
	std::cout << "Term Text: " << d.getTerm().getText() << std::endl;
	std::cout << "Definition Text: " << d.getDefinition().getText() << std::endl;


	return 0;
}