#include "Books.h"

Books::Books(const std::string& author, int year, const std::string& title, const std::string& content) : _author(author), _year(year), _title(title), _content(content) {}
Books::Books(const std::string& author, int year, const std::string& title) : _author(author), _year(year), _title(title) {}

const std::string& Books::getTitle() const {
	return _title;
}

const std::string& Books::getAuthor()const {
	return _author;
}

const int Books::getYear()const {
	return _year;
}

const std::string& Books::getContent() const{
	return _content;
}

void Books::setTitle(std::string title) {
	_title = title;
}

void Books::setContent(const std::string& cont) {
	_content = cont;
}

void Books::setAuthor(const std::string& author) {
	_author = author;
}

void Books::setYear(int year) {
	_year = year;
}

bool Books::operator==(const Books& obj) {
	return obj.getTitle() == this->getTitle();
}
