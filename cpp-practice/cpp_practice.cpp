#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;


int max_num(int a, int b)
{
    return a < b ? a : b;
}

struct Customer
{
    int id;
    string name;
    string email;

    /*bool operator==(const Customer& other) const
    {
        return(id == other.id &&
            name == other.name &&
            email == other.email);
    }*/
};

int get_input(string displayMessage)
{
    int var;
    while(true)
    {
        cout << displayMessage;
        cin >> var;
        if(cin.fail())
        {
            cout << "Enter a valid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }else break;
    }
    return var;
}

bool operator==(const Customer& first, const Customer& second)
{
    return(first.id == second.id &&
        first.name == second.name &&
        first.email == second.email);
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
    cout << +ch << endl;

    max_num(1, 5);

    // Structs and Operator overloading
    Customer a;
    Customer b;
    if(a == b) // Can be defined either a member or non-member. Some operators are only available as non-members. Check cppreference.
    {
        
    }

    // Stream reading
    //int x = get_input("Please enter a number: ");

    // File streams
    ofstream file;
    file.open("data.txt");
    if(file.is_open())
    {
        file << "Hello World\n"; // Better to use \n instead of endl, for performance. Prevents unnecessary buffer flush.
        file.close();
    }

    ifstream readFile;
    readFile.open("data.txt");
    if(readFile.is_open())
    {
        while(!readFile.eof())
        {
            string data;
            //readFile >> data; // Reads until delimiter
            getline(readFile, data, ' '); // reads entire line or until character specified in delimiter
            cout << data << endl;
        }
        readFile.close();
    }

    // Use this to read, write (append) to a file, instead of using separate streams
    // ifstream and ofstream just assume a specific open-mode
    fstream readWriteFile;
    file.open("data.txt", ios::in | ios::out | ios::app); 
    file.close();
}

