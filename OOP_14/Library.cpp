#include "Library.h"

Library::Library() :_id(1) {}

void Library::addUser(const Users& user) {
	_user.push(user);	
	std::cout << "������������ ��������" << '\n';	
}

void Library::addBooks(const Books& book) {	
	const auto& [it, isInsert] = _book.insert({ _id, book });
	if (!isInsert)
		std::cout << "����� �� ���������\n";
	else {
		std::cout << "����� <" << it->second.getTitle() << "> ���������\n";
	}
	_id++;
}

void Library::changeBooks(int id, const std::string& newContent) {
	auto it = _book.find(id);
	std::cout << "����� " << id << " ��������\n";
	it->second.setTitle(newContent);
}

void Library::deleteBooks(int id) {
	if (!_book.erase(id))
		std::cout << "����� � ������ id �� ����������\n";
	std::cout << "����� c id " << id << " ������� �� ����������\n";
}

void Library::Pop() {
	Users user = _user.front();
	for (auto it = user.getBookWanted().begin(); it != user.getBookWanted().end(); it++) {
		if (searchBook(it->getTitle())) {
			std::cout << "����� <" << it->getTitle() << "> ������ ������������ ----> " << user.getName() << '\n';
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
		std::cout << "Id: " << id << ". �����: " << book.getTitle() << '\n';
	}
}

