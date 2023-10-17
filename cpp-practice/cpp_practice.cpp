#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;


int max_num(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    // Random Numbers
    const short min_value = 1;
    const short max_value = 6;
    srand(time(nullptr));
    int die_1 = rand() % (max_value - min_value) + 1;
    int die_2 = rand() % (max_value - min_value) + 1;
    cout << "Die 1: " << die_1 << endl << "Die 2: " << die_2 << endl;

    // Text Formatting
    cout << left;
    cout << setw(10) << "Spring" << "Nice" << endl
         << setw(10) << "Summer" << "Hot" << endl;

    // Double formatting
    cout << fixed << setprecision(2) << 12.34567 << endl;

    // Formatting Exercise
    cout << left << setw(15) << "Course" << setw(15) << "Students" << endl;
    cout << left << setw(15) << "C++" << right << setw(15) << "100" << endl;
    cout << left << setw(15) << "JavaScript" << right << setw(15) << "50" << endl;

    // Treating char as number
    char ch = 'a';
    cout << +ch;

    max_num(1, 5);
}
