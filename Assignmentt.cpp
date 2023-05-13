#include <iostream>
#include <sstream>
#include <utility>
#include <vector>
// #include <tuple>
#include <fstream>
#include <iterator>
#include <stdio.h>
#include <iomanip>

#define FONT_COL_CUSTOM_RED "\e[38;2;200;0;0m"

using namespace std;

vector<string> getWords(const string &input) // No need to use std:: prefix here
{
     istringstream iss(input);
     vector<string> words(istream_iterator<string>{iss},
                          istream_iterator<string>());
     return words;
}

void printhelp_manualmessage()
{
     cout << endl
          << "Command not recognized , please reenter the command " << endl;
     cout << "If you are not familliar with the commands please enter "
          << "\033[33m"
          << "*help*"
          << "\033[0m" << endl;
     cout << "If you are not familliar with how to input commands , please enter "
          << "\033[33m"
          << "*man* *space* *(COMMMAND)*"
          << "\033[0m" << endl
          << endl;
}

void printCommands()
{
     cout << "  " << setw(30) << left << "Load"
          << "load" << endl;
     cout << "  " << setw(30) << left << "Store"
          << "store" << endl;
     cout << "  " << setw(30) << left << "Clone"
          << "clone" << endl;
     cout << "  " << setw(30) << left << "html"
          << "html" << endl;
     cout << "  " << setw(30) << left << "min"
          << "min" << endl;
     cout << "  " << setw(30) << left << "max"
          << "max" << endl;
     cout << "  " << setw(30) << left << "Median"
          << "median" << endl;
     cout << "  " << setw(30) << left << "Mean"
          << "mean" << endl;
     cout << "  " << setw(30) << left << "Variance"
          << "variance" << endl;
     cout << "  " << setw(30) << left << "Horizontal Histogram"
          << "hhisto" << endl;
     cout << "  " << setw(30) << left << "Sort"
          << "sort" << endl;
     cout << "  " << setw(30) << left << "Help"
          << "help" << endl;
     cout << "  " << setw(30) << left << "Manual"
          << "man" << endl;
     cout << "  " << setw(30) << left << "Oddrows"
          << "oddrows" << endl;
     cout << "  " << setw(30) << left << "Evenrows"
          << "evenrows" << endl;
     cout << "  " << setw(30) << left << "Primes"
          << "primes" << endl
          << endl;
     cout << "\033[32m  4. Add/Delete commands\033[0m" << endl
          << endl;
     cout << "  " << setw(30) << left << "Functions"
          << "Command" << endl
          << endl;
     cout << "  " << setw(30) << left << "Delete row"
          << "delete" << endl;
     cout << "  " << setw(30) << left << "Delete column"
          << "delete" << endl;
     cout << "  " << setw(30) << left << "Insert row"
          << "insert" << endl;
     cout << "  " << setw(30) << left << "Replace"
          << "replace" << endl;
}

