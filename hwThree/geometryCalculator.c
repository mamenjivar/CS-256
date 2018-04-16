/*
 * GeometryCalculator.c
 * Course: CS 256
 * Assignment: HW #3.1
 * Geometry Calculator
 *
 *  Date: Apr 15, 2018
 *      Author: Miguel Menjivar
 */
#include <stdio.h>

double areaCircle(int radius);
int areaRectangle(int length, int width);
double areaTriangle(int base, int height);

double PI = 3.14159;

int main() {
	int choice = 0;
	int radius;
	int length;
	int width;
	int height;
	int base;

	while (choice != 4) {
		printf("Geometry Calculator\n\n");
		// menu choices
		printf("1. Calculate the Area of a Circle\n");
		printf("2. Calculate the Area of a Rectangle\n");
		printf("3. Calculate the Area of a Triangle\n");
		printf("4. Quit\n");
		printf("Enter your choice (1-4): ");

		// keyboard input
		fflush(stdout);
		scanf("%d", &choice);

		if(choice == 1){
			printf("\nArea of a Circle Calculator\n");

			printf("Please enter the radius of Circle: ");
			fflush(stdout);
			scanf("%d", &radius);

			double areaC = areaCircle(radius);
			if(areaC == -1)
				printf("Can't use negative values\n\n");
			else
				printf("Area of the Circle is: %.2f\n\n", areaC);
		}
		else if(choice == 2){
			printf("\nArea of a Rectangle Calculator\n");

			printf("Please enter length of Rectangle: ");
			fflush(stdout);
			scanf("%d", &length);

			printf("Please enter width of Rectangle: ");
			fflush(stdout);
			scanf("%d", &width);

			int areaR = areaRectangle(length, width);
			if(areaR == -1)
				printf("Can't use negative values\n\n");
			else
				printf("The area of the Rectangle is: %d\n\n", areaR);

		}
		else if(choice == 3){
			printf("\nArea of a Triangle\n");

			printf("Please enter the base of Triangle: ");
			fflush(stdout);
			scanf("%d", &base);

			printf("Please enter the height of Triangle: ");
			fflush(stdout);
			scanf("%d", &height);

			double areaT = areaTriangle(base, height);
			if(areaT == -1)
				printf("Can't use negative values\n\n");
			else
				printf("The area of the Triangle is: %.2f\n\n", areaTriangle(base, height));
		}
		else if(choice == 4){
			printf("Exit program\n");
		}
		else{
			printf("Invalid choice\n\n");
		}
	}

	return 0;
}

/**
 * Area of Circle
 */
double areaCircle(int radius){
	if(radius < 0)
		return -1;
	else
		return PI * (radius * radius);
}

/*
 * Area of Rectangle
 */
int areaRectangle(int length, int width){
	if((length < 0) || (width < 0))
		return -1;
	else
		return length * width;
}

/**
 * Area of Triangle
 */
double areaTriangle(int base, int height){
	if((base < 0) || (height < 0))
		return -1;
	else
		return (base * height) * .5;
}
