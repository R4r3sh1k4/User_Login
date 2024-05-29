#include "Header.h"

bool P_check(std::string P_input, std::string P_master, std::string U_input, std::string U_master) {

	if (P_input == P_master && U_input == U_master) {
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;


		std::cout << "==================================" << std::endl;
		std::cout << "	Bine ai venit, " << U_master << " !" << std::endl;
		std::cout << "==================================" << std::endl;

		std::cout << std::endl;
		return true;
		std::cout << std::endl;

	}
	else {
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << " ERROR: Parola sau numele utilizatorului este eronat." << std::endl;

		std::cout << std::endl;
		return false;
		std::cout << std::endl;

	}
}
