#include <string>
#include <fstream>
#include <iostream>


/*
The <fstream> library provides three main classes for file handling:
    ofstream: Output file stream, used to write data to files.
    ifstream: Input file stream, used to read data from files.
    fstream: General file stream, supports both reading and writing.
*/

std::string replace_string(std::string line, std::string s1, std::string s2)
{
    if (s1.empty())
        return (line);

    std::string result;
    size_t i = 0;
    while (i < line.length())
    {
        if (line.substr(i, s1.length()) == s1)
        {
            result += s2;
            i += s1.length();
        }
        else
        {
            result += line[i];
            i++;
        }
    }
    return (result);
}

int process_file(std::ifstream &inFile, std::string s1, std::string s2)
{
    std::string line;
    std::string content;
    std::string output = "output";

    while (getline(inFile, line))
        content += replace_string(line, s1, s2) + "\n";
    inFile.close();
    std::ofstream outFile(output.c_str());
    if (!outFile)
    {
        std::cout << "Unable to open output file." << std::endl;
        return (1);
    }
    outFile << content;
    outFile.close();
    std::cout << "Processed content saved in file output" << std::endl;
    return (0);
}

int main (int argc, char **argv)
{
    std::string filename;
    std::string s1;
    std::string s2;

    if (argc == 4)
    {
        filename = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        std::ifstream inFile(filename.c_str());
        if (!inFile)
        {
            std::cout << "Unable to open input file " << filename << std::endl;
            return (1);
        }
        return (process_file(inFile, s1, s2));
    }
    return (1);
}