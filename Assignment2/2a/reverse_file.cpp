/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number two. Task a
*/

#include "reverse_file.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <algorithm>

void ReversedFile(const std::string inputFile, const std::string outputFile) {
    std::ifstream in_file; // declaration of the input file
    in_file.open(inputFile, std::ios::binary | std::ios::in); // open the input file
    
    int fileSize = std::filesystem::file_size(inputFile); //determine the file size
    char* FileArray = new char[fileSize]; // make the array

    in_file.read(FileArray, fileSize); // read the file
    in_file.close(); // close the file we have read

    std::reverse(FileArray, FileArray + fileSize); //reverse the array

    std::ofstream outfile(outputFile, std::ios::binary | std::ios::out); //open the output file
    outfile.write(FileArray, fileSize); //write the array to a new file
    outfile.close(); // close the file we have wrote

    delete[] FileArray; // clean the memory
}

