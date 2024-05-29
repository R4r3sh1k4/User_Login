#include "Header.h"




int main() {
	std::string P_input;
	std::string P_master;
	std::string U_input;
	std::string U_master;

	//Setarea userului si parolei userului master, aceasta o sa fie termenul de comparatie pentru al doilea string

	std::cout << "	Te rog introdu numele utilizatorului si parola sa: " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	std::cout << "	Numele utilizatorului: ";
	std::cin >> U_master;
	std::cout << std::endl;
	std::cout << "	Parola utilizatorului: ";
	std::cin >> P_master;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	//Setarea stringurilor pentru comparatia cu cele master

	std::cout << "	Pentru confirmare te rog sa le introduci din nou: " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "	Numele utilizatorului: ";
	std::cin >> U_input;
	std::cout << std::endl;
	std::cout << "	Parola utilizatorului: ";
	std::cin >> P_input;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << P_check(P_input, P_master, U_input, U_master);

	return 0;
}
