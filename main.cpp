//
// Created by siusl on 11/30/2023.
//
#include <iostream>
#include <fstream>
#include "files_crb.h"
#include <sstream>

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

    in.open("C:\\users\siusl\CLionProjects\LCC_161C_input_write_shapes\\infile.txt");
    ofstream out;
    out.open("C:\\users\siusl\CLionProjects\LCC_161C_input_write_shapes\\outfile.txt");;
    if (in.good()) {
        in >> shape;
        while (shape != 'E') {
            switch (shape) {
                case TRIANGLE:
                    in >> symbol >> height;
                    string makeTriangle(symbol, height);
                    break;
//                case SQUARE:
//                    in >> symbol >> width;
//                    string makeSquare(symbol, width);
//                    break;
//                case DIAMOND:
//                    in >> symbol >> width;
//                    string makeDiamond(symbol, width);
//                    break;
//                case RECTANGLE:
//                    in >> symbol >> height >> width;
//                    string makeRectangle(symbol, height, width);
//                    break;
//                default:
//                    cout << "error";

            }
            in >> shape;
        }
    } else {
        cout << "Could not read in file";
        return -1;
    }

}
