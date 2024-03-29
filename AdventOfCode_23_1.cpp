// AdventOfCode_23_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

string checkForSubtext(string subText, string tbChanged, char change);

int main()
{
    std::cout << "Hello World!\n";
    // Create a text string, which is used to output the text file
    string myText;
    int suma, first, last;
    suma = 0;

    // Read from the text file
    ifstream MyReadFile("data.txt");


    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
        // Output the text from the file
        first = 0;
        last = 0;

        cout << "\n" << myText << " ";
        myText=checkForSubtext("one", myText, '1');
        myText=checkForSubtext("two", myText, '2');
        myText=checkForSubtext("three", myText, '3');
        myText=checkForSubtext("four", myText, '4');
        myText=checkForSubtext("five", myText, '5');
        myText=checkForSubtext("six", myText, '6');
        myText=checkForSubtext("seven", myText, '7');
        myText=checkForSubtext("eight", myText, '8');
        myText=checkForSubtext("nine", myText, '9');
        //cout <<myText << " ";

        for (char znak : myText) {
            if (isdigit(znak)) {
                znak -= '0';
                last = znak;
                if (first == 0) {
                    first = last;
                    first *= 10;
                }
            }
        }
        first += last;
        cout << first;
        suma += first;
    }
    cout << "\n\n"<<suma;
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
                it = tbChanged.insert(tbChanged.begin() + i+j, change);
                //tbChanged[i] = change;
            }
        }
    }

    return tbChanged;
}
