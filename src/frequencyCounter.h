/* Name - frequencyCounter.h
 * Description - counts the number of occurrences of each character.
 *
 * Made by - Conor Murphy and Maheeppartap Singh
 */
#include <fstream>

#pragma once

class frequencyCounter {
private:
     unsigned* arr;

public:

    //constructor
    explicit frequencyCounter(std::ifstream& in);

    ~frequencyCounter();

    // counts frequency of all characters in file
    unsigned getFreqOfChar(unsigned short c);

    void print();

};

//End of header file
