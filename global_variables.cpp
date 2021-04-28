// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: April 2021
// This program shows how local and global variables work

#include <iostream>

// Global variable
int variableX = 25;

void localVariable() {
    // This shows what happens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout <<"Local variableX, variableY, variableZ: " << variableX
              << "+" << variableY << " = " << variableZ << std::endl;
}


void globalVariable() {
    // This shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Global variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // This function calls local and global

    localVariable();
    globalVariable();
}
