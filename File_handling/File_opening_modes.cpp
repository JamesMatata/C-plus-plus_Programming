#include<iostream>
#include<fstream>

int main()
{
    std::fstream myFilesManager;
    myFilesManager.open("File_opening_modes.txt",std::ios::out | std::ios::ate);
    /*
        Default modes(FLAGS)
        fstream - ios::in | ios::out
        ifstream - ios::in
        ofstream - ios::out
    */
    /*
        ios::in - Input - Reading  from a file
        ios::out - Output - Write to a file, if there is no file create it,if there is a
                    file truncate it(remove content) unless it occurs with ios::in flag
        ios::trunc -Truncate - it is truncating the file(cutting everything inside)
        ios::ate - Ate The End - Sets pointer at the end of file - the place of pointer
                    can be changed in that mode, it's possible to read and write in that mode
        ios::app - Append - The content is added at the end of file and it is not possible
                    to remove content or adding something in other place other than the end
                    of file.
        ios::binary - Opens the file as a binary file
    */
    if(myFilesManager.is_open()){
            myFilesManager<<"Programming has never been so sweet";
            myFilesManager<<"\nThe walk is not easy but am doing my best";
            myFilesManager.close();
    }
    else{
        std::cout<<"\nThe file is not properly opened";
    }

    return 0;
}
