#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<string>
#include<iomanip>

using namespace std;

struct  reservation
{

	char dri_name[30];
	string name;
	string from;
	string  to;
	string departure;
	string arrival;

};
reservation *p;
char dri_name[30];
struct bus_bok
{
	int bus_no;

};
bus_bok *b;

 
int sizes;

void menu();
int cancel;
void display();
int update_bus;
int seat_resere;
int routes_bus;
void buss();
int bus_info;
void seat_reservation();
void update();
void del();

int choice;

int main()
{
	system("color 3f");
	string username = " ";
	string password = "   ";
	bool loginsucess = false;

	cout << "\n\t\t\t***** WELCOME *****" << endl;
	do
	{
		 
		cout << "\n\tPlease login To Continue" << endl << endl;
		cout << "\tUser Name: " << endl;
		cin >> username;
		cout << "\tPassword: " << endl;
		cin >> password;

		if (username == "usama"  &&   password == "usama3393")
		{
			cout << "\tSucessful Login" << endl;
			loginsucess = true;
		}
		else
		{

			cout << "\tIncorrect Username Or Password" << endl;
			cout << "\tPlease Login Again" << endl;
		}

	} while (!loginsucess);

	system("cls");

	menu();

	system("pause");
	return 0;
}

void buss()

{
	cout << "How buses you have " << endl;
	cin >> sizes;

	int bb[7] = { 111, 222, 333, 444, 555, 666, 777 };

	b = new bus_bok[sizes];

	for (int i = 0; i < sizes; i++)
	{
		cout << "Enter bus no " << i + 1 << "  ";
		cin >> b[i].bus_no;
		if (b[i].bus_no == 111)
		{
			cout << endl;
			cout << " Bus No 1 Is Avaliable " << endl;
			cout << " Routes Of Bus  Are  " << endl;
			cout << " Lahore To Karachi " << endl;
			cout << endl;
		}
		else if (b[i].bus_no == 222)
		{
			cout << endl;
			cout << " Bus No 2 Is Availiable " << endl;
			cout << " Route Of Bus Are " << endl;
			cout << " Rawalpindi TO Sargodha " << endl;
			cout << endl;
		}
		else if (b[i].bus_no == 333)
		{
			cout << endl;
			cout << " Bus No 3 Is Not Avaliable " << endl;
			cout << " Routes Are " << endl;
			cout << "Rawalpindi To Lahore " << endl;
			cout << endl;
		}
		else if (b[i].bus_no == 444)
		{
			cout << endl;
			cout << " Bus NO 4 is NOT Avaliable " << endl;
			cout << " Routes Are " << endl;
			cout << "Rawalpindi To Jehlum " << endl;
			cout << endl;
		}
		else if (b[i].bus_no == 555)
		{
			cout << endl;
			cout << " Bus No 5 IS Avaliable " << endl;
			cout << " Routes Are " << endl;
			cout << "Rwalpindi To Swat " << endl;
			cout << endl;
		}
		else if (b[i].bus_no == 666)
		{
			cout << endl;
			cout << " Bus No 6 is not avliable " << endl;
			cout << " Routes are " << endl;
			cout << "  Muurre to Abbotabad " << endl;
			cout << endl;
		}
		else
		{
			cout << "Enter Coorrect Bus Number " << endl;
		}
	}
}

void seat_reservation()

{

	cout << "  How many seat you want to reserve  : ";
	cin >> sizes;
	cout << " Enter driver name     " << endl;
	cin.ignore();
	cin.getline(dri_name, 30);

	p = new reservation[sizes];

	for (int i = 0; i < sizes; i++)
	{
		cout << "**************************" << endl;
		cout << " Seat no " << "  " << i + 1 << "  " << endl;
		cout << "**************************" << endl;
		cout << "Enter passenger name ";
		cin >> p[i].name;
		cout << "FRom                 ";
		cin >> p[i].from;
		cout << "To                   ";
		cin >> p[i].to;
		cout << "Arrival Time         ";
		cin >> p[i].arrival;
		cout << "Departure time       ";
		cin >> p[i].departure;

		if (p[i].from == "lahore" && p[i].to == "karachi")
		{
			cout << endl;
			cout << " Your Fair Is     1200 " << endl;
			cout << endl;
			cout << " -----Have A Safe Journey----- " << endl;
		}
		else if (p[i].from == "rawalpindi" && p[i].to == "sargodha")
		{
			cout << endl;
			cout << " Your Fare Is  1000 " << endl;
			cout << endl;
			cout << " -----Have A Safe Journey----- " << endl;
		}
		else if (p[i].from == "rawalpindi" && p[i].to == "lahore")
		{
			cout << endl;
			cout << " Your Fare is 1500 " << endl;
			cout << endl;
			cout << " -----Have A Safe Journey----- " << endl;
		}
		else if (p[i].from == "kashmir" && p[i].to == "rawalpindi")
		{
			cout << endl;
			cout << " Your Fare is 1300 " << endl;
			cout << endl;
			cout << " -----Have A Safe Journey----- " << endl;
		}
		else if (p[i].from == "Lahore" && p[i].to == "Sargodha")
		{
			cout << endl;
			cout << " Your Fare is 1300 " << endl;
			cout << endl;
			cout << " -----Have A Safe Journey----- " << endl;
		}
		else if (p[i].from == "karachi" && p[i].to == "multan")
		{
			cout << endl;
			cout << " Your Fare is 1300 " << endl;
			cout << endl;
			cout << " -----Have A Safe Journey----- " << endl;
		}
		else if (p[i].from == "Multan" && p[i].to == "lahore")
		{
			cout << endl;
			cout << " Your Fare is 1300 " << endl;
			cout << endl;
			cout << " -----Have A Safe Journey----- " << endl;
		}
		else if (p[i].from == "rawalpindi" && p[i].to == "jehlum")
		{
			cout << endl;
			cout << " Your Fare is 1800 " << endl;
			cout << endl;
			cout << " -----Have A Safe Journey----- " << endl;
		}
		else 
		{
			cout <<" " << endl;
		}
		
	}
	cout << "\n--Seat Reserved Successfully--\n" << endl;
}

