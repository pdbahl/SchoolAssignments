// Author : Phillip Bahlinger
// CLID : pdb2657
// CMPS 260
// Programming Project : #1
// Due Date : 2/25
// Due Time : 11:55 PM
// Program Description: stores values of a read file into arrays and displays stats about that said data
// Certificate of Authenticity:   (Choose one of the two following forms:)I certify that the code in the implemented constructors and functions and the demonstration code 
//in function main of this project are entirely my own work. 
#include <iostream>
#include <fstream>
using namespace std;
void loadData(int&hos, double ami[], double copd[], double hf[], double pn[], double stk[]);
void writeData(int, double[], string);
void askUser(int&hos, double[], double[], double[], double[], double[]);
void sortStuff(double[], int);

int main() {
    int hos;
    double AMI[5000];
    double COPD[5000];
    double HF[5000];
    double PN[5000];
    double STK[5000];
    askUser(hos, AMI, COPD, HF, PN, STK);
    return 0;
}

void loadData(int &hos, double ami[], double copd[], double hf[], double pn[], double stk[]) {
    ifstream infile;
    infile.open("hm.txt");
    double score;
    string mort;
    infile >> hos >> mort >> score;
    while (infile) {
        if (mort == "MORT_30_AMI") {
            ami[hos] = score;
        }
        if (mort == "MORT_30_COPD") {
            copd[hos] = score;
        }
        if (mort == "MORT_30_HF") {
            hf[hos] = score;
        }
        if (mort == "MORT_30_PN") {
            pn[hos] = score;
        }
        if (mort == "MORT_30_STK") {
            stk[hos] = score;
        }

        infile >> hos >> mort >> score;
    }
    infile.close();
}

void writeData(int array_length, double array[], string ill) {
    int NOC = 0, NAM = 0, count_1 = 0;
    double sum = 0, MS = 0, AVG = 0, MDN = 0;
    for (int i = 0; i <=array_length-1; i++) {
        if (array[i] > 0) {
            NOC++;
            sum += array[i];
        }
        if (array[i] > MS) {
            NAM = i;
            MS = array[i];
        }
        if (array[i] < 1) {
            count_1++;
        }
    }
    AVG = sum / (NOC);
    sortStuff(array, array_length);
    MDN = array[((array_length - count_1) / 2) + count_1];
    cout << "Number of " << ill << "Scores Reported: " << NOC << endl;
    cout << "Maximum " << ill << "Score: " << MS << endl;
    cout << "Hospitals with maximum " << ill << "Score: " << NAM << endl;
    cout << "Average Score for " << ill << ": " << AVG << endl;
    cout << "Median Score for " << ill << ": " << MDN << endl;
}

void askUser(int &hos, double ami[], double copd[], double hf[], double pn[], double stk[]) {
    loadData(hos, ami, copd, hf, pn, stk);
    int userInput;
    bool cont = true;
    cout << "1­MORT_30_AMI, 2­MORT_30_COPD, 3­MORT_30_HF, 4­MORT_30_PN, 5­MORT_30_STK, 0­Exit: ";
    cin >> userInput;
    while (cont) {
        if (userInput == 1) {
            writeData(hos, ami, "MORT_30_AMI");
        } else if (userInput == 2) {
            writeData(hos, copd, "MORT_30_COPD");
        } else if (userInput == 3) {
            writeData(hos, hf, "MORT_30_HF");
        } else if (userInput == 4) {
            writeData(hos, pn, "MORT_30_PN");
        } else if (userInput == 5) {
            writeData(hos, stk, "MORT_30_STK");
        } else if (userInput == 0) {
            exit(0);
        }
        cout << endl << "1­MORT_30_AMI, 2­MORT_30_COPD, 3­MORT_30_HF, 4­MORT_30_PN, 5­MORT_30_STK, 0­Exit: ";
        cin >> userInput;
    }
}

void sortStuff(double array[], int list_size) {
    double temp;
    for (int i = 0; i < list_size - 1; i++) {
        for (int j = i + 1; j < list_size; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
