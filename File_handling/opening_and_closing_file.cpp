#include<iostream>
#include<fstream>

int main()
{
    std::fstream myFilesManager;
    myFilesManager.open("example.txt");
    myFilesManager<<"I want to be a beast in C++ programming";
    myFilesManager.close();
    return 0;
}
