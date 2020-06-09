#include <iostream>
#include "string.h"
// rotary things
std::string input;
int inputlength;
char dynchar;
int count1;

std::string rot1 = "abcdefghijklmnopqrstuvwxyz";
std::string rot1a = "okizjbpvqywgtaedrmlxnfuhsc";
std::string rot2 = "aykimqpwhvjtscnxdolgbrefuz"; 
std::string rot2a = "iqxrowdngkmcfjpzlavyseutbh";
std::string rot3 = "vnktcgbswxalzdyjhrqmfeoipu";
std::string rot3a = "kughnpdfmytbxzsoivaeqwrclj";

int rotoff1;
int rotoff2;
int rotoff3;


char encode(char chin, std::string rota, std::string rotb, int rotoffset){
    count1 = 26;
    while (count1 > 0){
        if (chin = rota[count1]){
            return rotb[(count1 + rotoffset) % 26];
        }
        count1++;
    }

    return chin;
}

int main(){
    std::cin >> input;
    std::cin >> inputlength;
    int inputlengthcd = 0;
    while (inputlengthcd < inputlength){
        dynchar = input[inputlengthcd];
        dynchar = encode(dynchar, rot1, rot1a, rotoff1);
        count1 = 0;
        std::cout << dynchar;
        inputlengthcd++;
    }
}