#include<iostream>
#include<cmath>


using namespace std;

double areaOfSquare(double length){
    return length*length;
}
double areaOfRectangle(double length, double width){
    
   return length*width;

}
double areaOfTriangle(double base, double height){
       return base*height;
}


int main(){
    
    
    int selection;
    do {
        cout << "Select a shape to calculate its area:\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit selection\n";
        cout << "Enter your selection:1,2,3,4: ";
        cin >> selection;

        switch (selection) {
            case 1: {
                double length;
                cout << "Enter length of the square: ";
                cin >> length;
                cout << "Area of square: " << areaOfSquare(length) << endl;
                break;
            }
            case 2: {
                double length,width;
                cout << "Enter side length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of a rectangle: " << areaOfRectangle(length, width) << endl;
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter base and height of the triangle: ";
                cin >> base >> height;
                cout << "Area of triangle: " << areaOfTriangle(base, height) << endl;
                break;
            }
         
            default:
                cout << "Quit the selection\n";
        }
          cout << "Do you want to calculate another shape? (y/n): ";
        cin >> selection;
    } while (selection== 'y' || selection == 'Y');
    return 0;
}
