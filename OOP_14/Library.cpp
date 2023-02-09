#include "Library.h"

Library::Library() :_id(1) {}

void Library::addUser(const Users& user) {
	_user.push(user);	
	std::cout << "ѕользователь добавлен" << '\n';	
}

void Library::addBooks(const Books& book) {	
	const auto& [it, isInsert] = _book.insert({ _id, book });
	if (!isInsert)
		std::cout << " нига не добавлена\n";
	else {
		std::cout << " нига <" << it->second.getTitle() << "> добавлена\n";
	}
	_id++;
}

void Library::changeBooks(int id, const std::string& newContent) {
	auto it = _book.find(id);
	std::cout << " нига " << id << " изменена\n";
	it->second.setTitle(newContent);
}

void Library::deleteBooks(int id) {
	if (!_book.erase(id))
		std::cout << " ниги с данным id не существует\n";
	std::cout << " нига c id " << id << " удалена из библиотеки\n";
}

void Library::Pop() {
	Users user = _user.front();
	for (auto it = user.getBookWanted().begin(); it != user.getBookWanted().end(); it++) {
		if (searchBook(it->getTitle())) {
			std::cout << " нига <" << it->getTitle() << "> выдана пользователю ----> " << user.getName() << '\n';
		}
	}
	_user.pop();
}

bool Library::searchBook(const std::string& title) {
	for (auto it = _book.begin(); it != _book.end(); it++) {
		if (it->second.getTitle() == title) {
			deleteBooks(it->first);
			return true;
		}
	}
	return false;
}


void Library::showBooks() {
	for (const auto [id, book] : _book) {
		std::cout << "Id: " << id << ".  нига: " << book.getTitle() << '\n';
	}
}

