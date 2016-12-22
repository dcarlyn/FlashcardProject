//cardMaterial.cpp
//12/21/2016
//This class contains all the material that a card contains
//It will contain two inherited classes for this problem

//TODO[CARLYN]: PROBLEM WITH Operator=

#include "cardMaterial.hpp"

CardMaterial::CardMaterial(){
	IMG = "";
	text = "";
}

CardMaterial::~CardMaterial(){}

void CardMaterial::setText(std::string txt){
	text = txt;
}

void CardMaterial::setIMG(std::string img){
	IMG = img;
}

std::string CardMaterial::getText() const{
	return text;
}

std::string CardMaterial::getIMG() const{
	return IMG;
}

//==========================================================

Term::Term(){
	IMG = "";
	text = "";	
}

Term::Term(std::string txt){
	text = txt;
}

Term::Term(std::string txt, std::string img){
	text = txt;
	IMG = img;
}

void Term::setText(std::string txt){
	text = txt;
}

void Term::setIMG(std::string img){
	IMG = img;
}

std::string Term::getText() const{
	return text;
}

std::string Term::getIMG() const{
	return IMG;
}

Term Term::operator=(const CardMaterial& cm){
	text = cm.getText();
	IMG = cm.getIMG();

	return *this;
}

//===========================================================

Definition::Definition(){
	IMG = "";
	text = "";
}

Definition::Definition(std::string txt){
	text = txt;
}

Definition::Definition(std::string txt, std::string img){
	text = txt;
	IMG = img;
}

void Definition::setText(std::string txt){
	text = txt;
}

void Definition::setIMG(std::string img){
	IMG = img;
}

std::string Definition::getText() const{
	return text;
}

std::string Definition::getIMG() const{
	return IMG;
}

Definition Definition::operator=(const CardMaterial& cm){
	text = cm.getText();
	IMG = cm.getIMG();

	return *this;
}
