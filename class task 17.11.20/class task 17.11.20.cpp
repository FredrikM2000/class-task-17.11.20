
#include <iostream>
#include <string>
#include <conio.h>

//std::string abcs = "ABCDEF";




void printTable() {
	
}

int main() {
	int arruw = 0;


char input;
while (true) {


	std::string arrow[6] = { "      " };
	std::cout << "|";
	




	input = _getch();
	//std::cout << input;
	arrow;
arrow[arruw] = 'V';
for (int i = 0; i <= 5; i++) {
		std::cout << arrow[i] << "|";
	}
	std::cout << "\n";
	switch (input) {
	case 'd':
		arruw++;
		break;
	}
	

}

}
