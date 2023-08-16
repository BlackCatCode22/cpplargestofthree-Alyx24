#include <iostream>

using namespace std;

int main()
{
    cout << "\n\n Welcome to the largest of Three Program!\n\n" << endl;
int num1 = 0;
int num2 = 0;
int num3 = 0;
int largest = 0;

    string userName = "";
    cout<< "\n Please enter your name:";
    cin >> userName;

    //Number Part of Code

    cout << "\n\n Enter First Integer! \n";
    cin >> num1;

    cout << "Enter Second integer:";
    cin >> num2;

    cout << "Enter Third Integer:";
    cin >> num3;

    // This is where we determine the largest number

if (num1 > num2) {
    if (num2 > num3)
    {
        largest = num1;
    }
}else {
if (num2 > num3) {
    largest = num2;
}
else
{
    largest = num3;
    }
}
// Output
  cout << "\n\n Hi, " << userName << "!";
    cout << "\n The largest of " << num1 << ", " << num2 << ", and " << num3 << " is: " << largest << endl;
    cout << "\n\n Thank you for your time ! \n\n";
    return 0;
}
