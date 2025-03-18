#include <iostream>
using namespace std;

void printSpaces (int spacesNeeded){
    for(int i = 0; i < spacesNeeded; i++){
        printf(" ");
    }
}

double factorial (double input){
    double output = 1;
    for (int i = 1; i <= input; i++ ){
       output = i * output;
    }

    return output;
}

void printFloor(double currentFloor){
    double n = currentFloor;
    double nFactorial = factorial(currentFloor);
    double k = 0;

    for(double j = 0; j <= currentFloor; j++){
        double kFactorial = factorial(k);
        double pascalNumber = nFactorial / (kFactorial * factorial(n - k));
        cout << pascalNumber << " ";
        k++;
    }

    printf("\n");
}

void pascalTriangleWritter (double floors){
    double spaces = floors;
    double currentFloor = 0;

   for (double i = 0; i < floors; i++) {
      printSpaces(spaces - i);
      printFloor(currentFloor);
      currentFloor++;
   }
}

int main (){
    cout << " -------------------------\n";
    cout << "| Pascal Triangle writter |\n";
    cout << " -------------------------\n\n";

    double floors = 0;
    cout << "Please insert total amount of floors to be printed: ";
    cin >> floors; printf("\n");
    pascalTriangleWritter(floors);
    return 0;
}
