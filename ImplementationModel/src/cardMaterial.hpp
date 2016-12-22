//cardMaterial.hpp
//12/21/2016
//This class contains all the material that a card contains
//It will contain two inherited classes for this problem

#ifndef CARDMATERIAL_HPP
#define CARDMATERIAL_HPP

#include <string>

class CardMaterial{
public:
	CardMaterial();
	virtual ~CardMaterial();

	virtual void setText(std::string);
	virtual void setIMG(std::string);
	virtual std::string getText() const;
	virtual std::string getIMG() const;	

protected:
	std::string IMG;
	std::string text;

private:

};

class Term: public CardMaterial{
public:
	Term();
	Term(std::string); //Text
	Term(std::string, std::string);
	~Term() {}

	void setText(std::string);
	void setIMG(std::string);
	std::string getText() const;
	std::string getIMG() const;

	Term operator=(const CardMaterial&);

protected:

private:

};

class Definition: public CardMaterial{
public:
	Definition();
	Definition(std::string); //Text
	Definition(std::string, std::string);
	~Definition(){}

	void setText(std::string);
	void setIMG(std::string);
	std::string getText() const;
	std::string getIMG() const;

	Definition operator=(const CardMaterial&);

protected:

private:

};

#endif