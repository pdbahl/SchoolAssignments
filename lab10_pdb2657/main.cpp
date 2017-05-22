/* 
 * File:   main.cpp
 * Author: pdb2657
 *
 * Created on March 5, 2015, 1:28 PM
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdlib>
#include <ctime>



using namespace std;

class car {
    public:
        car();
        car(char initCar);
        void moveCar();
        char returnCar();
        int returnLocation();
        
    private:
        char carChosen;
        int location;
        
};
void displayCars(car cars[],int numCars);
car::car(){location = 0;carChosen = 'X';}
car::car(char initCar){location = 0;carChosen = initCar;}
void car::moveCar(){location+=rand()%3+rand()%3+1;}
int car::returnLocation(){return location;}
char car::returnCar(){return carChosen;}
int main() {

    srand((unsigned)time(NULL));
    car *cars = NULL;
    int numCars,trackLength;
    bool race = true;
    long start = 0;
    
    cout << "Enter the number of cars (needs to be >1)";
    cin >> numCars;
    cout << "Enter the track length (suggest >10)";
    cin >> trackLength;
    
    cars = new car[numCars];
    
    for(int i = 0,c ='A';i<numCars;i++,c++){
        cars[i]=car(c);
    }
    while(race){
        displayCars(cars, numCars);
        
        for(int i = 0; i < numCars;i++){
            cars[i].moveCar();
        }
        
        while(start == time(NULL));
        start = time(NULL);
        while(start==time(NULL));
        
        for(int i = 0;i<numCars;i++){
            if(cars[i].returnLocation()>=trackLength){
                race = false;
                break;
            }
        }
        
      
        
        
    }
    
    displayCars(cars, numCars);
    int max = cars[0].returnLocation();
    for(int i = 0;i<numCars;i++){
        if(cars[i].returnLocation()>max){
            max = cars[i].returnLocation()<<' ';
        
        }
    }
    
    cout << "Winners: ";
    for(int i =0;i<numCars;i++){
        if(cars[i].returnLocation() == max){
            cout << cars[i].returnCar() << ' ';
        
        }
    }cout << endl;
    
    delete []cars;
    return 0;
}

void displayCars(car cars[],int numCars){
    system("clear");
    for(int i = 0;i<numCars;i++){
        cout << setfill('*')<<right<<setw(cars[i].returnLocation())<<cars[i].returnCar()<<endl;
    }
}
