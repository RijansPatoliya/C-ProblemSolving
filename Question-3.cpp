//3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.

#include<stdio.h>
int main(){
	int side1,side2,side3;
	
	 printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

   
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is equilateral.\n");
    }
    
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is isosceles.\n");
    }
    
    else {
        printf("The triangle is scalene.\n");
    }

    return 0;
}



