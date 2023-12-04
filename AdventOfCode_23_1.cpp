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
    int suma, gameId;
    suma = 0;
    int maxR = 12, maxG = 13, maxB = 14;

    // Read from the text file
    ifstream MyReadFile("data.txt");


    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
        // Output the text from the file
        first = 0;
        last = 0;
        myText = checkForSubtext("red",myText,'R');
        myText = checkForSubtext("blue", myText, 'B');
        myText = checkForSubtext("green", myText, 'G');

        cout << "\n" << myText << " ";
        gameId = 0;
        for (int i = 5; isdigit(myText[i]); i++) {
            gameId *= 10;
            gameId = myText[5] - '0';
        }
        cout <<gameId << " ";

        for (char znak : myText) {
            
            if (isdigit(znak)) {
                znak -= '0';
                last = znak;
                if (first == 0) {
                    first = last;
                    first *= 10;
                }
                else {
                    first += last;
                }
                
            }
            if (znak == 'R') {
                //check red
                if (first > maxR) {
                    gameId = 0;
                }
                first = 0;

            }
            if (znak == 'G') {// AdventOfCode_23_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> 
#include <string>
                using namespace std;

                string checkForSubtext(string subText, string tbChanged, char change);

                int main()
                {
                    std::cout << "Hello World!\n";//ccc
                    // Create a text string, which is used to output the text file
                    string myText;
                    int suma, gameId, first, last, power;
                    suma = 0;
                    int maxR = 0, maxG = 0, maxB = 0;

                    // Read from the text file
                    ifstream MyReadFile("data.txt");


                    // Use a while loop together with the getline() function to read the file line by line
                    while (getline(MyReadFile, myText)) {
                        // Output the text from the file
                        maxR = 0;
                        maxG = 0;
                        maxB = 0;
                        first = 0;
                        last = 0;
                        myText = checkForSubtext("red", myText, 'R');
                        myText = checkForSubtext("blue", myText, 'B');
                        myText = checkForSubtext("green", myText, 'G');

                        cout << "\n" << myText << " ";
                        gameId = 0;
                        for (int i = 5; isdigit(myText[i]); i++) {
                            gameId *= 10;
                            gameId += myText[i] - '0';
                        }
                        cout << gameId << " ";

                        myText.erase(myText.begin(), myText.begin() + 8);

                        for (char znak : myText) {

                            if (isdigit(znak)) {
                                znak -= '0';
                                last = znak;
                                if (first == 0) {
                                    first = last;
                                }
                                else {
                                    first *= 10;
                                    first += last;
                                }

                            }
                            if (znak == 'R') {
                                //check red
                                if (first > maxR) {
                                    maxR = first;
                                }
                                first = 0;

                            }
                            if (znak == 'G') {
                                //check green
                                if (first > maxG) {
                                    maxG = first;
                                }
                                first = 0;
                            }
                            if (znak == 'B') {
                                //check blue
                                if (first > maxB) {
                                    maxB = first;
                                }
                                first = 0;
                            }
                        }
                        power = maxR * maxG * maxB;
                        cout << gameId;
                        suma += power;
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
                                //tbChanged[i] = change;
                            }
                        }
                    }

                    return tbChanged;
                }

                //check green
                if (first > maxG) {
                    gameId = 0;
                }
                first = 0;
            }            
            if (znak == 'B') {
                //check blue
                if (first > maxB) {
                    gameId = 0;
                }
                first = 0;
            }
        }
        cout << gameId;
        suma += gameId;
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
