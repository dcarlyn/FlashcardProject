//log.hpp
//12/19/20
//This is a singleton class to only have one instance

#ifndef LOG_HPP
#define LOG_HPP

#include <string>

enum Status{
	S_MAKE_FOLDER,
	S_MAKE_LIST,
	S_MAKE_CARD,
	S_EDIT_FOLDER,
	S_EDIT_LIST,
	S_EDIT_CARD,
	S_DELETE_FOLDER,
	S_DELETE_LIST,
	S_DELETE_CARD,
	S_DEFAULT
};

class Log{
public:

	//Get Unique Instance
	static Log* getInstance(){

		if(myUniqueLogInstance == nullptr)
			myUniqueLogInstance = new Log();

		return myUniqueLogInstance;
	}

	//Destroy Unique Instance
	static void destroyInstance(){
		delete myUniqueLogInstance;

		myUniqueLogInstance = nullptr;
	}

	//set and get functions
	void setFolderID(int);
	void setListID(int);
	void setCardID(int);
	void setFolderName(std::string);
	void setListName(std::string);
	void setCardName(std::string);
	void setTermText(std::string);
	void setDefText(std::string);
	void setTermIMG(std::string);
	void setDefIMG(std::string);
	void setStatus(Status);

	int getFolderID();
	int getListID();
	int getCardID();
	std::string getFolderName();
	std::string getListName();
	std::string getCardName();
	std::string getTermText();
	std::string getDefText();
	std::string getTermIMG();
	std::string getDefIMG();
	Status getStatus();

private:

	//Constructor and Destructor in private to prevent programmer from calling 
	Log(): folderID(0), listID(0), cardID(0), folderName(""), listName(""), cardName(""), termText(""), defText(""), termIMG(""), defIMG(""){
		type = S_DEFAULT;
	}
	~Log(){}

	static Log* myUniqueLogInstance;

	//Member variables
	int folderID, listID, cardID;
	std::string folderName, listName, cardName;
	std::string termText, defText;
	std::string termIMG, defIMG;
	Status type;
};


#endif