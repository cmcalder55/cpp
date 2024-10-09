#include<iostream>
#include<fstream>
#include <sstream>
#include<string>

using namespace std;

class ContactsBook {
public:
	
	void add() {
		string first, last, phone, email;
		ofstream writer;

			cout << "First name?" << '\n';
			cin >> first;
			cout << "Last name?" << '\n';
			cin >> last;
			cout << "Phone number?" << '\n';
			cin >> phone;
			cout << "Email?" << '\n';
			cin >> email;

			writer.open("Contacts.txt", ios::app);
			writer << first << " " << last << " " << phone << " " << email << '\n';
			writer.close();
	}

	void search() {

		//int what;
		string locate, what;
		stringstream combine;
		bool found = false;
		//cout << "Search by what? (1) first (2) last (3) phone (4) email" << '/n';
		//cin >> what;
		cout << "\n\n---------------------------------------------\n";
		cout << "Enter Search String" << '\n';
		cin >> locate;
		cout << "\n---------------------------------------------\n";

		string first, last, phone, email;
		//ifstream reader;
		//reader.open("Contacts.txt");
		ifstream infile("contacts.txt");

		while (infile >> first >> last >> phone >> email) {
			if (locate == first) {
				cout << "Matched by first name" << '\n';
				combine << first << ' ' << last << ' ' << phone << ' ' << email;
				found = true;
			}
			else if (locate == last) {
				cout << "Matched by last name" << '\n';
				combine << first << ' ' << last << ' ' << phone << ' ' << email;
				found = true;
			}
			else if (locate == phone) {
				cout << "Matched by phone number" << '\n';
				combine << first << ' ' << last << ' ' << phone << ' ' << email;
				found = true;
			}
			else if (locate == email) {
				cout << "Matched by email address" << '\n';
				combine << first << ' ' << last << ' ' << phone << ' ' << email;
				found = true;
			}
			else {

			}
			if (found == true) {
				what = combine.str();
				cout << what << "\n" << "-------------------------------------------\n\n";
				break;
			}
		}

		if (found == false) {
			cout << "Contact not found" << "\n" << "--------------------------------------------\n\n";
		}
	}

	void display() {
		string first, last, phone, email;
		ifstream reader;
		reader.open("Contacts.txt");
		while (!reader.eof()) {
			reader >> first >> last >> phone >> email;
			cout << first << " " << last << " " << phone << " " << email << '\n';
		}
		reader.close();
	}

};

int main() {
	ContactsBook var;
	string user;
	int choice;
	while (user != "0") {
		cout << '\n';
		cout << "              Menu                       " << '\n';
		cout << "Press 1 to create a new contact" << '\n';
		cout << "Press 2 to search for a contact" << '\n';
		cout << "Press 3 to display all contacts" << '\n';
		cout << "Press 0 to exit" << '\n';
		cout << '\n';
		cin >> choice;

		switch (choice) {
		case 0:user = "0";
			break;
		case 1:var.add();
			break;
		case 2:var.search();
			break;
		case 3:var.display();
			break;
		default: user = "0";
		}
	}
	
	cin.get();
	cin.get();
	cout << "Press any button to end...";
}
