#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct circle {
	float centerX, centerY, radius, area, circumference, distance_from_origin;

};

const float PI = 3.14159;

int main() {

	circle circles[6];

	for (int i = 0; i < 6; i++) {
		cout << "Please enter the radius for circle " << i + 1 << endl;
		cin >> circles[i].radius;

		cout << "Please enter the x-coordinate of the center: " << endl;
		cin >> circles[i].centerX;

		cout << "Please enter the y-coordinate of the center: " << endl;
		cin >> circles[i].centerY;

		circles[i].area = PI * pow(circles[i].radius, 2.0);
		circles[i].circumference = 2 * PI * circles[i].radius;
		circles[i].distance_from_origin = sqrt(pow(circles[i].centerX, 2.0) + pow(circles[i].centerY, 2.0));

		cout << endl << endl;

	}

	float closestToNum = circles[0].distance_from_origin;
	int closestToCircle = 0;

	for (int i = 1; i < 6; i++) {
		if (circles[i - 1].distance_from_origin > circles[i].distance_from_origin) {
			closestToNum = circles[i].distance_from_origin;
			closestToCircle = i;
		}
	}

	cout << "The circle that is closest to the center is circle # " << (closestToCircle + 1) << " with a distance of " << closestToNum << endl;

	return 0;
}