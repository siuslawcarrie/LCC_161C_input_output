#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "files_crb.h"
using namespace std; 

string makeDiamond(char symbol, int width)
{
    stringstream buffer;
    for (int i = 1; i <= width; i += 2)
    {
        buffer << setw((width-i)/2) << "";
        for (int j = 0; j < i; j++)
        {
            buffer << symbol;
        }
        buffer << endl;
    }
    for (int i = width - 2; i >= 1; i -= 2)
    {
        buffer << setw((width-i)/2) << "";
        for (int j = 0; j < i; j++)
        {
            buffer << symbol;
        }
        buffer << endl;
    }
    buffer << endl;
    return buffer.str();
}
string makeRectangle(char symbol, int height, int width)
{
    stringstream buffer;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            buffer << symbol;
        }
        buffer << endl;
    }
    buffer << endl;
    return buffer.str();
}
string makeSquare(char symbol, int width)
{
    stringstream buffer;
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < width; j++)
        {
            buffer << symbol;
        }
        buffer << endl;
    }
    buffer << endl;
    return buffer.str();
}
string makeTriangle(char symbol, int height)
{
    stringstream buffer;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            buffer << symbol;
        }
        buffer << endl;
    }
    buffer << endl;
    return buffer.str();
}

void writeShape(string outString, ofstream& outfile)
{
    outfile << outString;
}