void display()

{
	cout << endl;
	cout << "*******************************************" << endl;
	cout << "*******  Your Reservedd seat are   ********" << endl;
	cout << "*******************************************" << endl;
	cout << endl;

	cout << setw(12) << " ID " << setw(12) << " Name " << setw(12) << " from " << setw(12) << " To " << setw(17) << " Arrival Time " << setw(17) << " Departure Time " <<setw(17)<< endl;
	cout << endl;
	for (int i = 0; i < sizes; i++)
	{
		cout << setw(11) << i << setw(12) << p[i].name << setw(12) << p[i].from << setw(12) << p[i].to << setw(13) << p[i].arrival << setw(13) << p[i].departure << setw(13) << endl;
	}
}

void menu()

{
	system("color 3a");
	do {
		cout << "\n\n\t/***** Welcome to the bus reservation system *****/" << endl;
		cout << "\n\t\t1 For Bus Information:" << endl;
		cout << "\t\t2 Reservation :" << endl;
		cout << "\t\t3 Show Reserved Seat Display :" << endl;
		cout << "\t\t4 Update :" << endl;
		cout << "\t\t5 delete " << endl;
		cout << "\t\t6 For Exit " << endl;
		cout << "\t\tEnter Your Choice :----> " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			buss();
			break;

		case 2:
			seat_reservation();
			break;

		case 3:
			display();
			break;

		case 4:
			update();
			break;

		case 5:
			del();
			break;

		case 6:
			exit(1);
			break;

		default:
			cout << "Enter a correct Number " << endl;
			break;

		}
	} while (choice);
}

void update()

{
	cout << endl;
	cout << " Enter a record you want t0 update ";
	cout << endl << endl;
	cout << " Driver name           " << dri_name << endl;

	for (int i = 0; i < sizes; i++)
	{
		cout << endl;
		cout << " *******PASSENGER NO" << i + 1 << "*******" << endl;
		cout << "Name of PAssenger is   " << p[i].name << endl;
		cout << "Your Jounrney is from  " << p[i].from << " To  " << p[i].to << endl;
		cout << "Your Departure time is " << p[i].departure << endl;
		cout << "  And Arrival Time is  " << p[i].arrival << endl;
		cout << "*****************************************" << endl;
		cout << endl;
	}

	int index;
	cout << endl;
	cout << " Select the record you want to update from following list " << endl;
	cout << endl;
	cin >> index;

	cout << " Enter passenger name ";
	cin >> p[index - 1].name;
	cout << " From                 ";
	cin >> p[index - 1].from;
	cout << " TO                   ";
	cin >> p[index - 1].to;
	cout << " Departure time       ";
	cin >> p[index - 1].departure;
	cout << " Arrival time         ";
	cin >> p[index - 1].arrival;
	cout << "**********************" << endl;
	cout << "**  After Updating  **" << endl;
	cout << "**********************" << endl;

	display();
}

void del()

{
	cout << endl;
	cout << " Select the record you want to delete :" << endl << endl;

	cout << " Driver name " << dri_name << endl;
	for (int i = 0; i < sizes; i++)
	{
		cout << i + 1 << "---> " << p[i].name << " " << p[i].from << " " << p[i].to << " " << p[i].arrival << " " << p[i].departure << endl;
		cout << "********************************************" << endl;
	}
	int index;
	cout << " Select Recore you want to delete " << endl;
	cin >> index;


	for (int i = index; i < sizes; i++)
	{
		p[i - 1].name = p[i].name;
		p[i - 1].from = p[i].from;
		p[i - 1].to = p[i].to;
		p[i - 1].arrival = p[i].arrival;
		p[i - 1].departure = p[i].departure;

	}
	sizes--;

	cout << " ************ " << endl;
	cout << " After Deleting " << endl;
	cout << " ************ " << endl;

	display();
}
