
/*
 * Description : Counts the occurence of all characters in the input file
 */


//Header files
#include "frequencyCounter.h"
#include <iostream>

frequencyCounter::frequencyCounter(std::ifstream& in) {

    arr = new unsigned[257]{0};

    //if unable to open file
    if (!in.is_open()) {
        std::cout << "cannot count unopened file" << std::endl;
        return;
    }
    char c;
    int numBytes = 0;
    while (in.get(c)) {
        numBytes++;
        arr[(unsigned char) c]++; //saving all freqs
    }
    std::cout << "the num bytes in file: " << numBytes << std::endl;
    //128 is our end of character bit, so we need an encoding for it as well
    arr[256] = 1;

}
//deconstructor
frequencyCounter::~frequencyCounter(){
    delete[] arr;
}
//returns frequency of the input character
unsigned frequencyCounter::getFreqOfChar(unsigned short c) {
    return arr[c];
}

void frequencyCounter::print(){
    for(int i = 0; i < 257; i++){
        if(arr[i] == 0)continue;
        std::cout << i << ": " << arr[i] << std::endl;
    }
}
