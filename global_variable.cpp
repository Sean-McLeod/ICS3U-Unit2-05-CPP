// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on November 2020
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableX = 25;

void localVariable()  {
    // this function shows what happens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;

    std::cout << "" << std::endl;
    std::cout << "Local variableX + variableY = variableZ: " << variableX
              << "+" << variableY << "=" << variableZ << std::endl;
}


void globalVariable()  {
    // this function shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;

    std::cout << "" << std::endl;
    std::cout << "Global variableX + variableY = variableZ: " << variableX
              << "+" << variableY << "=" << variableZ << std::endl;
}


int main() {
    // this function shows how local and global variables work

    localVariable();
    globalVariable();
}
