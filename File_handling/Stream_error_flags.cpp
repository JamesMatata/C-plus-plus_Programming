#include<iostream>
#include<fstream>

int main()
{
    /*
        bad()-badbit-returns true if there is an error like writing to a file which was opened only reading(ios::in)
        fail()-failbit-returns true if we try to assign string to integer while reading from file or when the badbit situation happen
        eof()-eofbit-returns true if the file opens to
        good()-goodbit-returns true if everything is fine(If any of the above flags are false)
        clear()-it clears the state
    */
    std::fstream myFilesManager;
    myFilesManager.open("example.txt",std::ios::in);
    if (myFilesManager.is_open())
    {
        /*myFilesManager<<"Sample text about something else.";

        std::cout<<myFilesManager.bad(); //will return true since there is a badbit state

        myFilesManager.clear();*/
        //#-----------------------------------------#
        int buffer;
        myFilesManager>>buffer;
        std::cout<<buffer;
        std::cout<<myFilesManager.fail()<<std::endl; //will return true since there is a failbit state
        std::cout<<myFilesManager.good()<<std::endl; //will return false since there is a failbit state
    }
    else
        std::cout<<"The file couldn't open"<<std::endl;

    return 0;
}
