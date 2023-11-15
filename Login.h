#pragma once

bool Login() {
    std::string username, password, user, pass;

    std::cout << "Enter Username: ";
    std::cin >> username;
    std::cout << "Enter Password: ";
    std::cin >> password;

    std::ifstream read(username + ".txt");
    getline(read, user);
    getline(read, password);

    if(user == username && pass == password) {
        return true;
    }
    else {
        return false;
    }
}
