//log.cpp
//12/19/2016

#include "log.hpp"

//set and get functions
void Log::setFolderID(int);
void Log::setListID(int);
void Log::setCardID(int);
void Log::setFolderName(std::string);
void Log::setListName(std::string);
void Log::setCardName(std::string);
void Log::setTermText(std::string);
void Log::setDefText(std::string);
void Log::setTermIMG(std::string);
void Log::setDefIMG(std::string);
void Log::setStatus(Status);

int Log::getFolderID();
int Log::getListID();
int Log::getCardID();
std::string Log::getFolderName();
std::string Log::getListName();
std::string Log::getCardName();
std::string Log::getTermText();
std::string Log::getDefText();
std::string Log::getTermIMG();
std::string Log::getDefIMG();
Status Log::getStatus();