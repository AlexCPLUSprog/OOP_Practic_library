#pragma once
#include <iostream>


class Books
{
public:
	Books(const std::string& author, int year, const std::string& title, const std::string& content);
	Books(const std::string& author, int year, const std::string& title);
	const std::string& getTitle() const;
	const int getYear() const;
	const std::string& getAuthor() const;
	const std::string& getContent() const;

	void setTitle(std::string title);	
	void setContent (const std::string& cont);
	void setAuthor (const std::string& author);	
	void setYear (int year);
	bool operator==(const Books& obj);

private:
	
	std::string _author;
	int _year;
	std::string _title;
	std::string _content;
	
};

