#include <stdio.h>

#define PI 3.14
double surf(double); //This is funciton prototype
void print(double);

int main(){
  
  double r; // This is variable for radius
  
  //Read the radius from keyboard
  printf("Please enter radius: ");
  scanf("%lf" , &r );

  //Calculate the surgace by means of funciton call
  double s = surf(r); // This is the function call (call by value)

  print(s);

  return 0;

}

//A function that calculates the surface of a function.
//Function description
double surf(double a){
	double srf = PI * a * a;
	return srf; 

}

// This function prints the output.
 void print(double b){
 	printf("The surface of circle = %lf\n" , b);
 }