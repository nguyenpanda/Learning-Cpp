#include <iostream>
#include <chrono>
#include <iomanip>

using namespace std;

int main() {
    // Want to run on Terminal, paste this in the Terminal before "g++ <file name>.cpp"
    /*
    echo 'alias g++="g++ -std=c++11"' >> ~/.bash_profile
    source ~/.bash_profile
    */
    
    auto start = chrono::high_resolution_clock::now();

    // Code to count running time
    int i = 0;
    while (i < 10000000)
    {
        cout << i << endl;
        i++;
    }

    // ...

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::duration<double>>(end - start);

    cout << fixed << setprecision(10)
    << "Program running time: " << duration.count() << " seconds" << endl;
    return 0;
}
