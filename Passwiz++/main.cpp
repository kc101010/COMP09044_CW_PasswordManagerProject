#include "passwiz/generator/generator.cpp"
#include <iostream>
#include <unistd.h>


int main(){

    PassWiz_Generator* new_pword = new PassWiz_Generator();

    int len = 0;
    int amount = 0;

    std::cout << "Please enter password length: " << std::endl;
    std::cin >> len;

    std::cout << "Please enter password amount: " << std::endl;
    std::cin >> amount;

    for(int i = 0; i < amount; i++){
        usleep(1200000);
        std::cout << new_pword->password_builder(len) << std::endl;
    }

    delete new_pword;
    return 0;
}