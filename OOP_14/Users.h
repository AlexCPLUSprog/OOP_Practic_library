#pragma once
#include <vector>
#include <string>
#include "Books.h"
static int ST_ID_USER;
class Users
{
public:
	Users(const std::string& name);
	const std::string& getName() const;	
	void bookWanted(const Books& book);
	const int getId()const;
	const std::vector<Books>& getBookWanted()const;

private:
	
	std::string _name;
	std::vector<Books> _bookWanted;
	int _id;
};

