#include <iostream>
using namespace std;

int str;  // in order to store value for swapping process

int main() {

	int arrayFurkan[12] = { 5,2,25,3,3,7,14,90,1,17,28,15 };   // given array
	int len = sizeof(arrayFurkan) / sizeof(arrayFurkan[0]); // for finding length of array

	// cout << "length of array: " << len <<"\n"<< endl;

	cout << "Given array:  ";

	// it print given array
	for (int k = 0; k < len; k++) {

		cout << arrayFurkan[k] << " ";
	}
	cout << endl;

	// it is swapping process therefore number of loop should be 1 less than length (last item is set when (length-1)th step)
	// for the second for loop (j), number of iteration decreases by 1 after each for(i), because the biggest values are already placed end of the line.
	for (int i = 0; i < len - 1; i++) {

		for (int j = 0; j < len - i - 1; j++) {

			if (arrayFurkan[j] > arrayFurkan[j + 1]) {

				str = arrayFurkan[j];
				arrayFurkan[j] = arrayFurkan[j + 1];
				arrayFurkan[j + 1] = str;

			}
		}
	}

	cout << "\n" << "Sorted Array: ";

	//it prints sorted array
	for (int m = 0; m < len; m++) {

		cout << arrayFurkan[m] << " ";
	}
}

