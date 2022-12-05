#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    // Put the input string into "input"
    string input = "";
    cout << "Input : " << endl;
    cin >> input;

    // "output" will hold the states from the stack and be compared to "input" 
    string output = "";

    // Create a 2d array to hold the stack implementation and the input
    const int SIZE = 100;
    string stackArray[2][SIZE] = "";

    string cfg[10][10] = {{"E", "TQ"}, {"Q", "+TQ"}, {"Q", "-TQ"}, 
                          {"Q", ""}, {"T", "FR"}, {"R", "*FR"}, {"R", "/FR"}, 
                          {"R", ""}, {"F", "(E)"}, {"F", "a"}}

    // Begin stack and input string in the array
    stackArray[0][0] = "Stack";
    stackArray[1][0] = "Input";

    // Stack implementation
    for (int i = 0; i <= input.length(); i++)
    {
        for (int j = 0; j <= output.length(); j++)
        {
            if (input[i] != output[i])
            {
                switch (input[i])
                {
                    case "a":
                        if (output[j] == "")
                        {
                            
                        }
                }
            }
        }
    }
            

}
