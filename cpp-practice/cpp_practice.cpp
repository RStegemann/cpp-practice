#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    // Random Numbers
    const short min_value = 1;
    const short max_value = 6;
    srand(time(nullptr));
    int die_1 = rand() % (max_value - min_value) + 1;
    int die_2 = rand() % (max_value - min_value) + 1;
    cout << "Die 1: " << die_1 << endl << "Die 2: " << die_2 << endl;
    
}
