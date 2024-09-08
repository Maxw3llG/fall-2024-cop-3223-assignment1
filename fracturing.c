#include<stdio.h>
#include<math.h>



// functions we'll be using
 double distformula(){
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;

    scanf("%d\n", &x1);
    printf("Enter X1: %d\n", x1);

    scanf("%d\n", &x2);
    printf("Enter X2: %d\n", x2);

    scanf("%d\n", &y1);
    printf("Enter y1: %d\n", y1);

    scanf("%d\n", &x2);
    printf("Enter y2: %d\n", x2); 
        
        
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

//     double distance = arg1;
//     


//     return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))



// function should produce x1,y1,x2,y2 and distance between points
 //double calculateDistance();{
    

    
    
//     double__=__;

//     return__;
//  }
 // function should produce x1,y1,x2,y2 and perimeter of enclosed space based on previous points 
//  double calculatePerimeter();{
//      double__=__;

//      return__;
//  }

 // function should produce x1,y1,x2,y2 and area of enclosed space
// double calculateArea/();{
//     double__=__;
   
//     return__;

//}


//function produces x1,y1,x2,y2 and width of enclosed space
// double calculateWidth/();{
//     double__=__;
//     return__;
// }
// function produces x1,y1,x2,y2 and height of enclosed space
// double calculateHeight();[
//     double__=__;
//     return__;
//]

// function



int main(int argc, char **argv){

    double distance = distformula();


    return 0;
}