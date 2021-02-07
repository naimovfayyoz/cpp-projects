#include<iostream>
#include<cmath>
using namespace std;
const double  PI = 3.1415;//global constant
double square_area();
double square_perimeter();
double circle_area();
double circle_circumference();
double rectangle_area();
double rectangle_perimeter();
double rhombus_area();
double rhombus_perimeter();
double triangle_area();
double triangle_perimeter();
double paralelogram_area();
double paralelogram_perimeter();
double trapezoid_area();
double trapezoid_perimeter();
void cube();
void prisma_volume();
void prisma_surface();
void pyramid_volume();
void pyramid_surface();
void cylinder_volume();
void  cylinder_surface();
void paralepiped_volume();
void paralepiped_surface();
void conus_volume();
void conus_surface();
void  sphere_volume();
void sphere_surface();




int main() {
	cout << "          ************************************************\n"
		<<"          ************* GEOMETRIC CALCULATOR *************\n"
		<<"          ************************************************\n\n"
		<< "(1)Planimetric objects             (2)Stereometric objects              (0)quit\n";
	int choose_section, choice;
start:
	cin >> choose_section;

	//system("cls");
	switch (choose_section)
	{
	case 1:
		cout << "1) Perimeter and Area of a Square\n\n"
			<< "2) Perimeter and Area of a Triangle\n\n"
			<< "3) Circumference and Area of a Circle\n\n"
			<< "4) Perimeter and Area of a Rectangle\n\n"
			<< "5) Perimeter and Area of a Rhombus\n\n"
			<< "6) Perimeter and Area of a Trapezoid\n\n"
			<< "7) Perimeter and Area of a Parallelogram\n\n"
			<< "0) Back\n";
		int function;

		cin >> function;
		//system("cls");
		if (function == 1) {
			cout << "Do you want to calculate this figure's area or perimeter?\n\n"
				<< "1) Area                     2) Perimeter\n";
			cin >> choice;
			if (choice == 1) {
				square_area();
			}
			else
				square_perimeter();
		}
		if (function == 2) {
			cout << "Do you want to calculate this figure's area or perimeter?\n"
				<< "1) Area                      2) Perimeter\n";
			cin >> choice;
			if (choice == 1) {
				triangle_area();
			}
			else
				triangle_perimeter();
		}
		if (function == 3) {
			cout << "Do you want to calculate this figure's area or circumference?\n"
				<< "1) Area                   2) Circumference\n";
			cin >> choice;
			if (choice == 1)
				circle_area();
			if (choice == 2)
				circle_circumference();
		}
		if (function == 4) {
			cout << "Do you want to calculate this figure's area or perimeter?\n"
				<< "1) Area                  2) Perimeter\n";
			cin >> choice;
			if (choice == 1) {
				rectangle_area();
			}
			else
				rectangle_perimeter();
		}
		if (function == 5) {
			cout << "Do you want to calculate this figure's area or perimeter?\n"
				<< "1) Area                  2) Perimeter\n";
			cin >> choice;
			if (choice == 1) {
				rhombus_area();
			}
			else
				rhombus_perimeter();
		}
		if (function == 6) {
			cout << "Do you want to calculate this figure's area or perimeter?\n"
				<< "1) Area                  2) Perimeter\n";
			cin >> choice;
			if (choice == 1)
				trapezoid_area();
			else
				trapezoid_perimeter();
		}
		if (function == 7) {
			cout << "Do you want to calculate this figure's area or perimeter?\n"
				<< "1) Area                  2) Perimeter\n";
			cin >> choice;
			if (choice == 1)
				paralelogram_area();
			else
				paralelogram_perimeter();
		}
		if (function == 0) {
			goto start;
		}




		break;
	case 2:
		cout << "1) Surface and Volume of the Cube\n\n"
			<< "2) Surface and Volume of the Prism\n\n"
			<< "3) Surface and Volume of the Pyramid\n\n"
			<< "4) Surface and Volume of the Cylinder\n\n"
			<< "5) Surface and volume of the Parallelepiped\n\n"
			<< "6) Surface and Volume of the Cone\n\n"
			<< "7) Surface and Volume of the Sphere\n\n";
		int function1;
		cin >> function1;
		if (function1 == 1)
		{
			cube();
		}
		if (function1 == 2)
		{
			int choice;
			cout << "Do you want to calculate this figure's volume or surface?\n"
				<< "1) Volume                      2) Surface\n";
			cin >> choice;
			if (choice == 1)
				prisma_volume();
			if (choice == 2)
				prisma_surface();
		}
		if (function1 == 3) {
			int choice;
			cout << "Do you want to calculate this figure's volume or surface?\n"
				<< "1) Volume                       2) Surface\n";
			cin >> choice;
			if (choice == 1)
				pyramid_volume();
			if (choice == 2)
				pyramid_surface();
		}
		if (function1 == 4) {
			int choice;
			cout << "Do you want to calculate this figure's volume or surface?\n"
				<< "1) Volume                       2) Surface\n";
			cin >> choice;
			if (choice == 1)
				cylinder_volume();
			if (choice == 2)
				cylinder_surface();
		}
		if (function1 == 5) {
			int choice;
			cout << "Do you want to calculate this figure's volume or surface?\n"
				<< "1) Volume                       2) Surface\n";
			cin >> choice;
			if (choice == 1)
				paralepiped_volume();
			if (choice == 2) {
				paralepiped_surface();
			}
			if (function1 == 6)
				int choice;
			cout << "Do you want to calculate this figure's volume or surface?\n"
				<< "1) Volume                       2) Surface\n";
			if (choice == 1)
				conus_volume();
			if (choice == 2)
				conus_surface();
		}
		if (function1 == 7) {
			int choice;
			cout << "Do you want to calculate this figure's volume or surface?\n"
				<< "1) Volume                       2) Surface\n";
			cin >> choice;
			if (choice == 1)
				sphere_volume();
			if (choice == 2)
				sphere_surface();
		}
		break;


	}
	system("pause");
	return 0;

}
double square_area() {
	double side, diagonal, area, option;

	cout << "Here are 2 different ways to find area of square.\n In order to know which way fits you, just make clear what square's values you have.\n" << endl;
	cout << "Choose one of the following options\n ";
	cout << "1) By its side\n"
		<< "2) By its diagonal\n";
	cin >> option;
	if (option == 1) {
		cout << "Input the value of square's side: ";
		cin >> side;
		while (side <= 0) {
			cout << "Please, input the value of the side CORRECTLY!\n";
			cin >> side;
		}
		area = pow(side, 2);

		cout << "Area of the square that has a side of " << side << "  is:  " << area << endl;
	}
	if (option == 2) {
		cout << "Input the value of square's diagonal: ";
		cin >> diagonal;
		while (diagonal <= 0) {
			cout << "Please, input the value of the diagonal CORRECTLY!\n";
			cin >> diagonal;
		}
		area = pow(diagonal, 2) / 2;
		cout << "Area of the square that has a diagonal of " << diagonal << "  is:  " << area << endl;
	}
	return area;
}
double square_perimeter()
{
	double side, diagonal, perimeter, option;

	cout << "Here are 2 different ways to find perimeter of the square.\n In order to know which way fits you, just make clear what square's values you have.\n" << endl;
	cout << "Choose one of the following options\n ";
	cout << "1) by side\n"
		<< "2) by diagonal\n";
	cin >> option;
	if (option == 1) {
		cout << "Input the value of square's side: ";
		cin >> side;
		while (side <= 0) {
			cout << "Please, input the value of side CORRECTLY!\n";
			cin >> side;
		}
		perimeter = 4 * side;
		cout << "Perimeter of the square that has a side of " << side << "  is:  " << perimeter << endl;
	}
	if (option == 2) {
		cout << "Input the value of square's diagonal: ";
		cin >> diagonal;
		while (diagonal <= 0) {
			cout << "Please, input the value of diagonal CORRECTLY!\n";
			cin >> diagonal;
		}
		perimeter = 4 * diagonal / sqrt(2);
		cout << "Perimeter of the square that has a diagonal of " << diagonal << "  is:  " << perimeter << endl;
	}
	return perimeter;
}
double circle_area() {
	double radius, area;
	cout << "Input the value of the circle's radius: ";
	cin >> radius;
	while (radius <= 0) {
		cout << "Input the CORRECT value of the circle's radius: ";
		cin >> radius;
	}
	area = PI * pow(radius, 2);
	cout << "Area of the circle that has a radius of " << radius << "  is:  " << area << endl;
	return  area;
}
double circle_circumference() {
	double radius, circumference;
	cout << "Input the value of the circle's radius: ";
	cin >> radius;
	while (radius <= 0) {
		cout << "Input the CORRECT value of the circle's radius: ";
		cin >> radius;
	}
	circumference = 2 * PI * radius;
	cout << "Circumference of the circle that has a radius of " << radius << "  is:  " << circumference << endl;

	return  circumference;

}
double rectangle_area() {
	double side1, side2, perimeter, area;
	cout << "Input the value of rectangle's first side: ";
	cin >> side1;
	while (side1 <= 0) {
		cout << "Please,make sure that you INPUT the side correctly\n";
		cin >> side1;
	}
	cout << "Input the value of rectangle's second side: ";
	cin >> side2;
	while (side2 <= 0) {
		cout << "Please,make sure that you INPUT the side correctly\n";
		cin >> side2;

	}
	area = side1 * side2;
	cout << "Area of the rectangle that has sides of " << side1 << " and " << side2 << "  is:  " << area << endl;
	return area;
}
double rectangle_perimeter() {
	double side1, side2, perimeter, area;
	cout << "Input the value of rectangle's first side: ";
	cin >> side1;
	while (side1 <= 0) {
		cout << "Please,make sure that you INPUT the side correctly\n";
		cin >> side1;
	}
	cout << "Input the value of rectangle's second side: ";
	cin >> side2;
	while (side2 <= 0) {
		cout << "Please,make sure that you INPUT the side correctly\n";
		cin >> side2;

	}
	perimeter = 2 * (side1 + side2);
	cout << "Perimeter of the rectangle that has sides of " << side1 << " and " << side2 << "  is:  " << perimeter << endl;
	return perimeter;
}
double rhombus_area() {
	double angle, diagonal1, diagonal2, height, side, area, option;
	cout << "Here are 3 different ways to find area of a rhombus.\n In order to know which way fits you, just make clear what rhombus's values you have.\n" << endl;
	cout << "Choose one of the following options\n ";
	cout << "1) side and angle\n"
		<< "2) two diagonals\n"
		<< "3) base and height\n";
	cin >> option;
	if (option == 1) {
		cout << "Input the angle: ";
		cin >> angle;
		while (angle <= 0 || angle >= 180) {
			cout << "Please, input the angle correctly: ";
			cin >> angle;
		}cout << "Input the side: ";
		cin >> side;
		while (side <= 0) {
			cout << "Please, input the side correctly: ";
			cin >> side;
		}

		area = sin(angle * PI / 180) * pow(side, 2);
		cout << "The area of the rhombus is " << area << endl;
	}
	if (option == 2) {
		cout << "Input the first diagonal: ";
		cin >> diagonal1;
		while (diagonal1 <= 0) {
			cout << "Please, input the amount of diagonal correctly: ";
			cin >> diagonal1;
		}
		cout << "Input the second diagonal: ";
		cin >> diagonal2;
		while (diagonal2 <= 0) {
			cout << "Please, input the amount of diagonal correctly: ";
			cin >> diagonal2;
		}
		area = diagonal1 * diagonal2 / 2;
		cout << "The area of the rhombus is: " << area << endl;
	}

	if (option == 3) {
		cout << "Input the amount of base: ";
		cin >> side;
		while (side <= 0) {
			cout << "Please, input the amount of base correctly: ";
			cin >> side;
		}
		cout << "Input the amount of base height: ";
		cin >> height;
		while (height <= 0) {
			cout << "Please, input the amount of height correctly: ";
			cin >> height;
		}
		area = side * height;
		cout << "The area of the rhombus is: " << area << endl;
	}

	return area;
}
double rhombus_perimeter() {
	double angle, diagonal1, diagonal2, height, side, perimeter, option;
	cout << "Here are 2 different ways to find perimeter of a rhombus.\n In order to know which way fits you, just make clear what rhombus's values you have.\n" << endl;
	cout << "Choose one of the following options\n ";
	cout << "1) by sides\n"
		<< "2) by two diagonals\n";
	cin >> option;
	if (option == 1) {
		cout << "Input the amount of the side: ";
		cin >> side;
		while (side <= 0) {
			cout << "Please, input the amount of the side correctly : ";
			cin >> side;
		}

		perimeter = 4 * side;
		cout << "The perimeter of the rhombus is " << perimeter << endl;
	}
	if (option == 2) {
		cout << "Input the amount of first diagonal: ";
		cin >> diagonal1;
		while (diagonal1 <= 0) {
			cout << "Please, input the amount of diagonal correctly : ";
			cin >> diagonal1;
		}
		cout << "Please, input the amount of second diagonal : ";
		cin >> diagonal2;
		while (diagonal2 <= 0) {
			cout << "Please, input the amount of diagonal correctly: ";
			cin >> diagonal2;
		}
		perimeter = sqrt(pow(diagonal1, 2) + pow(diagonal2, 2)) * 2;
		cout << "The perimeter of the rhombus is: " << perimeter << endl;
	}
	return perimeter;

}
double triangle_area() {
	double side1, side2, side3, angle, height, area, p, option;
	cout << "Here are 3 different ways to find area of a triangle.\n In order to know which way fits you, just make clear what triangle's values you have.\n" << endl;
	cout << "Choose one of the following options\n ";
	cout << "1)by  two sides and angle between them\n"
		<< "2) by 3 sides\n"
		<< "3) by base and height\n";
	cin >> option;
	if (option == 1) {
		cout << "Input the angle: ";
		cin >> angle;
		while (angle <= 0 || angle >= 180) {
			cout << "Please, input the amount of angle correctly  ";
			cin >> angle;
		}
		cout << "Input the side: ";
		cin >> side1;
		while (side1 <= 0) {
			cout << "Please, input the amount of side correctly  ";
			cin >> side1;
		}
		cout << "Input the another side: ";
		cin >> side2;
		while (side2 <= 0) {
			cout << "Please, input the amount of side correctly  ";
			cin >> side2;
		}

		side3 = sqrt(pow(side1, 2) + pow(side2, 2) - 2 * side1 * side2 * cos(angle * PI / 180));
		area = side1 * side2 * sin(angle * PI / 180) / 2;
		cout << "The area of the given triangle is  " << area << endl;
	}
	if (option == 2) {
		cout << "Input the 3 sides of a triangle: ";
		cin >> side1 >> side2 >> side3;
		while (side1 && side2 && side3 <= 0 || side1 + side2 <= side3 || side2 + side3 <= side1 || side3 + side1 <= side2) {
			cout << "Please, check the given values and input again: ";
			cin >> side1 >> side2 >> side3;
		}
		p = (side1 + side2 + side3) / 2;
		area = sqrt(p * (p - side1) * (p - side2) * (p - side3));
		//perimeter = side1 + side2 + side3
		cout << "The area of the given triangle is  " << area << endl;
	}
	if (option == 3) {
		cout << "Input the amount of height    \n";
		cin >> height;

		while (height <= 0) {
			cout << "Please, input the correct height of the triangle\n";
			cin >> height;
		}
		cout << "Input the amount of base\n";
		cin >> side1;
		while (side1 <= 0) {
			cout << "Please, input the correct base of the triangle\n";
			cin >> side1;
		}
		area = side1 * height / 2;
		cout << "The area of the given triangle is  " << area << endl;
	}
	return area;
}
double triangle_perimeter() {
	double side1, side2, side3, angle, height, area, p, perimeter, option;
	cout << "Here are 2 different ways to find perimeter of a triangle.\n In order to know which way fits you, just make clear what triangle's values you have.\n" << endl;
	cout << "Choose one of the following options\n ";
	cout << "1)by  two sides and angle between them\n"
		<< "2) by 3 sides\n";
	cin >> option;
	if (option == 1) {
		cout << "Input the angle: ";
		cin >> angle;
		while (angle <= 0 || angle >= 180) {
			cout << "Please, input the correct amount of angle: ";
			cin >> angle;
		}
		cout << "Input the amount of side: ";
		cin >> side1;
		while (side1 <= 0) {
			cout << "Please,check the given value: ";
			cin >> side1;
		}
		cout << "Input the another side: ";
		cin >> side2;
		while (side2 <= 0) {
			cout << "Please, check the given value : ";
			cin >> side2;
		}

		side3 = sqrt(pow(side1, 2) + pow(side2, 2) - 2 * side1 * side2 * cos(angle * PI / 180));
		perimeter = side1 + side2 + side3;

		cout << "The perimeter is  " << perimeter << endl;
	}
	if (option == 2) {
		cout << "Input the 3 sides of a triangle: ";
		cin >> side1 >> side2 >> side3;
		while (side1 && side2 && side3 <= 0 || side1 + side2 <= side3 || side2 + side3 <= side1 || side3 + side1 <= side2) {
			cout << "Please, check the given values and input again: ";
			cin >> side1 >> side2 >> side3;
		}
		p = (side1 + side2 + side3) / 2;
		area = sqrt(p * (p - side1) * (p - side2) * (p - side3));
		perimeter = side1 + side2 + side3;

		cout << "The perimeter is  " << perimeter << endl;
	}
	return perimeter;
}
double paralelogram_area() {
	double side1, side2, diagonal1, diagonal2, angle, height, area, perimeter, option;
	cout << "Here are 3 different ways to find area of a paralellogram. In order to know which way fits you, just make clear what paralellogram's values you have.\n" << endl;
	cout << "Choose one of the following options\n ";
	cout << "1)by  two sides and angle between them\n"
		<< "2) by 2 diagonals and angle between them\n"
		<< "3) by base and height\n";
	cin >> option;
	if (option == 1) {
		cout << "Input the angle: ";
		cin >> angle;
		while (angle <= 0 || angle >= 180) {
			cout << "Input the angle correctly: ";
			cin >> angle;
		}
		cout << "Input the side: ";
		cin >> side1;
		while (side1 <= 0) {
			cout << "Please,check the given value: ";
			cin >> side1;
		}
		cout << "Input the another side: ";
		cin >> side2;
		while (side2 <= 0) {
			cout << "Please, check the given value : ";
			cin >> side2;
		}
		area = side1 * side2 * sin(angle * PI / 180) / 2;
		cout << "The area of the given paralellogram is  " << area << endl;
	}
	if (option == 2) {
		cout << "Input the diagonal: ";
		cin >> diagonal1;
		while (diagonal1 <= 0) {
			cout << "Please,check the given value: ";
			cin >> diagonal1;
		}
		cout << "Input the another diagonal: ";
		cin >> diagonal2;
		while (diagonal2 <= 0) {
			cout << "Please, check the given value : ";
			cin >> diagonal2;
		}
		cout << "Input the angle between diagonals \n ";
		cin >> angle;
		while (angle <= 0 || angle >= 180) {
			cout << "Please input the angle correctly: ";
			cin >> angle;
		}
		area = diagonal1 * diagonal2 * sin(angle * PI / 180);
		cout << "The area of the given paralellogram is  " << area << endl;

	}
	if (option == 3) {
		cout << "Input the height    \n";
		cin >> height;

		while (height <= 0) {
			cout << "Input the correct height of the paralelogram\n";
			cin >> height;
		}
		cout << "Input the base\n";
		cin >> side1;
		while (side1 <= 0) {
			cout << "Please, input the amount of base correctly \n";
			cin >> side1;
		}
		area = side1 * height / 2;
		cout << "The area of the given paralelogram is  " << area << endl;
	}

	return area;

}
double paralelogram_perimeter() {
	double side1, side2, diagonal1, diagonal2, angle, height, area, perimeter, option;
	cout << "Here are  different ways to find perimeter of a paralellogram. In order to know which way fits you, just make clear what paralellogram's values you have.\n" << endl;
	cout << "Choose one of the following options\n ";
	cout << "1)by  two sides \n"
		<< "2) by 2 diagonals and angle between them\n"
		<< "3) by one angle and height\n";
	cin >> option;
	if (option == 1) {
		cout << "Input the side: ";
		cin >> side1;
		while (side1 <= 0) {
			cout << "Please,check the given value: ";
			cin >> side1;
		}
		cout << "Input the another side: ";
		cin >> side2;
		while (side2 <= 0) {
			cout << "Please, check the given value : ";
			cin >> side2;
		}
		perimeter = (side1 + side2) * 2;
		cout << "The perimeter of parallelogram is: " << perimeter << endl;
	}
	if (option == 2) {
		cout << "Input the diagonal: ";
		cin >> diagonal1;
		while (diagonal1 <= 0) {
			cout << "Please,check the given value: ";
			cin >> diagonal1;
		}
		cout << "Input the another diagonal: ";
		cin >> diagonal2;
		while (diagonal2 <= 0) {
			cout << "Please, check the given value : ";
			cin >> diagonal2;
		}
		cout << "Input the angle between diagonals \n ";
		cin >> angle;
		while (angle <= 0 || angle >= 180) {
			cout << "Please, check the given value: ";
			cin >> angle;
		}
		side1 = sqrt(2 * pow(diagonal1, 2) + 2 * pow(diagonal2, 2) + 2 * diagonal1 * diagonal2 * cos(angle * PI / 180)) / 4;
		side2 = sqrt(2 * pow(diagonal1, 2) + 2 * pow(diagonal2, 2) - 2 * diagonal1 * diagonal2 * cos(angle * PI / 180)) / 4;
		perimeter = (side1 + side2) * 2;
		cout << "The perimeter of the given parallelogram is:  " << perimeter << endl;
	}
	return perimeter;
}
double trapezoid_area() {
	double base1, base2, angle, diagonal1, diagonal2, height, option, area;
	cout << "Here are two ways to find area of the Trapezoid\n"
		<< "1) by two bases and height\n"
		<< "2) by two diagonals and angle between them.\n";
	cin >> option;
	if (option == 1)
	{
		cout << "Input the first base \n";
		cin >> base1;
		while (base1 <= 0) {
			cout << "Please, relax and give the correct one\n";
			cin >> base1;
		}
		cout << "Input the second base\n";
		cin >> base2;
		while (base2 <= 0) {
			cout << "Please,relax and give the correct one\n";
			cin >> base2;
		}
		cout << "Input the height\n";
		cin >> height;
		while (height <= 0) {
			cout << "Please,relax and give the correct one\n";
			cin >> height;

		}
		area = (base1 + base2) / 2 * height;
		cout << "The area of the Trapezoid is: " << area << endl;
	}
	if (option == 2) {
		cout << "Input the first diagonal\n";
		cin >> diagonal1;
		while (diagonal1 <= 0) {
			cout << "Keep calm and give the correct one\n";
			cin >> diagonal1;
		}
		cout << "Input the another diagonal\n";
		cin >> diagonal2;
		while (diagonal2 <= 0) {
			cout << "keep calm and give the correct one\n";
			cin >> diagonal2;
		}
		cout << "Input the angle between diagonals\n";
		cin >> angle;
		while (angle <= 0 || angle >= 180)
		{
			cout << "Keep calm and give the correct one\n";
			cin >> angle;
		}area = diagonal1 * diagonal2 * sin(angle * PI / 180);
		cout << "The area of the given trapezoid is: " << area << endl;
	}
	return area;

}
double trapezoid_perimeter() {
	double base1, base2, side1, side2, perimeter;
	cout << "Input the first base \n";
	cin >> base1;
	while (base1 <= 0) {
		cout << "Please, relax and give the correct one\n";
		cin >> base1;
	}
	cout << "Input the second base\n";
	cin >> base2;
	while (base2 <= 0) {
		cout << "Please, relax and give the correct one\n";
		cin >> base2;
	}	cout << "Input the first left side \n";
	cin >> side1;
	while (side1 <= 0) {
		cout << "Please,relax and give the correct one\n";
		cin >> base1;
	}
	cout << "Input the right side \n";
	cin >> side2;
	while (side2 <= 0) {
		cout << "Please,relax and give the correct one\n";
		cin >> side2;
	}
	perimeter = base1 + base2 + side1 + side2;
	cout << "The Perimeter of the given trapezoid is: " << perimeter << endl;
	return perimeter;
}
void cube() {
	double side, diagonal1, diagonal2, surface, volume, option;
	cout << "Here are 3 ways to find the volume and surface of a cube\n"
		<< "1) by side\n"
		<< "2) by diagonal of a cub\n"
		<< "3) by diagonal of a base\n";
	cin >> option;
	if (option == 1) {
		cout << "Input the side of the cube\n";
		cin >> side;
		while (side <= 0) {
			cout << "Please, relax and give the value correctly\n";
			cin >> side;
		}
		volume = pow(side, 3);
		surface = 6 * side;

		cout << "The volume of the cube is: " << volume << endl;
		cout << "The surface of the cube is: " << surface << endl;

	}
	if (option == 2) {
		cout << "Input the diagonal of a cube\n";
		cin >> diagonal1;
		while (diagonal1 <= 0) {
			cout << "Please, relax and give the value correctly\n";
			cin >> diagonal1;
		}
		volume = pow(diagonal1 / sqrt(3), 3);
		surface = diagonal1 / sqrt(3) * 6;
		cout << "The volume of the cube is: " << volume << endl;
		cout << "The surface of the cube is: " << surface << endl;
	}
	if (option == 3) {
		cout << "Input the diagonal of the base\n";
		cin >> diagonal2;
		while (diagonal2 <= 0) {
			cout << "Please, relax and give the value correctly\n";
			cin >> diagonal2;
		}
		volume = pow(diagonal2 / sqrt(2), 3);
		surface = diagonal1 / sqrt(2) * 6;
		cout << "The volume of the cube is: " << volume << endl;
		cout << "The surface of the cube is: " << surface << endl;
	}
}
void prisma_volume() {
	double  height, volume, option;
	cout << "Please, Choose the base of the prisma (What kind of prisma is that?)\n"
		<< "1) Triangle\n"
		<< "2) Square\n"
		<< "3) Rectangul\n"
		<< "4) paralelogram\n"
		<< "5) Trapezoid\n"
		<< "6) Rhombus\n";
	cin >> option;
	if (option == 1) {
		cout << "In order to calculate the volume of the prism we should multiply the area\n"
			<<"of the base to the height\n ";
		cout << "that's why you have to give the height otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		volume = triangle_area() * height;
		cout << "The volume of the prism: " << volume << endl;
	}
	if (option == 2) {
		cout << "In order to calculate the volume of the prism we should multiply area\n"
			<<"of the base to the height\n ";
		cout << "that's why you have to give the height otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		volume = square_area() * height;
		cout << "the volume of the prism:" << volume << endl;

	}
	if (option == 3) {
		cout << "In order to calculate the volume of the prism we should multiply area\n"
			<< "of the base to the height\n ";
		cout << "that's why you have to give the height otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		volume = rectangle_area() * height;
		cout << "The volume of the Prism: " << volume << endl;
	}
	if (option == 4) {
		cout << "In order to calculate the volume of the prism we should multiply area\n"
			<< "of the base to the height\n ";
		cout << "that's why you have to give the height otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		volume = paralelogram_area() * height;
		cout << "The volume of the prism: " << volume << endl;
	}
	if (option == 5) {
		cout << "In order to calculate the volume of the prism we should multiply area\n"
			<< "of the base to the height\n ";
		cout << "that's why you have to give the height otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
			volume = trapezoid_area() * height;
			cout << "The volume of the prism: " << volume << endl;
		}
	}
	if (option == 6) {
		cout << "In order to calculate the volume of the prism we should multiply area\n"
			<< "of the base to the height\n ";
		cout << "that's why you have to give the height otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
			volume = rhombus_area() * height;
			cout << "The volume of the prism: " << volume << endl;
		}
	}
}
void prisma_surface() {
	double l, lateral_surface, height, surface, option;
	cout << "Choose the base of the prism\n"
		<< "1) Triangle\n"
		<< "2) Square\n"
		<< "3) Rectangul\n"
		<< "4) paralelogram\n"
		<< "5) Trapezoid\n"
		<< "6) Rhombus\n";
	cin >> option;
	if (option == 1) {
		cout << "In order to calculate the surface  of the prism we should multiply perimeter\n"
			<<"of the base to the height\n ";
		cout << "that's why you have to input the height, otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		lateral_surface = triangle_perimeter() * height;
		surface = 2 * triangle_area() + lateral_surface;
		cout << "The total surface of the prism:" << surface << endl;
	}
	if (option == 2) {
		cout << "In order to calculate the surface  of the prism we should multiply perimeter\n"
			<< "of the base to the height\n ";
		cout << "that's why you have to input the height, otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		lateral_surface = square_perimeter() * height;
		surface = 2 * square_area() + lateral_surface;
		cout << "The total surface of the prism:" << surface << endl;

	}
	if (option == 3) {
		cout << "In order to calculate the surface  of the prism we should multiply perimeter\n"
			<< "of the base to the height\n ";
		cout << "that's why you have to input the height, otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		lateral_surface = rectangle_perimeter() * height;
		surface = 2 * rectangle_area() + lateral_surface;
		cout << "The total surface of the prism: " << surface << endl;
	}
	if (option == 4) {
		cout << "In order to calculate the surface  of the prism we should multiply perimeter\n"
			<< "of the base to the height\n ";
		cout << "that's why you have to input the height, otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		lateral_surface = paralelogram_perimeter() * height;
		surface = 2 * paralelogram_area() + lateral_surface;

		cout << "The total surface of the prism: " << surface << endl;
	}
	if (option == 5) {
		cout << "In order to calculate the surface  of the prism we should multiply perimeter\n"
			<< "of the base to the height\n ";
		cout << "that's why you have to input the height, otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
			lateral_surface = trapezoid_perimeter() * height;
			surface = 2 * trapezoid_area() + lateral_surface;
			cout << "The total surface of the prism: " << surface << endl;
		}
	}
	if (option == 6) {
		cout << "In order to calculate the surface  of the prism we should multiply perimeter\n"
			<< "of the base to the height\n ";
		cout << "that's why you have to input the height, otherwise you may ralax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
			lateral_surface = rhombus_perimeter() * height;
			surface = 2 * rhombus_area() + lateral_surface;
			cout << "The total surface of the prism: " << surface << endl;
		}
	}


}
void pyramid_volume() {
	double  height, volume, option;
	cout << "Choose the base of the pyramid\n"
		<< "1) Triangle\n"
		<< "2) Square\n"
		<< "3) Rectangul\n"
		<< "4) Parallelogram\n"
		<< "5) Trapezoid\n"
		<< "6) Rhombus\n";
	cin >> option;
	if (option == 1) {
		cout << "In order to calculate the volume of the pyramid we should multiply area\n"
			<<"of the base to the height then divide by 3\n ";
		cout << "that's why you have to give the height otherwise you may relax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		volume = (triangle_area() * height) / 3;
		cout << "The volume of the pyramid: " << volume << endl;
	}
	if (option == 2) {
		cout << "In order to calculate the volume of the pyramid we should multiply area\n"
			<< "of the base to the height then divide by 3\n ";
		cout << "that's why you have to give the height otherwise you may relax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		volume = square_area() * height / 3;
		cout << "The volume of the pyramid is: " << volume << endl;

	}
	if (option == 3) {
		cout << "In order to calculate the volume of the pyramid we should multiply area\n"
			<< "of the base to the height then divide by 3\n ";
		cout << "that's why you have to give the height otherwise you may relax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		volume = rectangle_area() * height / 3;
		cout << "The volume of the pyramid: " << volume << endl;
	}
	if (option == 4) {
		cout << "In order to calculate the volume of the pyramid we should multiply area\n"
			<< "of the base to the height then divide by 3\n ";
		cout << "that's why you have to give the height otherwise you may relax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
		}
		volume = paralelogram_area() * height / 3;
		cout << "the volume of the pyramid: " << volume << endl;
	}
	if (option == 5) {
		cout << "In order to calculate the volume of the pyramid we should multiply area\n"
			<< "of the base to the height then divide by 3\n ";
		cout << "that's why you have to give the height otherwise you may relax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
			volume = trapezoid_area() * height / 3;
			cout << "The volume of the pyramid: " << volume << endl;
		}
	}
	if (option == 6) {
		cout << "In order to calculate the volume of the pyramid we should multiply area\n"
			<< "of the base to the height then divide by 3\n ";
		cout << "that's why you have to give the height otherwise you may relax:)\n";
		cin >> height;
		while (height <= 0) {
			cout << "Input the value correctly\n";
			cin >> height;
			volume = rhombus_area() * height / 3;
			cout << "The volume of the pyramid: " << volume << endl;
		}
	}

}
void pyramid_surface() {
	double l, lateral_surface, height, surface, option;
	cout << "Choose the base of the prism that you want to calculate: \n"
		<< "1) Triangle\n"
		<< "2) Square\n"
		<< "3) Rectangle\n"
		<< "4) Parallelogram\n"
		<< "5) Trapezoid\n"
		<< "6) Rhombus\n";
	cin >> option;
	if (option == 1) {
		cout << "In order to calculate the surface  of the pyramid we should multiply\n"
			<<"perimeter of the base to the aphophem\n ";
		cout << "that's why you have to give the height, otherwise you may relax:)\n";
		cin >> l;
		while (l <= 0) {
			cout << "Input the value correctly\n";
			cin >> l;
		}
		lateral_surface = triangle_perimeter() * l / 2;
		surface = triangle_area() + lateral_surface;
		cout << "The total surface of the pyramid:" << surface << endl;
	}
	if (option == 2) {
		cout << "In order to calculate the surface  of the pyramid we should multiply\n"
			<< "perimeter of the base to the aphophem\n ";
		cout << "that's why you have to give the height, otherwise you may relax:)\n";
		cin >> l;
		while (l <= 0) {
			cout << "Input the value correctly\n";
			cin >> l;
		}
		lateral_surface = square_perimeter() * l / 2;
		surface = square_area() + lateral_surface;
		cout << "The total surface of the pyramid:" << surface << endl;

	}
	if (option == 3) {
		cout << "In order to calculate the surface  of the pyramid we should multiply\n"
			<< "perimeter of the base to the aphophem\n ";
		cout << "that's why you have to give the height, otherwise you may relax:)\n";
		cin >> l;
		while (l <= 0) {
			cout << "Input the value correctly\n";
			cin >> l;
		}
		lateral_surface = rectangle_perimeter() * l / 2;
		surface = rectangle_area() + lateral_surface;
		cout << "The total surface of the pyramid: " << surface << endl;
	}
	if (option == 4) {
		cout << "In order to calculate the surface  of the pyramid we should multiply\n"
			<< "perimeter of the base to the aphophem\n ";
		cout << "that's why you have to give the height, otherwise you may relax:)\n";
		cin >> l;
		while (l <= 0) {
			cout << "Input the value correctly\n";
			cin >> l;
		}
		lateral_surface = paralelogram_perimeter() * l / 2;
		surface = paralelogram_area() + lateral_surface;

		cout << "The total surface of the pyramid: " << surface << endl;
	}
	if (option == 5) {
		cout << "In order to calculate the surface  of the pyramid we should multiply\n"
			<< "perimeter of the base to the aphophem\n ";
		cout << "that's why you have to give the height, otherwise you may relax:)\n";
		cin >> l;
		while (l <= 0) {
			cout << "Input the value correctly\n";
			cin >> l;
			lateral_surface = trapezoid_perimeter() * l / 2;
			surface = trapezoid_area() + lateral_surface;
			cout << "The total surface of the pyramid: " << surface << endl;
		}
	}
	if (option == 6) {
		cout << "In order to calculate the surface  of the pyramid we should multiply\n"
			<< "perimeter of the base to the aphophem\n ";
		cout << "that's why you have to give the height, otherwise you may relax:)\n";
		cin >> l;
		while (l <= 0) {
			cout << "Input the value correctly\n";
			cin >> l;
			lateral_surface = rhombus_perimeter() * l / 2;
			surface = rhombus_area() + lateral_surface;
			cout << "The total surface of the pyramid: " << surface << endl;
		}
	}



}
void cylinder_volume() {
	double height, volume;
	cout << "In order to calculate the volume of the cylinder we should multiply area\n"
		<<"of the circle to the height\n ";
	cout << "that's why you have to give the height otherwise you may relax:)\n";
	cin >> height;
	while (height <= 0) {
		cout << "Input the value correctly\n";
		cin >> height;
	}
	volume = (circle_area() * height);
	cout << "The volume of the cylinder :" << volume << endl;

}
void  cylinder_surface() {
	double surface, height, lateral_surface;
	cout << "In order to calculate the surface of the cylinder we need a  height\n "
		<<"Please, Input the height: ";
	cin >> height;
	while (height <= 0) {
		cout << "Input the value correctly\n";
		cin >> height;
	}
	lateral_surface = circle_circumference() * height;
	surface = 2 * circle_area() + lateral_surface;
	cout << surface;
}
void paralepiped_volume() {
	double lenght, width, height, volume;
	cout << "Input the value of parallelipiped's length: ";
	cin >> lenght;
	while (lenght <= 0) {
		cout << "Please,make sure that you INPUT the side by correct way\n";
		cin >> lenght;
	}
	cout << "Input the value of parallelipiped's second side: ";
	cin >> width;
	while (width <= 0) {
		cout << "Please,make sure that you INPUT the side by correct way\n";
		cin >> width;
	}
	cout << "Input the  height\n ";
	cin >> height;
	while (height <= 0) {
		cout << "Input the value correctly\n";
		cin >> height;
	}
	volume = lenght * width * height;
	cout << "Parallelipiped's volume is: " << volume;
}
void paralepiped_surface() {
	double lenght, width, height, surface;
	cout << "Input the value of parallelipiped's length: ";
	cin >> lenght;
	while (lenght <= 0) {
		cout << "Please,make sure that you INPUT the side by correct way\n";
		cin >> lenght;
	}
	cout << "Input the value of parallelipiped's second side: ";
	cin >> width;
	while (width <= 0) {
		cout << "Please,make sure that you INPUT the side by correct way\n";
		cin >> width;
	}
	cout << "Input the  height\n ";

	cin >> height;
	while (height <= 0) {
		cout << "Input the value correctly\n";
		cin >> height;
	}
	surface = lenght * width * height;
	cout << "Parallelipiped's surface is: " << surface;
}
void conus_volume() {
	double  height, volume;
	cout << "Input the value of cone's height: ";
	cin >> height;
	while (height <= 0) {
		cout << "Please, make sure that you INPUT the side by correct way\n";
		cin >> height;
	}
	volume = circle_area() * height / 3;
	cout << "Volume of the cone is: " << volume;

}
void conus_surface() {
	double radius, height, l, surface, lateral_area;
	cout << "Input the value of cone's height: ";
	cin >> height;
	while (height <= 0) {
		cout << "Please,make sure that you INPUT the side by correct way\n";
		cin >> height;
	}
	cout << "Input the value of cone's radius: ";
	cin >> radius;
	while (radius <= 0) {
		cout << "Please,make sure that you INPUT the side by correct way\n";
		cin >> radius;
	}
	l = sqrt(pow(height, 2) + pow(radius, 2));
	lateral_area = PI * radius * l;
	cout << "Lateral area is: " << lateral_area;
	surface = PI * radius * (radius + l);
	cout << "The surface is: " << surface;

}
void  sphere_volume() {
	double radius, volume;
	cout << "Input the value of sphere's radius: ";
	cin >> radius;
	while (radius <= 0) {
		cout << "Please,make sure that you INPUT the side by correct way\n";
		cin >> radius;
	}
	volume = 4 * PI * pow(radius, 3) / 3;
	cout << "Volume of the sphere is: " << volume;
}
void sphere_surface() {
	double radius, surface;
	cout << "Input the value of sphere's radius: ";
	cin >> radius;
	while (radius <= 0) {
		cout << "Please, make sure that you INPUT the side by correct way\n";
		cin >> radius;
	}
	surface = 4 * PI * pow(radius, 2);
	cout << "The surface of the sphere is: " << surface << endl;
}
