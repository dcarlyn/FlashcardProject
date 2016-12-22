//log.cpp
//12/19/2016

#include "log.hpp"

//Initial Initialization

Log* Log::myUniqueLogInstance = nullptr;


//set and get functions
void Log::setFolderID(int id){
	folderID = id;
}

void Log::setListID(int id){
	listID = id;
}

void Log::setCardID(int id){
	cardID = id;
}

void Log::setFolderName(std::string name){
	folderName = name;
}

void Log::setListName(std::string name){
	listName = name;
}

void Log::setCardName(std::string name){
	cardName = name;
}

void Log::setTermText(std::string txt){
	termText = txt;
}

void Log::setDefText(std::string txt){
	defText = txt;
}

void Log::setTermIMG(std::string img){
	termIMG = img;
}

void Log::setDefIMG(std::string img){
	defIMG = img;
}

void Log::setStatus(Status s){
	type = s;
}

int Log::getFolderID(){
	return folderID;
}

int Log::getListID(){
	return listID;
}

int Log::getCardID(){
	return cardID;
}

std::string Log::getFolderName(){
	return folderName;
}

std::string Log::getListName(){
	return listName;
}

std::string Log::getCardName(){
	return cardName;
}

std::string Log::getTermText(){
	return termText;
}

std::string Log::getDefText(){
	return defText;
}

std::string Log::getTermIMG(){
	return termIMG;
}

std::string Log::getDefIMG(){
	return defIMG;
}

Status Log::getStatus(){
	return type;
}