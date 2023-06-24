#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream file("read.txt");
    file << "This is how read and write a file !";
    file.close();
    string text;
    ifstream readfile("read.txt");
    while (getline(readfile, text))
    {
        cout << text;
    }
    readfile.close();
}