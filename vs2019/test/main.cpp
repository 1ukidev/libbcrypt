#include "../../include/bcrypt/bcrypt.hpp"

#include <cstdlib>
#include <iostream>

int main()
{
	std::string right_password = "right_password";
    std::string wrong_password = "wrong_password";

    std::cout << "generate hash... ";
    std::string hash = bcrypt::generateHash(right_password, 12);
    std::cout << "done." << '\n';

    std::cout << "checking right password: "
              << bcrypt::validatePassword(right_password, hash) << '\n';

    std::cout << "checking wrong password: "
              << bcrypt::validatePassword(wrong_password, hash) << '\n';

	std::system("pause");
	return EXIT_SUCCESS;
}
