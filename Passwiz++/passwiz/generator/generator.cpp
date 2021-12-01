#include "generator.h"
#include <unistd.h>
#include <string>
#include <stdexcept>
#include <ctime>
#include <cstdlib>
#include <iostream>

//https://stackoverflow.com/questions/43432014/c-generate-random-number-every-time

PassWiz_Generator::PassWiz_Generator(){
    
}

PassWiz_Generator::~PassWiz_Generator(){
    
    std::cout << "PassWiz++ Generator instance closed." << std::endl;
}

std::string PassWiz_Generator::getPword(){
    return password;
}

void PassWiz_Generator::setPword(std::string pword){
    password = pword;
}


std::string PassWiz_Generator::password_builder(int len){

   
    usleep(30000);
    std::string p_word = "";
    srand((unsigned int)time(NULL));
     
    char pword_resource[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '@', '!', '?', '#', '&', '%', '$', '*' };
    p_word.clear();

    do{ 
        usleep(60000);
        for(int i = 0; i < len; i++){
            usleep(30000);
            int char_to_choose = 0;
            char_to_choose = rand() % 68;
            p_word = p_word + pword_resource[char_to_choose];
        }

    }while(p_word.length() < len);

    return p_word;
}   