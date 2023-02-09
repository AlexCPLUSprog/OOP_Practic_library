#include "Library.h"


int main() {
	setlocale(0, "ru");

	Users u1("Bob");
	Users u2("Alex");
	

	Books b1("Джек Лондон", 1906, "Белый Клык");
	Books b2("Борис Акунин", 2023, "Собачья смерть");
	Books b3("Джеймс Клир", 2018, "Атомные привычки. Как приобрести хорошие привычки и избавиться от плохих");
	Books b4("Сергей Лукьяненко", 2023, "Прыжок");

	u1.bookWanted(b1);
	u2.bookWanted(b2);	// я очень долго не понимал, почему, когда я вызываю функцию Pop(), я в if попасть не могу
	u1.bookWanted(b3);	// я закинул их в самое начало ивсе заработало как надо(по идее)
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