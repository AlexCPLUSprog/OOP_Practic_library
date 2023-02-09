#include "Library.h"


int main() {
	setlocale(0, "ru");

	Users u1("Bob");
	Users u2("Alex");
	

	Books b1("���� ������", 1906, "����� ����");
	Books b2("����� ������", 2023, "������� ������");
	Books b3("������ ����", 2018, "������� ��������. ��� ���������� ������� �������� � ���������� �� ������");
	Books b4("������ ����������", 2023, "������");

	u1.bookWanted(b1);
	u2.bookWanted(b2);	// � ����� ����� �� �������, ������, ����� � ������� ������� Pop(), � � if ������� �� ����
	u1.bookWanted(b3);	// � ������� �� � ����� ������ ���� ���������� ��� ����(�� ����)
	u2.bookWanted(b4);

	Library lib;
	
	lib.addBooks(b1);
	lib.addBooks(b2);
	lib.addBooks(b3);
	lib.addBooks(b4);

	std::cout << '\n';

	lib.addUser(u1);
	lib.addUser(u2);
	
	std::cout << "================================================\n";
	lib.showBooks();
	std::cout << "================================================\n";
	/*u1.bookWanted(b1);
	u2.bookWanted(b2);
	u1.bookWanted(b3); 
	u2.bookWanted(b4);*/

	lib.Pop();
	std::cout << "================================================\n";
	lib.showBooks();
	




}