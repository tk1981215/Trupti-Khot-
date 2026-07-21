#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    vector<string> history;
    int choice;
    double num1, num2, result;

    do
    {
        cout << "\n===== Calculator with History =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. View History\n";
        cout << "6. Save History to File\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result = " << result << endl;
                history.push_back(to_string(num1) + " + " +
                                  to_string(num2) + " = " +
                                  to_string(result));
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result = " << result << endl;
                history.push_back(to_string(num1) + " - " +
                                  to_string(num2) + " = " +
                                  to_string(result));
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result = " << result << endl;
                history.push_back(to_string(num1) + " * " +
                                  to_string(num2) + " = " +
                                  to_string(result));
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                if(num2 == 0)
                {
                    cout << "Division by zero is not allowed.\n";
                }
                else
                {
                    result = num1 / num2;
                    cout << "Result = " << result << endl;
                    history.push_back(to_string(num1) + " / " +
                                      to_string(num2) + " = " +
                                      to_string(result));
                }
                break;

            case 5:
                if(history.empty())
                {
                    cout << "No history available.\n";
                }
                else
                {
                    cout << "\n----- Calculation History -----\n";
                    for(int i = 0; i < history.size(); i++)
                    {
                        cout << i + 1 << ". " << history[i] << endl;
                    }
                }
                break;

            case 6:
            {
                ofstream file("history.txt");

                if(file.is_open())
                {
                    for(string record : history)
                    {
                        file << record << endl;
                    }
                    file.close();
                    cout << "History saved successfully to history.txt\n";
                }
                else
                {
                    cout << "Error opening file.\n";
                }
                break;
            }

            case 7:
                cout << "Thank you for using Calculator.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 7);

    return 0;
}
