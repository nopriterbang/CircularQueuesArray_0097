#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

public:
	Queues() {
		FRONT = -1;
		REAR = -1;
	}

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
		cout << endl;

	}
	else
	{
		//jika FRONT > REAR, iterasi dari FRONT hingga akhir array
		while (FRONT_Position <= max - 1)
		{
			cout << queue_array[FRONT_position] << " ";
			FRONT_Position++;
		}

		FRONT_Position = 0;

		//iterasi dari awal array hingga REAR
		while (FRONT_Position <= REAR_position)
		{
			cout << queue_array[FRONT_position] << " ";
			FRONT_Position++;
		}
		cout << endl;
	}


};

int main() {
	Queues q;
	char ch;
}