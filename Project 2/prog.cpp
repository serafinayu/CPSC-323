#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

void stackImplementation(vector<char>& input);
void printStackContents(vector<char> input, vector<char> output);

int main() {

    // Put the input string into "input"
    string inp;
    cout << "Input : " << endl;
    cin >> inp;

    vector<char> vinp;
    copy(inp.begin(), inp.end(), back_inserter(vinp));

    // Begin stack and input string in the array
    stackImplementation(vinp);
            

}

void printStackContents(vector<char> input, vector<char> output)
{
    for(int i=0; i < output.size(); i++)
        cout << left << setw(10) << output.at(i);

}

void stackImplementation(vector<char>& input) { // parse the input string 

    // Create a vector to hold the stack iterations and compare the input to
    vector<char> output;
    output.insert(output.begin(), {'E', '$'});

    // Format the stack headers
    cout << left << setw(10) << "Stack" << endl;
    cout << "--------------------------" << endl;
    printStackContents(input, output);
    

    int stop = 0;
    while (input != output)
    {
        for (int i = 0; i <= input.size(); i++)
        {

            if (input.at(i) = 'a')
            {
                while (input.at(i) != output.at(i))
                {
                    if (output.at(i) == 'E')
                    {
                        output.erase(output.at(i));
                        output.at(i) = 'T';
                        output.at(i+1) = 'Q';
                    }
                    else if (output[i] == 'T')
                    {
                        output[i] = 'F';
                        output[i+1] = 'R';
                    }
                    else if (output[i] == 'F')
                    {
                        output[i] = 'a';
                    }
                    else if (output[i] == 'R' || output[i] == 'Q')
                    {
                        stop++;
                        break;
                    } 
                }
            }    
            else if (input.at(i) = '+')
            {
                while (input.at(i) != output.at(i))
                {
                    if (output[i] == 'E' || output[i] == 'T' || output[i] == 'F' )
                    {
                        stop++;
                        break;
                    }
                    else if (output[i] == 'R')
                    {
                        output[i] = '\0';
                    }
                    else if (output[i] == 'Q')
                    {
                        output[i] = '+';
                        output[i+1] = 'T';
                        output[i+2] = 'Q';
                    } 
                }
            }   
            else if (input.at(i) = '-')
            {
                while (input.at(i) != output.at(i))
                {
                    if (output[i] == 'E' || output[i] == 'T' || output[i] == 'F' )
                    {
                        stop++;
                        break;
                    }
                    else if (output[i] == 'R')
                    {
                        output[i] = '\0';
                    }
                    else if (output[i] == 'Q')
                    {
                        output[i] = '-';
                        output[i+1] = 'T';
                        output[i+2] = 'Q';
                    } 
                }
            }     
            else if (input.at(i) = '*')
            {
                while (input.at(i) != output.at(i))
                {
                    if (output[i] == 'E' || output[i] == 'T' || output[i] == 'F' )
                    {
                        stop++;
                        break;
                    }
                    else if (output[i] == 'Q')
                    {
                        output[i] = '\0';
                    }
                    else if (output[i] == 'R')
                    {
                        output[i] = '*';
                        output[i+1] = 'F';
                        output[i+2] = 'R';
                    } 
                }
            }     
            else if (input.at(i) = '/')
            {
                while (input.at(i) != output.at(i))
                {
                    if (output[i] == 'E' || output[i] == 'T' || output[i] == 'F' )
                    {
                        stop++;
                        break;
                    }
                    else if (output[i] == 'Q')
                    {
                        output[i] = '\0';
                    }
                    else if (output[i] == 'R')
                    {
                        output[i] = '/';
                        output[i+1] = 'F';
                        output[i+2] = 'R';
                    } 
                }
            }     
            else if (input.at(i) = '(')
            {
                while (input.at(i) != output.at(i))
                {
                    if (output[i] == 'E')
                    {
                        output[i] = 'T';
                        output[i+1] = 'Q';
                    }
                    else if (output[i] == 'Q')
                    {
                        output[i] = '\0';
                    }
                    else if (output[i] == 'R')
                    {
                        output[i] = '/';
                        output[i+1] = 'F';
                        output[i+2] = 'R';
                        break;
                    } 
                }
            }     
            else if (input[i] = ')')
            {

            }     
        }
        
    }
                    

}

void symbolIdentifier(char * input)


// Create a function for each type of input (a, +, -, *, /, (, ))
    // In their functions, list the different rules depending on the 
