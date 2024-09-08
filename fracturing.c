//********************************************************
// fracturing.c
// Author: Maxwell Gayle UCFID: 5541935
// Date: 9/7/24
// Class: COP 3223, Professor Parra
// Purpose: This program prints a specific message to the
// command line. The main purpose of this assignment is to
// check and see whether I can connect to the Codespaces Server.
// Input: Point #1 and Point #2
//
// Output: (to the command line) A brief Message
// //********************************************************


#include<stdio.h>
#include<math.h>
#define PI 3.14159


// Helper function to isolate distance formula
double distFormula(){   
    
    int x1 = 0;     // Declare and initialize Point #1   
    int x2 = 0;
    
    int y1 = 0;     // Declare and initialize Point #2
    int y2 = 0;

   // Prints Point #1 coordinates
   
   scanf("%d %d", &x1, &y1);
   printf("- Point #1 entered: x1 = %d; y1 = %d\n", x1, y1);

   // Prints Point #2 coordinates
   
   scanf("%d %d", &x2, &y2);
   printf("- Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);
    
        
    // Calculates distance/diameter 
    
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}   // distFormula


// produces x1, x2, y1, y2 and the distance between 2 points
double calculateDistance(){
    
    // Calculates and prints distance
    
    double distance = distFormula();       
    printf("- The distance between the 2 points is %.3f\n", distance);

    return 1.0;
}   // calcDistance
 
 
 // produces x1, x2, y1, y2 and the perimeter of enclosed space
 double calculatePerimeter(){
     
    // Calculates and prints perimeter
   
    double perimeter = PI * distFormula();        
    printf("- The perimeter of the city encompassed by your request is %.3f\n", perimeter);

    return 1.0; 
    }   // calcPerimeter


// produces x1, x2, y1, y2 and area of enclosed space
double calculateArea(){

    // Calculates radius
     
    double radius = 0.5 * distFormula();
     
     // Calculates and prints area
     
     double area = PI * pow(radius, 2);
     printf("- The area of the city encompassed by your request is %.3f\n", area);
   
    return 2.0;
    }   // calcArea


// produces x1, x2, y1, y2 and width of enclosed space
double calculateWidth(){
    
    // Calculates and prints width
    
    double width = distFormula();
    printf("- The width of the city encompassed by your request is %.3f\n", width);
   
    return 1.0;
    }   //calcWidth


// produces x1, x2, y1, y2 and height of enclosed space
double calculateHeight(){
    
    // Calculates and prints height

    double height = distFormula(); 
    printf("- The height of the city encompassed by your request is %.3f\n", height);
    
return 1.0;
}   //calcHeight
 
 
 int main(int argc, char **argv){

    // Calling functions
    double getDistance = calculateDistance();
    double getPerimeter = calculatePerimeter();
    double getArea = calculateArea();
    double getWidth = calculateWidth();
    double getHeight = calculateHeight();


    return 0;
}   // main 