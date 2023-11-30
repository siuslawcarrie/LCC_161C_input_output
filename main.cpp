//
// Created by siusl on 11/30/2023.
//
#include <iostream>
#include <fstream>
#include <stringstream>

using namespace std;

const char TRIANGLE = 'T';
const char SQUARE = 'S';
const char RECTANGLE = 'R';
const char DIAMOND = 'D';

int main() {
    char shape;
    char symbol;
    int height, width;

    ifstream in;

    in.open("infile.txt");
    ofstream out;
    out.open("outfile.txt");
    if (in.good()) {
        in >> shape;
        while (shape != 'E') {
            switch (shape) {
                case TRIANGLE:
                    in >> symbol >> height;
                    //refer triangle function
                    break;
                case SQUARE:
                    in >> symbol >> width;
                    //square function
                    break;
                case DIAMOND:
                    in >> symbol >> width;
                    //diamond function
                    break;
                case RECTANGLE:
                    in >> symbol >> height >> width;
                    //rectangle function
                    break;
                default:
                    cout << "error";

            }
            in >> shape;
        }
    } else {
        cout << "Could not read file";
        return -1;
    }

}
