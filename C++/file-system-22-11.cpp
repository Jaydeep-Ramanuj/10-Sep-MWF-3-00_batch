#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // Reading data from file

    // string data;
    // ifstream inp_file("data.txt");

    // getline(inp_file, data);

    // cout << data;

    // Writing data to file

    // ofstream out_file("data.txt");
    // out_file << "This is new data";

    // Appending data to file

    ofstream out_file("data.txt", ios::app);
    out_file << "\nThis is latest data";

    out_file.close();

    return 0;
}