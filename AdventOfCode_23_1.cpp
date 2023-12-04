// AdventOfCode_23_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

string checkForSubtext(string subText, string tbChanged, char change);
bool checkForAdjacent(int i, int j);
char mapa[140][140];
int suma, size_width = 140, size_height = 140;
int giveRatio(int i, int j);

int main()
{
    std::cout << "Hello World!\n";//ccc
    // Create a text string, which is used to output the text file
    string myText;

    suma = 0;
    int digit = 0;
    bool is_adjacent = false;

    // Read from the text file
    ifstream MyReadFile("data.txt");

    for (int i = 0; i < size_height; i++) {
        getline(MyReadFile, myText);
        for (int j = 0; j < size_width; j++) {
            mapa[i][j] = myText[j];
            cout << mapa[i][j];
        }
        cout << "\n";
    }

    for (int i = 0; i < size_height; i++) {
        for (int j = 0; j < size_width; j++) {
            // if (isdigit(mapa[i][j])) {
            //     digit *= 10;
            //     digit += mapa[i][j] - '0';
            //     //is it adjacent?
            //     is_adjacent = (is_adjacent || checkForAdjacent(i, j));
            //
            //     //is it last digit?
            //     if (j+1 == size_width || isdigit(mapa[i][j + 1]) == false) {
            //         if (is_adjacent) {
            //             suma += digit;
            //             cout << digit << " ";
            //         }
            //         digit = 0;
            //         is_adjacent = false;
            //     }
            // }

            if (mapa[i][j] == '*') {
                //suma+=
            }
        }
    }


    cout << "\n\n" << suma;
    // Close the file
    MyReadFile.close();

    return 0;
}

string checkForSubtext(string subText, string tbChanged, char change)
{
    std::string::iterator it;
    for (int i = 0; i < tbChanged.size(); i++) {
        //check each sign if it starts the subtext
        for (int j = 0; j < subText.size(); j++) {
            if (tbChanged[i + j] != subText[j]) {
                break;
            }
            if (j == (subText.size()) - 1) {
                it = tbChanged.insert(tbChanged.begin() + i + j, change);
            }
        }
    }

    return tbChanged;
}

bool checkForAdjacent(int i, int j)
{
    i -= 1;
    if (i >= 0 && mapa[i][j] != '.' && isdigit(mapa[i][j]) == false) return true;
    i += 2;
    if (i < size_height && mapa[i][j] != '.' && isdigit(mapa[i][j]) == false) return true;
    i -= 1;
    j -= 1;
    if (j >= 0 && mapa[i][j] != '.' && isdigit(mapa[i][j]) == false) return true;
    j += 2;
    if (j < size_width && mapa[i][j] != '.' && isdigit(mapa[i][j]) == false) return true;
    j -= 1;

    //diagonals
    i -= 1;
    j -= 1;
    if (j >= 0 && i >= 0 && mapa[i][j] != '.' && isdigit(mapa[i][j]) == false) return true;

    i += 2;
    if (j >= 0 && i < size_height && mapa[i][j] != '.' && isdigit(mapa[i][j]) == false) return true;

    j += 2;
    if (j < size_width && i < size_height && mapa[i][j] != '.' && isdigit(mapa[i][j]) == false) return true;

    i -= 2;
    if (j < size_width && i >= 0 && mapa[i][j] != '.' && isdigit(mapa[i][j]) == false) return true;

    return false;
}

int giveRatio(int i, int j)
{
    int adj = 0, ratio = 0;



    if (adj != 2) return 0;
    return ratio;
}
