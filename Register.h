#pragma once

void Register() {
    std::string username, password;
    std::cout << "Enter your desired Username: " << std::endl;
    std::cin >> username;
    std::cout << "Enter your desired Password: " << std::endl;
    std::cin >> password;

    // Log Username and Password in a file

    std::ofstream file;
    file.open(username + ".txt");
    file << username << std::endl << password;
    file.close();
}