void runInterpreter()
{
     string command;
     cout << "Welcome to Interpreter" << endl;
     do
     {
          cout << "\033[37m# "; // \033[37m ensures the text command prompt and whatever the user prompts is white
          getline(cin, command);

          vector<string> words;
          words = getWords(command);
          int numWords = words.size();

          if (words[0] == "hhisto")
          {
               if (numWords == 2)
               {
                    cout << "  " << command << " is loaded" << endl
                         << endl;
               }
               else
               {
                    cout << "  Syntax error \n  " << "Wrong number of parameters " << endl << endl ;
                    printhelp_manualmessage();
               }
          }

          else if (words[0] == "sort")
          {

               if (numWords == 2)
               {
                    cout << "  " << command << " is loaded" << endl
                         << endl;
               }
               else
               {
               }
          }
          else if (words[0] == "help")
          {

               if (numWords == 1)
               {
                    cout << "  " << command << " is loaded" << endl
                         << endl
                         << "  Here is the list of functions this interpreter recognizes and their commands "
                         << endl
                         << endl;
                    printCommands();
               }
               else
               {
                    cout << "  Syntax error \n  "
                         << "Wrong number of parameters " << endl
                         << endl;
                    printhelp_manualmessage();
               }
          }

          if (words[0] == "man")
          {

               if (numWords >= 2)
               {
                    cout << "  " << command << " is loaded" << endl
                         << endl;

                    if (words[1] == "load")
                    {

                         cout << left << setw(15) << command << ": "
                              << "Reads the file named filename and parses its contents and stores it into arrays or vectors." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "replace "
                              << "\033[33m"
                              << "(chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;
                    }

                    else if (words[1] == "clone")
                    {

                         cout << left << setw(15) << command << ": "
                              << "Create a copy of file1 and name it file2." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "replace "
                              << "\033[33m"
                              << "(chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;
                    }

                    else if (words[1] == "html")
                    {

                         cout << left << setw(15) << command << ": "
                              << "Generates an HTML document for the loaded data and store it in a file “salary.html”." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "replace "
                              << "\033[33m"
                              << "(chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;

                         cout << "2nd version of command " << endl;
                         cout << left << setw(15) << command << ": "
                              << "The program should read the a.csv file and convert it to an html table with proper column titles and format." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "insert row "
                              << "\033[33m"
                              << "(chosen column) (chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;
                    }

                    else if (words[1] == "min")
                    {

                         cout << left << setw(15) << command << ": "
                              << "shows the minimum of all the columns." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "replace "
                              << "\033[33m"
                              << "(chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;

                         cout << "2nd version of command " << endl;
                         cout << left << setw(15) << command << ": "
                              << "display the minimum grade for the Malay column" << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "insert row "
                              << "\033[33m"
                              << "(chosen column) (chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;
                    }

                    else if (words[1] == "max")
                    {

                         cout << left << setw(15) << command << ": "
                              << "shows the maximum of all the columns." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "replace "
                              << "\033[33m"
                              << "(chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;

                         cout << "2nd version of command " << endl;
                         cout << left << setw(15) << command << ": "
                              << "display the maximum value for the Math column" << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "insert row "
                              << "\033[33m"
                              << "(chosen column) (chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;
                    }

                    else if (words[1] == "median")
                    {

                         cout << left << setw(15) << command << ": "
                              << "Display the medians for the number columns only." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "replace "
                              << "\033[33m"
                              << "(chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;

                         cout << "2nd version of command " << endl;
                         cout << left << setw(15) << command << ": "
                              << "Displays the median of the Math column" << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "insert row "
                              << "\033[33m"
                              << "(chosen column) (chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;
                    }

                    else if (words[1] == "mean")
                    {

                         cout << left << setw(15) << command << ": "
                              << "Displays means of all the columns." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "replace "
                              << "\033[33m"
                              << "(chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;

                         cout << "2nd version of command " << endl;
                         cout << left << setw(15) << command << ": "
                              << "Displays the mean of the Math column." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "insert row "
                              << "\033[33m"
                              << "(chosen column) (chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;
                    }

                    else if (words[1] == "variance")
                    {

                         cout << left << setw(15) << command << ": "
                              << "Displays variance of all the columns." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "replace "
                              << "\033[33m"
                              << "(chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;

                         cout << "2nd version of command " << endl;
                         cout << left << setw(15) << command << ": "
                              << "Displays the variance of the Malay column." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "insert row "
                              << "\033[33m"
                              << "(chosen column) (chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;
                    }

                    else if (words[1] == "hhisto")
                    {
                         cout << left << setw(15) << command << ": "
                              << "Displays a histogram for the chosen column . Frequency of the data is the x axis." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "delete column "
                              << "\033[33m"
                              << "(column_name)"
                              << "\033[0m" << endl
                              << endl;
                    }

                    else if (words[1] == "sort")
                    {
                         cout << left << setw(15) << command << ": "
                              << "Sort the data using the values inside the column have been chosen. Make sure to swap all the columns in the sorting process." << endl;
                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "sort "
                              << "\033[33m"
                              << "(column_name)"
                              << "\033[0m" << endl
                              << endl;
                    }
                    else if (words[1] == "help")
                    {
                         cout << left << setw(15) << command << ": "
                              << "Display the commands available and how to use them." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "help"
                              << endl
                              << endl;
                    }
                    else if (words[1] == "man")
                    {
                         cout << left << setw(15) << command << ": "
                              << "Display the command for the chosen command and what it does." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "man "
                              << "\033[33m"
                              << "(command_name)"
                              << "\033[0m" << endl
                              << endl;
                    }
                    else if (words[1] == "oddrows")
                    {
                         cout << left << setw(15) << command << ": "
                              << "Display the odd rows of the data." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "oddrows"
                              << endl
                              << endl;
                    }

                    else if (words[1] == "evenrows")
                    {
                         cout << left << setw(15) << command << ": "
                              << "Display the even rows of the data." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "oddrows"
                              << endl
                              << endl;
                    }

                    else if (words[1] == "primes")
                    {
                         cout << left << setw(15) << command << ": "
                              << "Display the prime numbers in the chosen column." << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "primes "
                              << "\033[33m"
                              << "(column_name)"
                              << "\033[0m" << endl
                              << endl;
                    }

                    else if (words[1] == "delete")
                {
                        if (words[2] == "occurrence")
                        {   
                        cout << left << setw(15) << command << ": "
                             << "Delete every row that corresponds with the chosen value inside the chosen column" << endl;


                        cout << left << setw(15) << "Syntax"
                             << ": "
                             << "delete occurrence "
                             << "\033[33m"
                             << "(colomn_chosen) (value_chosen)"
                             << "\033[0m" << endl
                             << endl;
                        }


                        else if (words[2] == "row")
                        {
                        cout << left << setw(15) << command << ": "
                             << "Deletes the (n)th row of the loaded data. The delete command will delete all the row.It will also reduce thetotal number of rows by 1. " << endl;


                                cout
                             << left << setw(15) << "Syntax"
                             << ": "
                             << "delete row "
                             << "\033[33m"
                             << "( (n)th ) "
                             << "\033[0m" << endl
                             << endl;
                        }


                        else if (words[2] == "column")
                        {
                        cout << left << setw(15) << command << ": " << "Deletes the 10th row of the loaded data. The delete command will delete all the row.It will also reduce the total number of rows by 1. " << endl;


                        cout << left << setw(15) << "Syntax"<< ": "<< "delete column "<< "\033[33m" << "(row_chosen) (value_chosen)" << "\033[0m" << endl << endl;
                        }


                        else
                        {cout << "  Syntax error \n  "
                         << "Wrong number of parameters " << endl

                         << endl;
                        printhelp_manualmessage();
                        }
                }

                    else  if (words[1] == "insert")
                    {
                         cout << left << setw(15) << command << ": "
                              << " It will insert the values to the data in memory.The data must have the same format and order of thecolumns in the loaded data in the memory.It will increase the total number of rows by 1. " << endl;

                         cout
                             << left << setw(15) << "Syntax"
                             << ": "
                             << "insert row "
                             << "\033[33m"
                             << "(values)"
                             << "\033[0m" << endl
                             << endl;
                    }

                    else if (words[1] == "replace")
                    {

                         cout << left << setw(15) << command << ": "
                              << "Replaces every chosen number in all the columns with a new number" << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "replace "
                              << "\033[33m"
                              << "(chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;

                         cout << "2nd version of command " << endl;
                         cout << left << setw(15) << command << ": "
                              << "Replaces every chosen number in all the columns with a new number in a chosen column" << endl;

                         cout << left << setw(15) << "Syntax"
                              << ": "
                              << "insert row "
                              << "\033[33m"
                              << "(chosen column) (chosen_number) (new_number)"
                              << "\033[0m" << endl
                              << endl;
                    }
               }
               else
               {
                    cout << "  Syntax error \n  "
                         << "Wrong number of parameters " << endl
                         << endl;
                    printhelp_manualmessage();
               }
          }

          else if (words[0] == "oddrows")
          {

               if (numWords == 1)
               {
                    cout << "  " << command << " is loaded" << endl
                         << endl;
               }
               else
               {
                    cout << "  Syntax error \n  "
                         << "Wrong number of parameters " << endl
                         << endl;
                    printhelp_manualmessage();
               }
          }

          else if (words[0] == "evenrows")
          {

               if (numWords == 1)
               {
                    cout << "  " << command << " is loaded" << endl
                         << endl;
               }
               else
               {
                    cout << "  Syntax error \n  "
                         << "Wrong number of parameters " << endl
                         << endl;
                    printhelp_manualmessage();
               }
          }

          else if (words[0] == "primes")
          {

               if (numWords == 2)
               {
                    cout << "  " << command << " is loaded" << endl
                         << endl;
               }
               else
               {
                    cout << "  Syntax error \n  "
                         << "Wrong number of parameters " << endl
                         << endl;
                    printhelp_manualmessage();
               }
          }

          else if (words[0] == "delete")
          {

               if (numWords == 3 && (words[1] == "row" || words[1] == "column"))
               {
                    cout << "  " << command << " is loaded" << endl
                         << endl;
               }

               else
               {
                    cout << "Wrong number of parameters " << endl
                         << endl;
                    printhelp_manualmessage();
               }
          }

          else if (words[0] == "insert")
          {
               if (numWords >= 2)
               {
                    cout << "  " << command << " is loaded" << endl
                         << endl;
               }
               else

               {
                    cout << "  Syntax error \n  "
                         << "Wrong number of parameters" << endl
                         << endl;
                    printhelp_manualmessage();
               }
          }

          else if (words[0] == "replace")
          {
               if (numWords == 3 || numWords == 4)
               {
                    cout << "  " << command << " is loaded" << endl
                         << endl;
               }
               else
               {
                    cout << "  Syntax error \n  "
                         << "Wrong number of parameters " << endl
                         << endl;
                    printhelp_manualmessage();
               }
          }

          
          else
          {
              /*cout << "  Syntax error \n  "
                         << "Wrong number of parameters " << endl
                         << endl;*/
          }

     } while (command != "exit");
}

int main()
{
     system("clear");
     runInterpreter();

     return 0;
}
