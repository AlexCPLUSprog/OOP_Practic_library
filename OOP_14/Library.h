#pragma once
#include <iostream>
#include <map>
#include "ILybrary.h"
#include "Books.h"
#include "Users.h"
#include <queue>

class Library : public ILybrary
{
public:
	Library();
	void addUser(const Users& user) override;
	void addBooks(const Books& book) override;
	void changeBooks(int id, const std::string& newContent) override;
	void deleteBooks(int id) override;
	
	bool searchBook(const std::string& title);
	void showBooks();
	void Pop();

private:
	std::map<int, Books> _book;	
	std::queue <Users> _user;	
	int _id;
};

