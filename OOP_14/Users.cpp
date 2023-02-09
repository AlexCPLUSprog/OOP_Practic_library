#include "Users.h"


Users::Users(const std::string& name): _name(name), _id(ST_ID_USER) { 
	ST_ID_USER++; 
}

const std::string& Users::getName() const {
	return _name;
}

void Users::bookWanted(const Books& book) {
	_bookWanted.push_back(book);
}

const int Users::getId() const {
	return _id;
}

const std::vector<Books>& Users::getBookWanted() const
{
	return _bookWanted;
}

