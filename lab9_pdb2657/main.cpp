#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
    string test;
    cout << "Enter a source file name: ";
    string inputFilename;
    cin >> inputFilename;
    
    cout << "Enter a target file name: ";
    string outputFilename;
    cin >> outputFilename;
    
    ifstream input(inputFilename.c_str());
    ofstream output(outputFilename.c_str());
    
    if(input.fail()){
        cout << inputFilename << " does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }
    getline(input,test);
    while(!input.eof()){
        getline(input,test);
        output << test;
        
    }
    
    input.close();
    output.close();
    
    cout << "\n Copy Done" << endl;
    return 0;
    
    
    
    
}

















