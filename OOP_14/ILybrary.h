#pragma once

#include "Books.h"
#include "Users.h"
#include "Library.h"

class ILybrary
{
public:
	virtual ~ILybrary() {}
	virtual void addUser(const Users& user) = 0;
	virtual void addBooks(const Books& book) = 0;
	virtual void changeBooks(int id, const std::string& newContent) = 0;
	virtual void deleteBooks(int id) = 0;
};

