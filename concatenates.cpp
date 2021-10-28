// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This rogram finds the largest of 10 random numbers

#include <iostream>
#include <array>
#include <string>
#include <list>

using std::string;

template<size_t N1, size_t N2>
std::list<std::string> Concatenate(std::array<std::string, N1> listOne,
std::array<std::string, N2> listTwo) {
    std::list<std::string> result;
    // Source : https://stackoverflow.com/questions/5070521/
    // does-const-auto-have-any-meaning#:~:text=auto
    // %20will%20deduce%20type%20and,auto%20just%20force%20
    // const%20qualifier.&text=Compiler%20deduces%20the%20
    // type%20for%20the%20auto%20qualifier.
    for (const auto& theString : listOne) {  // replace const auto& by string
        result.push_back(theString);
    }
    for (const auto& theString : listTwo) {
        result.push_back(theString);
    }
    return result;
}

void PrintList(std::list<string> conList) {
    // This formats the output
    std::cout << "[";

    for (const auto& theString : conList) {  // replace const auto& by string
        std::cout << theString << " ";
    }

    std::cout << "]" << std::endl;
}

int main() {
    // This is the main function

    std::array<string, 3> arrayOne{"p", "o", "i"};
    std::array<string, 4> arrayTwo{"0", "9", "8", "7"};

    std::list<string> finalList = Concatenate(arrayOne, arrayTwo);

    PrintList(finalList)

    std::cout << "\nDone." << std::endl;
}
