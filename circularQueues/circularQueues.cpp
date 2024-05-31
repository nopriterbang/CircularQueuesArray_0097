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
		while (FRONT_position <= max - 1)
		{
			cout << queue_array[FRONT_position] << " ";
			FRONT_position++;
		}

		FRONT_position = 0;

		//iterasi dari awal array hingga REAR
		while (FRONT_position <= REAR_position)
		{
			cout << queue_array[FRONT_position] << " ";
			FRONT_position++;
		}
		cout << endl;
	}


};

int main() {
	Queues q;
	char ch;
}

while (true) {
	try {
		cout << "Menu" << endl;
		cout << "1. Implement insert operation" << endl;
		cout << "2. Implement delete operation" << endl;
		cout << "3. Display values" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice (1-4): ";
		cin >> ch;
		cout << endl;

		switch (ch) {
		case '1': {

		}
		case '2': {
			q.remove();
			break;
		}
		case '3': {
			q.display();
			break;
		}
		case '4': {
			return 0;
		}
		default: {
			cout << "Invalid option!!" << endl;
			break;
		}
		}


	}

	catch (exception& e) {
		cout << "Check for the values entered." << endl;
	}


}
}
