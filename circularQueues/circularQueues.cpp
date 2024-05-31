#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

}

void display() {
	int FRONT_position = FRONT;
	int REAR_position = REAR;

	// Cek apakah antrian kosong
	if (FRONT == 1) {
		cout << "Queues is empty\n";
		return;
	}

	cout << "\nElements in queue are...\n";

	// Jika FRONT_position <== REAR_position, iterasi dari FRONT hingga REAR
	if (FRONT_position <= REAR_position) {
		while (FRONT_position <= REAR_position) {
			cout << "queue_array[FRONT_position]" << " ";
			FRONT_position++;
		}
	}



}