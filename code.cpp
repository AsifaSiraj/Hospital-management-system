#include <iostream>	 // for input output stream
#include <conio.h>	 // for system pause and clear screen
#include <string.h>	 // for string arguments
#include <iomanip>	 // for setw
#include <windows.h> // for graphics
#include <stdlib.h>
//#include <stdexcept> // For std::out_of_range
using namespace std;

bool check(string);
bool check_alphabet(string);
int srno=0,srno2=0;
struct node
{
	string name, fname, doc_id, dob, ward, id;
	int days;
	node *next;
};
struct doc_node
{
	string docname, doc_credential, docdob, docid;
	doc_node *next2;
};


// Start of the class
class admin
{
public:
	int count1;
	node *head, *tail;

public:
	admin()
	{
		head = tail = NULL;
		count1 = 0;
	}
	bool isEmpty()
	{
		if (head == NULL)
		{
			return true;
		}
		else
			return false;
	}

	

	bool adminpass()
	{
		string pass;
		gotoxy(2, 2);
		Above_horizental();
		gotoxy(2, 3);
		Line();
		gotoxy(77, 3);
		Line();
		gotoxy(2, 4);
		Line();
		gotoxy(77, 4);
		Line();
		gotoxy(2, 5);
		Line();
		gotoxy(77, 5);
		Line();
		gotoxy(2, 6);
		Line();
		Line();
		gotoxy(77, 6);
		Line();
		gotoxy(2, 7);
		Line();
		gotoxy(77, 7);
		Line();
		gotoxy(2, 8);
		Line();
		gotoxy(77, 8);
		Line();
		gotoxy(2, 9);
		Line();
		gotoxy(77, 9);
		Line();
		gotoxy(2, 10);
		Line();
		gotoxy(77, 10);
		Line();
		gotoxy(2, 11);
		below_Horizental();
		gotoxy(35, 3);
		cout << "ADMIN BLOCK" << endl;
		gotoxy(28, 1);
		cout << "HOSPITAL MANAGEMENT SYSTEM" << endl;
		gotoxy(28, 6);
		cout << "Kindly Insert The Administrator Password : " << endl;
		gotoxy(28, 8);
		cin >> pass;
		system("CLS");
		if (pass == "admin" || pass == "Admin" || pass == "ADMIN")
		{
			cout << "Successfully login.........." << endl;
			system("pause");
			system("CLS");
			return true;
		}
		else
		{
			cout << "Kindly enter correct password........" << endl;
			system("pause");
			system("CLS");
			return false;
		}
	}

	// patient data
	void add_data(int srno)
	{
	
		// 1
		gotoxy(2, 2);
		Above_horizental();
		gotoxy(2, 3);
		Line();
		gotoxy(77, 3);
		Line();
		gotoxy(2, 4);
		below_Horizental();
		// 2
		gotoxy(2, 5);
		Above_horizental();
		gotoxy(2, 6);
		Line();
		gotoxy(77, 6);
		Line();
		gotoxy(2, 7);
		below_Horizental();
		// 3
		gotoxy(2, 8);
		Above_horizental();
		gotoxy(2, 9);
		Line();
		gotoxy(77, 9);
		Line();
		gotoxy(2, 10);
		below_Horizental();
		// 4
		gotoxy(2, 11);
		Above_horizental();
		gotoxy(2, 12);
		Line();
		gotoxy(77, 12);
		Line();
		gotoxy(2, 13);
		below_Horizental();
		// 5
		gotoxy(2, 14);
		Above_horizental();
		gotoxy(2, 15);
		Line();
		gotoxy(77, 15);
		Line();
		gotoxy(2, 16);
		below_Horizental();
		// 6
		gotoxy(2, 17);
		Above_horizental();
		gotoxy(2, 18);
		Line();
		gotoxy(77, 18);
		Line();
		gotoxy(2, 19);
		below_Horizental();
		// 7
		gotoxy(2, 20);
		Above_horizental();
		gotoxy(2, 21);
		Line();
		gotoxy(77, 21);
		Line();
		gotoxy(2, 22);
		below_Horizental();
		//8
		gotoxy(2, 23);
		Above_horizental();
		gotoxy(2, 24);
		Line();
		gotoxy(77, 24);
		Line();
		gotoxy(2, 25);
		below_Horizental();
		//
		node *temp = new node;
		//0
		gotoxy(36, 3);
		cout << "DATA ENTRY : "<<srno;
		// 1
		gotoxy(23, 6);
		cout << "Enter Patient Name: ";
		cin >> temp->name;
		if (isEmpty())
		{
			goto z;
		}
		
	z:
		while (check(temp->name) == false)
		{
			gotoxy(42, 6);
			cout << "                     	  ";
			gotoxy(42, 6);
			cin >> temp->name;
		}
		// 2
		gotoxy(23, 9);
		cout << "Enter Patient Father Name: ";
		cin >> temp->fname;

		if (isEmpty())
		{
			goto y;
		}
		
	y:
		while ((check(temp->fname) == false)|| (temp->fname == temp->name))
		{
			gotoxy(50, 9);
			cout << "                     ";
			gotoxy(50, 9);
			cin >> temp->fname;
		}
		// 3
		gotoxy(23, 12);
		cout << "Enter Patient ID: ";
		cin >> temp->id;
		if (isEmpty())
		{
			goto a;
		}
		else
		{   
			while (head->id == temp->id || tail->id == temp->id)
			{
				gotoxy(40, 12);
				cout << "                  	 " << endl;
			gotoxy(40, 12);
				cin >> temp->id;
			}
		}

	a:
		while (check_alphabet(temp->id) == false)
		{
			cin.clear();
			gotoxy(40, 12);
			cout << "                  	 " << endl;
			gotoxy(40, 12);
			cin >> temp->id;
		}
		// 4
		gotoxy(23, 15);
		cout << "Enter Patient Birth Year: ";
		cin >> temp->dob;
		if (isEmpty())
		{
			goto ai;
		}
		
	ai:
		while (check_alphabet(temp->dob) == false)
		{
			cin.clear();
			gotoxy(49, 15);
			cout << "                  	 " << endl;
			gotoxy(49, 15);
			cin >> temp->dob;
		}
		
		// 5
		gotoxy(23, 18);
		cout << "Enter Ward Assigned: ";
		cin >> temp->ward;
		// 6

while (true) {
	sa:
  gotoxy(23, 21);
  cout << "Enter Days of Stay: ";

  gotoxy(43, 21);
  cin >> temp->days;

  if (cin.fail()) {
    cin.clear();
  cin.ignore();

  } else {
    if (temp->days > 30) {
        goto sa;
    }
    break; 
  }
}


		gotoxy(23, 24);
		cout << "Enter Doctor ID: ";
		cin >> temp->doc_id;
		if (isEmpty())
		{
			goto j;
		}
		
	j:
		while (check_alphabet(temp->doc_id) == false)
		{
			gotoxy(39, 24);
			cout << "                     	  ";
			gotoxy(39, 24);
			cin >> temp->doc_id;
		}

		
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
		count1++;
	}
	//
	void Edit_Record()
	{
		node *f = new node;
		node *t = new node;
		cout << "Enter The Patient ID which you want to Edit :\n";
		while (!(cin >> t->id))
		{
			cin.clear();
			system("CLS");
			cout << "Invalid input...! \n\n";
			system("pause");
			system("CLS");
			goto ss;
		}
		f = head;
		while (f != NULL)
		{
			if (t->id == f->id)
				break;
			f = f->next;
		}
		if (f == NULL)
		{
		ss:
			system("CLS");
			cout << "Sorry .....Record of Patient does'nt Exist \n\n";
		}
		else
		{
			system("CLS");
			// 1
			gotoxy(2, 2);
			Above_horizental();
			gotoxy(2, 3);
			Line();
			gotoxy(77, 3);
			Line();
			gotoxy(2, 4);
			below_Horizental();
			// 2
			gotoxy(2, 5);
			Above_horizental();
			gotoxy(2, 6);
			Line();
			gotoxy(77, 6);
			Line();
			gotoxy(2, 7);
			below_Horizental();
			// 3
			gotoxy(2, 8);
			Above_horizental();
			gotoxy(2, 9);
			Line();
			gotoxy(77, 9);
			Line();
			gotoxy(2, 10);
			below_Horizental();
			// 4
			gotoxy(2, 11);
			Above_horizental();
			gotoxy(2, 12);
			Line();
			gotoxy(77, 12);
			Line();
			gotoxy(2, 13);
			below_Horizental();
			// 5
			gotoxy(2, 14);
			Above_horizental();
			gotoxy(2, 15);
			Line();
			gotoxy(77, 15);
			Line();
			gotoxy(2, 16);
			below_Horizental();
			// 6
			gotoxy(2, 17);
			Above_horizental();
			gotoxy(2, 18);
			Line();
			gotoxy(77, 18);
			Line();
			gotoxy(2, 19);
			below_Horizental();
			// 7
		gotoxy(2, 20);
		Above_horizental();
		gotoxy(2, 21);
		Line();
		gotoxy(77, 21);
		Line();
		gotoxy(2, 22);
		below_Horizental();
			//
			node *tempo = new node;

			gotoxy(23, 3);
			cout << "Enter Patient Name: ";
			cin >> tempo->name;

			while (check(tempo->name) == false)
			{
				gotoxy(43, 3);
				cout << "                     	  ";
				gotoxy(43, 3);
				cin >> tempo->name;
			}
			//
			f->name = tempo->name;
			gotoxy(23, 6);
			cout << "Enter Patient Father Name: ";
			cin >> tempo->fname;

			while ((check(tempo->fname) == false) || (tempo->fname == tempo->name))
			{
				gotoxy(50, 6);
				cout << "                     ";
				gotoxy(50, 6);
				cin >> tempo->fname;
			}
			f->fname = tempo->fname;
			gotoxy(23, 9);
			cout << "Enter Patient ID: ";
			cin >> tempo->id;
			while (check_alphabet(tempo->id) == false)
			{
				gotoxy(40, 9);
				cout << "                  	 " << endl;
				gotoxy(40, 9);
				cin >> tempo->id;
			}
			f->id = tempo->id;
			//
			gotoxy(23, 12);
			cout << "Enter Patient Birt Year: ";
			cin >> tempo->dob;
			while (check_alphabet(tempo->dob) == false)
			{
				gotoxy(49, 12);
				cout << "                  	 " << endl;
				gotoxy(49, 12);
				cin >> tempo->dob;
			}
			f->dob=tempo->dob;	
				
			gotoxy(23, 15);   
			
			cout << "Enter Patient Ward: ";
			cin >> tempo->ward;
			f->ward = tempo->ward;
			//
		s:
			gotoxy(23, 18);
			cout << "Enter Days of Stay: ";
			gotoxy(43, 18);
			cout << "                   	";
			//
			gotoxy(43, 18);
			while (!(cin >> tempo->days))
			{
				cin.clear();
				gotoxy(43, 18);
				cout << "                   	";
				gotoxy(43, 18);
				cin >> tempo->days;
			}
			if (tempo->days > 30)
			{
				goto s;
			}
			f->days = tempo->days;

			gotoxy(23, 21);
			cout << "Enter Doctor ID: ";
			cin >> tempo->doc_id;

			while (check_alphabet(tempo->doc_id) == false)
			{
				gotoxy(39, 21);
				cout << "                     	  ";
				gotoxy(39, 21);
				cin >> tempo->doc_id;
			}
			//
			f->doc_id = tempo->doc_id;

			cout << "\n\n";
		}
	}

	//
	void search_Record()
	{
		node *temp = new node;
		node *t;
		cout << "Enter The Patient ID In Order To Search :\n";
		while (!(cin >> temp->id))
		{
			cin.clear();
			system("CLS");
			cout << "Invalid input...! \n\n";
			system("pause");
			system("CLS");
			goto zz;
		}
		t = head;
		while (t != NULL)
		{
			if (t->id == temp->id)
				break;
			t = t->next;
		}
		if (t == NULL)
		{
		zz:
			system("CLS");
			cout << "Sorry ..... Record does'nt Exist \n\n";
		}
		else
		{
			display_table();
			gotoxy(2, 8);
			Above_horizental();
			gotoxy(2, 9);
			Line();
			gotoxy(77, 9);
			Line();
			gotoxy(4, 9);
		    cout  << t->name << "\t" << t->fname << "\t    " << t->id << "\t   " << t->dob << "\t   " << t->ward << "\t   " << t->days << "\t" << t->doc_id;
			gotoxy(2, 10);
			below_Horizental();
		}
	}

	//
	bool Delete_Record(int srno)
	{
		string s;
		node *temp;
		node *curr, *pre;
		cout << "Enter The Patient ID In Order To Delete :\n";
		while (!(cin >> s))
		{
			cin.clear();
			system("CLS");
			cout << "Invalid input...! \n\n";
			system("pause");
			system("CLS");
			goto aa;
		}
		if (s == head->id)
		{
			
			temp = head;
			head = head->next;
			delete temp;
			cout << endl
				 << endl;
			display_table();
			table_data();
			return true;
		}
		else
		{
			curr = head;
			pre = NULL;
			while (curr != NULL)
			{
				if (curr->id == s)
				{
					break;
				}
				pre = curr;
				curr = curr->next;
			}
			if (curr == NULL)
			{
			aa:
				system("CLS");
				cout << "No record Found \n\n";
				return false;
			}
			else
			{
				srno=srno-1;
				pre->next = curr->next;
				delete curr;
				display_table();
				table_data();
				return true;
			}
		}
	}

	//
	void table_data()
	{
		node *t;
		t = head;
		int x = 4;
		int y = 8;
		int s = 2;
		while (t != NULL)
		{
			gotoxy(s, y);
			Above_horizental();
			gotoxy(s, y + 1);
			Line();
			gotoxy(s + 75, y + 1);
			Line();
			gotoxy(x, y + 1);
			cout << t->name << "\t" << t->fname << "\t    " << t->id << "\t   " << t->dob << "\t   " << t->ward << "\t   " << t->days << "\t" << t->doc_id;
			t = t->next;
			gotoxy(s, y + 2);
			below_Horizental();
			y = y + 3;
		}
		gotoxy(s, y + 1);
		Above_horizental();
		gotoxy(s, y + 2);
		Line();
		gotoxy(s + 75, y + 2);
		Line();
		gotoxy(x + 31, y + 2);
		cout << "Finish";
		gotoxy(s, y + 3);
		below_Horizental();
	}
	//
	void display_table()
	{
		gotoxy(2, 3);
		Above_horizental();
		gotoxy(2, 4);
		Line();
		gotoxy(77, 4);
		Line();
		gotoxy(2, 5);
		Line();
		gotoxy(77, 5);
		Line();
		gotoxy(2, 6);
		Line();
		gotoxy(77, 6);
		Line();
		gotoxy(2, 7);
		below_Horizental();
		gotoxy(33, 4);
		cout << "PATIENT RECORD" << endl;
		gotoxy(4, 6);
		cout << "NAME     "
			 << "FATHER NAME     "
			 << "ID	 "
			 << "YEAR    "
			 << "WARD    "
			 << "STAY   "
			 << "DOCTOR ID   ";
	}


void gotoxy(int x, int y)
{
	if (x < 0 || y < 0 || x > 10000 || y > 10000)
	{
		cout<<"Coordinates are out of valid range."<<endl;
	}
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Above_horizental()
{
	char prev = ' ';
	prev = cout.fill((char)205);
	cout << (char)201 << setw(74) << "" << (char)187 << endl;
	cout.fill(prev);
}
//
void Line()
{
	cout << (char)186 << endl;
}
//
void below_Horizental()
{
	char prev = ' ';
	prev = cout.fill((char)205);
	cout << (char)200 << setw(74) << "" << (char)188 << endl;
	cout.fill(prev);
}


	void Menu()
	{
		gotoxy(2, 2);
		Above_horizental();
		gotoxy(2, 3);
		Line();
		gotoxy(77, 3);
		Line();
		gotoxy(2, 4);
		Line();
		gotoxy(77, 4);
		Line();
		gotoxy(2, 5);
		Line();
		gotoxy(77, 5);
		Line();
		gotoxy(2, 6);
		Line();
		gotoxy(77, 6);
		Line();
		gotoxy(2, 7);
		Line();
		gotoxy(77, 7);
		Line();
		gotoxy(2, 8);
		Line();
		gotoxy(77, 8);
		Line();
		gotoxy(2, 9);
		Line();
		gotoxy(77, 9);
		Line();
		gotoxy(2, 10);
		Line();
		gotoxy(77, 10);
		Line();
		gotoxy(2, 11);
		Line();
		gotoxy(77, 11);
		Line();
		gotoxy(2, 12);
		Line();
		gotoxy(77, 12);
		Line();
		gotoxy(2, 13);
		Line();
		gotoxy(77, 13);
		Line();
		gotoxy(2, 14);
		Line();
		gotoxy(77, 14);
		Line();
		gotoxy(2, 15);
		Line();
		gotoxy(77, 15);
		Line();
		gotoxy(2, 16);
		Line();
		gotoxy(77, 16);
		Line();
		gotoxy(2, 17);
		Line();
		gotoxy(77, 17);
		Line();
		gotoxy(2, 18);
		Line();
		gotoxy(77, 18);
		Line();
		gotoxy(2, 19);
		Line();
		gotoxy(77, 19);
		Line();
		gotoxy(2, 20);
		Line();
		gotoxy(77, 20);
		Line();
		gotoxy(2, 21);
		below_Horizental();
		//
		gotoxy(35, 3);
		cout << "MAIN MENU" << endl;
		gotoxy(28, 1);
		cout << "HOSPITAL MANAGEMENT SYSTEM" << endl;
		gotoxy(33, 6);
		cout << "1-Add Record" << endl;
		gotoxy(33, 8);
		cout << "2-Edit Record" << endl;
		gotoxy(33, 10);
		cout << "3-Search Record" << endl;
		gotoxy(33, 12);
		cout << "4-Delete Record" << endl;
		gotoxy(33, 14);
		cout << "5-Display Record" << endl;
		gotoxy(33, 16);
		cout << "6-Main Menu" << endl;
	}
	void sub_menu()
	{
		gotoxy(2, 2);
		Above_horizental();
		gotoxy(2, 3);
		Line();
		gotoxy(77, 3);
		Line();
		gotoxy(2, 4);
		Line();
		gotoxy(77, 4);
		Line();
		gotoxy(2, 5);
		Line();
		gotoxy(77, 5);
		Line();
		gotoxy(2, 6);
		Line();
		gotoxy(77, 6);
		Line();
		gotoxy(2, 7);
		Line();
		gotoxy(77, 7);
		Line();
		gotoxy(2, 8);
		Line();
		gotoxy(77, 8);
		Line();
		gotoxy(2, 9);
		Line();
		gotoxy(77, 9);
		Line();
		gotoxy(2, 10);
		Line();
		gotoxy(77, 10);
		Line();
		gotoxy(2, 11);
		Line();
		gotoxy(77, 11);
		Line();
		gotoxy(2, 12);
		Line();
		gotoxy(77, 12);
		Line();
		gotoxy(2, 13);
		below_Horizental();
		//
		gotoxy(35, 3);
		cout << "MAIN MENU" << endl;
		gotoxy(28, 1);
		cout << "HOSPITAL MANAGEMENT SYSTEM" << endl;
		gotoxy(33, 6);
		cout << "1-Patient Record" << endl;
		gotoxy(33, 8);
		cout << "2-Doctor Records" << endl;
		gotoxy(33, 10);
		cout << "3-Main Menu" << endl;
	}
};
// End of The Class patient Admin

// start of doctor admin
class admin2 : public admin
{
public:
	int count2;
	doc_node *head2;
	doc_node *tail2;
	admin2()
	{
		head2 = tail2 = NULL;
		count2 = 0;
	}
	// doctor data
	bool isEmpty2()
	{
		if (head2 == NULL)
		{
			return true;
		}
		else
			return false;
	}
	//place for goto
	void docdata(int srno2)
	{   
		// 1
		gotoxy(2, 2);
		Above_horizental();
		gotoxy(2, 3);
		Line();
		gotoxy(77, 3);
		Line();
		gotoxy(2, 4);
		below_Horizental();
		// 2
		gotoxy(2, 5);
		Above_horizental();
		gotoxy(2, 6);
		Line();
		gotoxy(77, 6);
		Line();
		gotoxy(2, 7);
		below_Horizental();
		// 3
		gotoxy(2, 8);
		Above_horizental();
		gotoxy(2, 9);
		Line();
		gotoxy(77, 9);
		Line();
		gotoxy(2, 10);
		below_Horizental();
		// 4
		gotoxy(2, 11);
		Above_horizental();
		gotoxy(2, 12);
		Line();
		gotoxy(77, 12);
		Line();
		gotoxy(2, 13);
		below_Horizental();
	    // 5
			gotoxy(2, 14);
			Above_horizental();
			gotoxy(2, 15);
			Line();
			gotoxy(77, 15);
			Line();
			gotoxy(2, 16);
			below_Horizental();
	
		//
		doc_node *temp = new doc_node;
		//0
		gotoxy(36, 3);
		cout << "DATA ENTRY : "<<srno2;
		// 1
		gotoxy(23, 6);
		cout << "Enter Doctor Name: ";
		cin >> temp->docname;
		if (isEmpty2())
		{
			goto z;
		}
	z:
		while (check(temp->docname) == false)
		{
			gotoxy(42, 6);
			cout << "                     	  ";
			gotoxy(42, 6);
			cin >> temp->docname;
		}
		// 2
		gotoxy(23, 9);
		cout << "Enter Doctor Credential: ";
		cin >> temp->doc_credential;

		if (isEmpty2())
		{
			goto y;
		}
		
	y:
		while ((check(temp->doc_credential) == false) || (temp->doc_credential == temp->docname))
		{
			gotoxy(48, 9);
			cout << "                     ";
			gotoxy(48, 9);
			cin >> temp->doc_credential;
		}
		// 3
		gotoxy(23, 12);
		cout << "Enter Doctor ID: ";
		cin >> temp->docid;
		if (isEmpty2())
		{
			goto a;
		}
		else
		{
			while (tail2->docid == temp->docid)
			{
				gotoxy(39, 12);
				cout << "                  	 " << endl;
				gotoxy(39, 12);
				cin >> temp->docid;
			}
		}
	a:
		while (check_alphabet(temp->docid) == false)
		{
			cin.clear();
			gotoxy(39, 12);
			cout << "                  	 " << endl;
			gotoxy(39, 12);
			cin >> temp->docid;
		}
		// 4
		gotoxy(23, 15);
		cout << "Enter Doctor Birth Year: ";
		cin >> temp->docdob;
		if (isEmpty())
		{
			goto ai;
		}
		
	ai:
		while (check_alphabet(temp->docdob) == false)
		{
			cin.clear();
			gotoxy(48, 15);
			cout << "                  	 " << endl;
			gotoxy(48, 15);
			cin >> temp->docdob;
		}

		temp->next2 = NULL;
		if (head2 == NULL)
		{
			head2 = temp;
			tail2 = temp;
			temp = NULL;
		}
		else
		{
			tail2->next2 = temp;
			tail2 = temp;
		}
		count2++;
	}
	//
	void docedit()
	{
		doc_node *f = new doc_node;
		doc_node *t = new doc_node;
		cout << "Enter The Doctor ID which you want to Edit :\n";
		while (!(cin >> t->docid))
		{
			cin.clear();
			system("CLS");
			cout << "Invalid input...! \n\n";
			system("pause");
			system("CLS");
			goto ss;
		}
		f = head2;
		while (f != NULL)
		{
			if (t->docid == f->docid)
				break;
			f = f->next2;
		}
		if (f == NULL)
		{
		ss:
			system("CLS");
			cout << "Sorry .....Record of Doctor does'nt Exist \n\n";
		}
		else
		{
			system("CLS");
			// 1
			gotoxy(2, 2);
			Above_horizental();
			gotoxy(2, 3);
			Line();
			gotoxy(77, 3);
			Line();
			gotoxy(2, 4);
			below_Horizental();
			// 2
			gotoxy(2, 5);
			Above_horizental();
			gotoxy(2, 6);
			Line();
			gotoxy(77, 6);
			Line();
			gotoxy(2, 7);
			below_Horizental();
			// 3
			gotoxy(2, 8);
			Above_horizental();
			gotoxy(2, 9);
			Line();
			gotoxy(77, 9);
			Line();
			gotoxy(2, 10);
			below_Horizental();
			// 4
			gotoxy(2, 11);
			Above_horizental();
			gotoxy(2, 12);
			Line();
			gotoxy(77, 12);
			Line();
			gotoxy(2, 13);
			below_Horizental();
		

			doc_node *tempo = new doc_node;

			gotoxy(23, 3);
			cout << "Enter Doctor Name: ";
			cin >> tempo->docname;

			while (check(tempo->docname) == false)
			{
				gotoxy(43, 3);
				cout << "                     	  ";
				gotoxy(43, 3);
				cin >> tempo->docname;
			}
			//
			f->docname = tempo->docname;
			gotoxy(23, 6);
			cout << "Enter Doctor Credential: ";
			cin >> tempo->doc_credential;

			while ((check(tempo->doc_credential) == false) || (tempo->doc_credential == tempo->docname))
			{
				gotoxy(48, 6);
				cout << "                     ";
				gotoxy(48, 6);
				cin >> tempo->doc_credential;
			}
			f->doc_credential = tempo->doc_credential;
			gotoxy(23, 9);
			cout << "Enter Doctor ID: ";
			cin >> tempo->docid;
			while (check_alphabet(tempo->docid) == false)
			{
				gotoxy(39, 9);
				cout << "                  	 " << endl;
				gotoxy(39, 9);
				cin >> tempo->docid;
			}
			f->docid = tempo->docid;
			//
			gotoxy(23, 12);
			cout << "Enter Doctor Birt Year: ";
			cin >> tempo->docdob;
			while (check_alphabet(tempo->docdob) == false)
			{
				gotoxy(48, 12);
				cout << "                  	 " << endl;
				gotoxy(48, 12);
				cin >> tempo->docdob;
			}
			f->docdob = tempo->docdob;
			//
			gotoxy(23, 18);

			cout << "\n\n";
		}
	}

	//
	void docsearch()
	{
		doc_node *temp = new doc_node;
		doc_node *t;
		cout << "Enter The Doctor ID In Order To Search :\n";
		while (!(cin >> temp->docid))
		{
			cin.clear();
			system("CLS");
			cout << "Invalid input...! \n\n";
			system("pause");
			system("CLS");
			goto zz;
		}
		t = head2;
		while (t != NULL)
		{
			if (t->docid == temp->docid)
				break;
			t = t->next2;
		}
		if (t == NULL)
		{
		zz:
			system("CLS");
			cout << "Sorry ..... Record does'nt Exist \n\n";
		}
		else
		{
			doctabledis();
			gotoxy(2, 8);
			Above_horizental();
			gotoxy(2, 9);
			Line();
			gotoxy(77, 9);
			Line();
			gotoxy(4, 9);
			cout << t->docname << "\t" << t->doc_credential << "\t    " << t->docid << "\t   " << t->docdob;
			gotoxy(2, 10);
			below_Horizental();
		}
	}

	//
	bool docdelete(int srno2)
	{
		string s;
		doc_node *temp,*temp1;
		doc_node *curr, *pre;

		cout << "Enter The Doctor ID In Order To Delete :\n";
		while (!(cin >>s ))
		{
			cin.clear();
			system("CLS");
			cout << "Invalid input...! \n\n";
			system("pause");
			system("CLS");
			goto aa;
		}
		if (s == head2->docid)
		{
			temp = head2;
			head2 = head2->next2;
			delete temp;
			cout << endl
				 << endl;
			doctabledis();
			doctable();
			return true;
		}
		else
		{
			curr = head2;
			pre = NULL;
			while (curr != NULL)
			{
				if (curr->docid == s)
				{
					break;
				}
				pre = curr;
				curr = curr->next2;
			}
			if (curr == NULL)
			{
			aa:
				system("CLS");
				cout << "No record Found \n\n";
				return false;
			}
			else
			{
				pre->next2 = curr->next2;
				delete curr;
				doctabledis();
				doctable();
				return true;
			}
		}
	}
	//

	//
	void doctable()
	{
		doc_node *t;
		t = head2;
		int x = 4;
		int y = 8;
		int s = 2;
		while (t != NULL)
		{
			gotoxy(s, y);
			Above_horizental();
			gotoxy(s, y + 1);
			Line();
			gotoxy(s + 75, y + 1);
			Line();
			gotoxy(x, y + 1);
			cout << t->docname << "\t" << t->doc_credential << "\t\t" << t->docid << "\t   " << t->docdob;
			t = t->next2;
			gotoxy(s, y + 2);
			below_Horizental();
			y = y + 3;
		}
		gotoxy(s, y + 1);
		Above_horizental();
		gotoxy(s, y + 2);
		Line();
		gotoxy(s + 75, y + 2);
		Line();
		gotoxy(x + 31, y + 2);
		cout << "Finish";
		gotoxy(s, y + 3);
		below_Horizental();
	}
	//
	void doctabledis()
	{
		gotoxy(2, 3);
		Above_horizental();
		gotoxy(2, 4);
		Line();
		gotoxy(77, 4);
		Line();
		gotoxy(2, 5);
		Line();
		gotoxy(77, 5);
		Line();
		gotoxy(2, 6);
		Line();
		gotoxy(77, 6);
		Line();
		gotoxy(2, 7);
		below_Horizental();
		gotoxy(33, 4);
		cout << "DOCTOR RECORD" << endl;
		gotoxy(4, 6);
		cout << "NAME        "
			 << "CREDENTIALS       "
			 << "ID	      "
			 << "YEAR      ";
	}
	// doctor data end
};

// start of The class patient

class patient : public admin
{
public:
	bool found = false;
	string patientid,patientname;
	bool patientlogin(admin obj)
	{
		node *temp = new node;
		node *t;
		obj.gotoxy(2, 2);
		obj.Above_horizental();
		obj.gotoxy(2, 3);
		obj.Line();
		obj.gotoxy(77, 3);
		obj.Line();
		obj.gotoxy(2, 4);
		obj.Line();
		obj.gotoxy(77, 4);
		obj.Line();
		obj.gotoxy(2, 5);
		obj.Line();
		obj.gotoxy(77, 5);
		obj.Line();
		obj.gotoxy(2, 6);
		obj.Line();
		obj.gotoxy(77, 6);
		obj.Line();
		obj.gotoxy(2, 7);
		obj.Line();
		obj.gotoxy(77, 7);
		obj.Line();
		obj.gotoxy(2, 8);
		obj.Line();
		obj.gotoxy(77, 8);
		obj.Line();
		obj.gotoxy(2, 9);
		obj.Line();
		obj.gotoxy(77, 9);
		obj.Line();
		obj.gotoxy(2, 10);
		obj.Line();
		obj.gotoxy(77, 10);
		obj.Line();
		obj.gotoxy(2, 11);
		obj.Line();
		obj.gotoxy(77, 11);
		obj.Line();
		obj.gotoxy(2, 12);
		obj.Line();
		obj.gotoxy(77, 12);
		obj.Line();
		obj.gotoxy(2, 13);
		obj.Line();
		obj.gotoxy(77, 13);
		obj.Line();
		obj.gotoxy(2, 14);
		obj.Line();
		obj.gotoxy(77, 14);
		obj.Line();
		obj.gotoxy(2, 15);
		obj.below_Horizental();
		obj.gotoxy(35, 3);
		cout << "LOGIN MENU" << endl;
		obj.gotoxy(28, 1);
		cout << "HOSPITAL MANAGEMENT SYSTEM" << endl;
		obj.gotoxy(33, 6);
		cout << "Enter Your Login ID" << endl;
		obj.gotoxy(33, 8);
		cin >> temp->id;
		
	j:
		while (check_alphabet(temp->id) == false)
		{
			gotoxy(42, 21);
			cout << "                     	  ";
			gotoxy(42, 21);
			cin >> temp->id;
		}
		t = obj.head;
		while (t != NULL)
		{
			if (t->id == temp->id)
			{ 
			    patientid=temp->id;
				patientname=t->name;
				found = true;
				break;
			}
			else
			{
				t = t->next;
			}
		}
		if (t == NULL)
		{
		zz:
			system("CLS");
			cout << "Sorry ..... Record does'nt Exist \n\n";
			system("pause");
			system("CLS");
			found = false;
		}

		if (found == true)
		{   system("CLS");
			return true;
		}
		else
		{system("CLS");
			return false;
		}
	}
	void patientmenu(admin obj)
	{
		obj.gotoxy(2, 2);
		obj.Above_horizental();
		obj.gotoxy(2, 3);
		obj.Line();
		obj.gotoxy(77, 3);
		obj.Line();
		obj.gotoxy(2, 4);
		obj.Line();
		obj.gotoxy(77, 4);
		obj.Line();
		obj.gotoxy(2, 5);
		obj.Line();
		obj.gotoxy(77, 5);
		obj.Line();
		obj.gotoxy(2, 6);
		obj.Line();
		obj.gotoxy(77, 6);
		obj.Line();
		obj.gotoxy(2, 7);
		obj.Line();
		obj.gotoxy(77, 7);
		obj.Line();
		obj.gotoxy(2, 8);
		obj.Line();
		obj.gotoxy(77, 8);
		obj.Line();
		obj.gotoxy(2, 9);
		obj.Line();
		obj.gotoxy(77, 9);
		obj.Line();
		obj.gotoxy(2, 10);
		obj.Line();
		obj.gotoxy(77, 10);
		obj.Line();
		obj.gotoxy(2, 11);
		obj.Line();
		obj.gotoxy(77, 11);
		obj.Line();
		obj.gotoxy(2, 12);
		obj.Line();
		obj.gotoxy(77, 12);
		obj.Line();
		obj.gotoxy(2, 13);
		obj.Line();
		obj.gotoxy(77, 13);
		obj.Line();
		obj.gotoxy(2, 14);
		obj.Line();
		obj.gotoxy(77, 14);
		obj.Line();
		obj.gotoxy(2, 15);
		obj.below_Horizental();
		obj.gotoxy(35, 3);
		cout << "MAIN MENU" << endl;
		obj.gotoxy(28, 1);
		cout << "HOSPITAL MANAGEMENT SYSTEM" << endl;
		obj.gotoxy(38, 6);
		cout << patientname  << endl;
		obj.gotoxy(33, 8);
		cout << "1-See  Your Record" << endl;
		obj.gotoxy(33, 10);
		cout << "2-Main Menu" << endl;
		obj.gotoxy(33, 12);
	}
	void search_Record_Patient(admin obj)
	{
		node *temp = new node;
		node *t;
		cout << "Enter Your ID In Order To See Your Record :\n";
		while (!(cin >> temp->id))
		{
			cin.clear();
			system("CLS");
			cout << "Invalid input...! \n\n";
			system("pause");
			system("CLS");
			goto zz;
		}
		t = obj.head;
		while (t != NULL)
		{
			if (t->id == temp->id && temp->id == patientid)
				break;
			t = t->next;
		}
		if (t == NULL)
		{
		zz:
			system("CLS");
			cout << "Sorry ..... Record does'nt Exist \n\n";
		}
		else
		{
			obj.display_table();
			obj.gotoxy(2, 8);
			obj.Above_horizental();
			obj.gotoxy(2, 9);
			obj.Line();
			obj.gotoxy(77, 9);
			obj.Line();
			obj.gotoxy(4, 9);
			cout << t->name << "\t" << t->fname << "\t    " << t->id << "\t   " << t->dob << "\t   " << t->ward << "\t   " << t->days << "\t" << t->doc_id;
			obj.gotoxy(2, 10);
			obj.below_Horizental();
		}
	}
	
};

// start of The class doctor

class doctor : public admin2
{
public:
	string loggedInDoctorName,doctorid;
	bool found = false;
	bool dlogin(admin2 obj1,admin obj)
	{
		doc_node *temp = new doc_node;
		doc_node *t;
		obj.gotoxy(2, 2);
		obj.Above_horizental();
		obj.gotoxy(2, 3);
		obj.Line();
		obj.gotoxy(77, 3);
		obj.Line();
		obj.gotoxy(2, 4);
		obj.Line();
		obj.gotoxy(77, 4);
		obj.Line();
		obj.gotoxy(2, 5);
		obj.Line();
		obj.gotoxy(77, 5);
		obj.Line();
		obj.gotoxy(2, 6);
		obj.Line();
		obj.gotoxy(77, 6);
		obj.Line();
		obj.gotoxy(2, 7);
		obj.Line();
		obj.gotoxy(77, 7);
		obj.Line();
		obj.gotoxy(2, 8);
		obj.Line();
		obj.gotoxy(77, 8);
		obj.Line();
		obj.gotoxy(2, 9);
		obj.Line();
		obj.gotoxy(77, 9);
		obj.Line();
		obj.gotoxy(2, 10);
		obj.Line();
		obj.gotoxy(77, 10);
		obj.Line();
		obj.gotoxy(2, 11);
		obj.Line();
		obj.gotoxy(77, 11);
		obj.Line();
		obj.gotoxy(2, 12);
		obj.Line();
		obj.gotoxy(77, 12);
		obj.Line();
		obj.gotoxy(2, 13);
		obj.Line();
		obj.gotoxy(77, 13);
		obj.Line();
		obj.gotoxy(2, 14);
		obj.Line();
		obj.gotoxy(77, 14);
		obj.Line();
		obj.gotoxy(2, 15);
		obj.below_Horizental();
		obj.gotoxy(35, 3);
		cout << "LOGIN MENU" << endl;
		obj.gotoxy(28, 1);
		cout << "HOSPITAL MANAGEMENT SYSTEM" << endl;
		obj.gotoxy(33, 6);
		cout << "Enter Your Login ID" << endl;
		obj.gotoxy(33, 8);
		cin >> temp->docid;
		
	j:
		while (check_alphabet(temp->docid) == false)
		{
			gotoxy(42, 21);
			cout << "                     	  ";
			gotoxy(42, 21);
			cin >> temp->docid;
		}
		t = obj1.head2;
		while (t != NULL)
		{
			if (t->docid == temp->docid)
			{ 
			    doctorid=temp->docid;
				loggedInDoctorName=t->docname;
				found = true;
				break;
			}
			else
			{
				t = t->next2;
			}
		}
		if (t == NULL)
		{
		zz:
			system("CLS");
			cout << "Sorry ..... Record does'nt Exist \n\n";
			system("pause");
			system("CLS");
			found = false;
		}

		if (found == true)
		{   system("CLS");
			return true;
		}
		else
		{system("CLS");
			return false;
		}
	}
	void docmenu(admin obj)
	{
		obj.gotoxy(2, 2);
		obj.Above_horizental();
		obj.gotoxy(2, 3);
		obj.Line();
		obj.gotoxy(77, 3);
		obj.Line();
		obj.gotoxy(2, 4);
		obj.Line();
		obj.gotoxy(77, 4);
		obj.Line();
		obj.gotoxy(2, 5);
		obj.Line();
		obj.gotoxy(77, 5);
		obj.Line();
		obj.gotoxy(2, 6);
		obj.Line();
		obj.gotoxy(77, 6);
		obj.Line();
		obj.gotoxy(2, 7);
		obj.Line();
		obj.gotoxy(77, 7);
		obj.Line();
		obj.gotoxy(2, 8);
		obj.Line();
		obj.gotoxy(77, 8);
		obj.Line();
		obj.gotoxy(2, 9);
		obj.Line();
		obj.gotoxy(77, 9);
		obj.Line();
		obj.gotoxy(2, 10);
		obj.Line();
		obj.gotoxy(77, 10);
		obj.Line();
		obj.gotoxy(2, 11);
		obj.Line();
		obj.gotoxy(77, 11);
		obj.Line();
		obj.gotoxy(2, 12);
		obj.Line();
		obj.gotoxy(77, 12);
		obj.Line();
		obj.gotoxy(2, 13);
		obj.Line();
		obj.gotoxy(77, 13);
		obj.Line();
		obj.gotoxy(2, 14);
		obj.Line();
		obj.gotoxy(77, 14);
		obj.Line();
		obj.gotoxy(2, 15);
		obj.below_Horizental();
		obj.gotoxy(35, 3);
		cout << "MAIN MENU" << endl;
		obj.gotoxy(28, 1);
		cout << "HOSPITAL MANAGEMENT SYSTEM" << endl;
		obj.gotoxy(38, 6);
		cout << loggedInDoctorName << endl;
		obj.gotoxy(33, 8);
		cout << "1-See  Your Record" << endl;
		obj.gotoxy(33, 10);
		cout << "2-Search Patient" << endl;
		obj.gotoxy(33, 12);
		cout << "3-All Patient" << endl;
		obj.gotoxy(33, 14);
		cout << "4-Main Menu" << endl;
		obj.gotoxy(33, 15);
	}
	void see_docRecord2(admin2 obj1, admin obj)
	{
		doc_node *temp = new doc_node;
		doc_node *t;
		cout << "Enter Your ID In Order To See Your Record  :\n";
		while (!(cin >> temp->docid))
		{
			cin.clear();
			system("CLS");
			cout << "Invalid input...! \n\n";
			system("pause");
			system("CLS");
			goto zz;
		}
		t = obj1.head2;
		while (t != NULL)
		{
			if (t->docid == temp->docid && temp->docid==doctorid)
				break;
			t = t->next2;
		}
		if (t == NULL)
		{
		zz:
			system("CLS");
			cout << "Sorry ..... Record does'nt Exist \n\n";
		}
		else
		{
			obj1.doctabledis();
			obj.gotoxy(2, 8);
			obj.Above_horizental();
			obj.gotoxy(2, 9);
			obj.Line();
			obj.gotoxy(77, 9);
			obj.Line();
			obj.gotoxy(4, 9);
			cout << t->docname << "\t" << t->doc_credential << "\t\t" << t->docid << "\t   " << t->docdob;
			obj.gotoxy(2, 10);
			obj.below_Horizental();
		}
	
	}
	void search_patientRecord(admin obj)
	{
		node *temp = new node;
		node *t;
		cout << "Enter The ID of Patient In Order To Search :\n";
		while (!(cin >> temp->id))
		{
			cin.clear();
			system("CLS");
			cout << "Invalid input...! \n\n";
			system("pause");
			system("CLS");
			goto zz;
		}
		t = obj.head;
		while (t != NULL)
		{
			if (t->id == temp->id && t->doc_id == doctorid)
				break;
			t = t->next;
		}
		if (t == NULL)
		{
		zz:
			system("CLS");
			cout << "Sorry ..... Record does'nt Exist \n\n";
		}
		else
		{
			obj.display_table();
			obj.gotoxy(2, 8);
			obj.Above_horizental();
			obj.gotoxy(2, 9);
			obj.Line();
			obj.gotoxy(77, 9);
			obj.Line();
			obj.gotoxy(4, 9);
			cout << t->name << "\t\t" << t->fname << "\t    " << t->id << "\t   " << t->dob << "\t   " << t->ward << "\t   " << t->days << "\t" << t->doc_id;
			obj.gotoxy(2, 10);
			obj.below_Horizental();
		}                                                                                                                                                                                                                         
	}
	
void all_patient(admin obj) {
    node* t = obj.head;
    string doctorcheckid;

    cout << "Enter Your ID To See Your Patient List:\n";
    while (!(cin >> doctorcheckid)) {
        cin.clear();
        system("CLS");
        cout << "Invalid input...!\n\n";
        system("pause");
        system("CLS");
    }

    
    if (doctorcheckid != doctorid) {
        system("CLS");
        cout << "Access denied. You can only view your own patients.\n\n";
        return;
    }



        obj.display_table();
        int x = 4;
		int y = 8;
		int s = 2;
		while (t != NULL)
		{
			if(t->doc_id == doctorcheckid && t->doc_id==doctorid){
			gotoxy(s, y);
			Above_horizental();
			gotoxy(s, y + 1);
			Line();
			gotoxy(s + 75, y + 1);
			Line();
			gotoxy(x, y + 1);
			cout << t->name << "\t" << t->fname << "\t    " << t->id << "\t   " << t->dob << "\t   " << t->ward << "\t   " << t->days << "\t" << t->doc_id;
			t = t->next;
			gotoxy(s, y + 2);
			below_Horizental();
			y = y + 3;
		}
		}
		gotoxy(s, y + 1);
		Above_horizental();
		gotoxy(s, y + 2);
		Line();
		gotoxy(s + 75, y + 2);
		Line();
		gotoxy(x + 31, y + 2);
		cout << "Finish";
		gotoxy(s, y + 3);
		below_Horizental();
		}

	
};

// main menu
void main_Menu(admin obj)
{
obj.gotoxy(2, 2);
		obj.Above_horizental();
		obj.gotoxy(2, 3);
		obj.Line();
		obj.gotoxy(77, 3);
		obj.Line();
		obj.gotoxy(2, 4);
		obj.Line();
		obj.gotoxy(77, 4);
		obj.Line();
		obj.gotoxy(2, 5);
		obj.Line();
		obj.gotoxy(77, 5);
		obj.Line();
		obj.gotoxy(2, 6);
		obj.Line();
		obj.gotoxy(77, 6);
		obj.Line();
		obj.gotoxy(2, 7);
		obj.Line();
		obj.gotoxy(77, 7);
		obj.Line();
		obj.gotoxy(2, 8);
		obj.Line();
		obj.gotoxy(77, 8);
		obj.Line();
		obj.gotoxy(2, 9);
		obj.Line();
		obj.gotoxy(77, 9);
		obj.Line();
		obj.gotoxy(2, 10);
		obj.Line();
		obj.gotoxy(77, 10);
		obj.Line();
		obj.gotoxy(2, 11);
		obj.Line();
		obj.gotoxy(77, 11);
		obj.Line();
		obj.gotoxy(2, 12);
		obj.Line();
		obj.gotoxy(77, 12);
		obj.Line();
		obj.gotoxy(2, 13);
		obj.Line();
		obj.gotoxy(77, 13);
		obj.Line();
		obj.gotoxy(2, 14);
		obj.Line();
		obj.gotoxy(77, 14);
		obj.Line();
		obj.gotoxy(2, 15);
	obj.Line();
	obj.gotoxy(77, 15);
	obj.Line();
	obj.gotoxy(2, 16);
	obj.Line();
	obj.gotoxy(77, 16);
	obj.Line();
	obj.gotoxy(2, 17);
	obj.Line();
	obj.gotoxy(77, 17);
	obj.Line();
	obj.gotoxy(2, 18);
	obj.Line();
	obj.gotoxy(77, 18);
	obj.Line();
	obj.gotoxy(2, 19);
	obj.Line();
	obj.gotoxy(77, 19);
	obj.Line();
	obj.gotoxy(2, 20);
	obj.Line();
	obj.gotoxy(77, 20);
	obj.Line();
	obj.gotoxy(2, 21);
	obj.below_Horizental();
	//
	obj.gotoxy(35, 3);
	cout << "MAIN MENU" << endl;
	obj.gotoxy(28, 1);
	cout << "HOSPITAL MANAGEMENT SYSTEM" << endl;
	obj.gotoxy(33, 6);
	cout << "1-ADDMINISTRATOR" << endl;
	obj.gotoxy(33, 8);
	cout << "2-PATIENT" << endl;
	obj.gotoxy(33, 10);
	cout << "3-DOCTOR" << endl;
	obj.gotoxy(33, 12);
	cout << "4-QUIT PROGRAM" << endl;
}


int main()
{
	//int srno=0,srno2=0
	int ch,n;
	admin obj;
	admin2 obj1;
	system("CLS");

	int ch1;
	char loader = 254;
	cout << "\t\t\t\tLoading" << endl;
	obj.gotoxy(20, 2);
	for (int i = 0; i < 30; i++)
	{
		system("color 74");
		cout << loader;
		Sleep(10);
	}
	system("cls");

A:

	main_Menu(obj);
	obj.gotoxy(4, 23);
	cout << "Enter Your Choice: ";
a:
	char c;
	cin >> c;
	if (c >= '1' && c <= '4')
	{
		ch1 = c - 48;
		cout << c;
		goto a2;
	}

	goto a;

a2:
	Sleep(200);
	system("CLS");
	switch (ch1)
	{
	// 1
	case 1:
	{ // addministrator
		int ch3;
		system("CLS");
		int validity2 = obj.adminpass();
		if (validity2 == false)
		{
			goto A;
		}
		else
		{
		B:

			obj.sub_menu(); // patient,doctor,main menu
			obj.gotoxy(4, 23);
			cout << "Enter Your Choice: ";
		b:
			char c;
			cin >> c;
			if (c >= '1' && c <= '3')
			{
				ch3 = c - 48;
				cout << c;
				goto b2;
			}

			goto b;

		b2:
			Sleep(200);
			system("CLS");
			switch (ch3)
			{
			case 1:
			{ // addministrator par patient record set
				system("cls");

			L:
				obj.Menu();
				obj.gotoxy(4, 23);
				cout << "Enter Your Choice: ";
			l:
				char c;
				cin >> c;
				if (c >= '1' && c <= '6')
				{
					ch = c - 48;
					cout << c;
					goto l2;
				}
				goto l;

			l2:
				Sleep(200);
				system("CLS");
				switch (ch)
				{
					// 1
				case 1:

					cout << "How Many Patients Record You Want To Enter: ";
					while (!(cin >> n))
					{
						cin.clear();
						system("CLS");
						obj.gotoxy(2, 2);
						obj.Above_horizental();
						obj.gotoxy(2, 3);
						obj.Line();
						obj.gotoxy(77, 3);
						obj.Line();
						obj.gotoxy(2, 4);
						obj.below_Horizental();
						obj.gotoxy(4, 3);
						cout << "Invalid input...  Try again: \n\n";
						system("pause");
						system("CLS");
						goto L;
					}

					system("CLS");
					if (obj.isEmpty())
					{
						
						for (int i = 0; i < n; i++)
						{
							srno++;
							obj.add_data(srno);
							
							system("CLS");
						}
					}
					else
					{
						for (int i = 0; i < n; i++)
						{    
						srno++;
							obj.add_data(srno);
							
							system("CLS");
						}
					}
					cout << "Record Added Successfully...! \n";
					system("pause");
					system("CLS");
					goto L;
					break;

					// 2
				case 2:
					system("CLS");
					if (obj.isEmpty())
					{
						cout << "Please Add Record first....! \n"
							 << endl;
					}
					else
					{
						obj.Edit_Record();
					}
					system("pause");
					system("CLS");
					goto L;
					break;

					// 3
				case 3:
					system("CLS");
					if (obj.isEmpty())
					{
						cout << "Please Add Record first....! \n"
							 << endl;
					}
					else
					{
						obj.search_Record();
					}
					system("pause");
					system("CLS");
					goto L;
					break;

					// 4
				case 4:
					system("CLS");
					if (obj.isEmpty())
					{
						cout << "record Is Empty....! \n"
							 << endl;
					}
					else
					{
						srno--;
						bool  ans1=obj.Delete_Record(srno);
						if(ans1==false){
							srno++;
						}
						else{
							
						}
						
					}
					system("pause");
					system("CLS");
					goto L;
					break;

					// 5
				case 5:
					system("CLS");
					if (obj.isEmpty())
					{
						cout << "Please Add Record first....! \n"
							 << endl;
					}
					else
					{
						obj.display_table();
						obj.table_data();
					}
					system("pause");
					system("CLS");
					goto L;
					break;

					// 6
				case 6:
					goto B; // return sub menu
				default:
					system("CLS");
					cout << "INVALID NUMBER.. " << endl;
					system("pause");
					system("CLS");
					goto L;
				}
				break;
			} /// addministrator par patient ka case break
			case 2:
			{ // addministrator par doctor ka record set
				system("cls");

			D:
				obj1.Menu();
				obj.gotoxy(4, 23);
				cout << "Enter Your Choice: ";
			d:
				char c;
				cin >> c;
				if (c >= '1' && c <= '6')
				{
					ch = c - 48;
					cout << c;
					goto d2;
				}
				goto d;

			d2:
				Sleep(200);
				system("CLS");
				switch (ch)
				{
					// 1
				case 1:

					cout << "How Many Doctor Record You Want To Enter: ";
					while (!(cin >> n))
					{
						cin.clear();
						system("CLS");
						obj.gotoxy(2, 2);
						obj.Above_horizental();
						obj.gotoxy(2, 3);
						obj.Line();
						obj.gotoxy(77, 3);
						obj.Line();
						obj.gotoxy(2, 4);
						obj.below_Horizental();
						obj.gotoxy(4, 3);
						cout << "Invalid input...  Try again: \n\n";
						system("pause");
						system("CLS");
						goto D;
					}

					system("CLS");
					if (obj1.isEmpty2())
					{
						
						for (int i = 0; i < n; i++)
						{
							srno2++;
							obj1.docdata(srno2);
							
							system("CLS");
						}
					}
					else
					{
						for (int i = 0; i < n; i++)
						{
							srno2++;
							obj1.docdata(srno2);
							
							system("CLS");
						}
					}
					cout << "Record Added Successfully...! \n";
					system("pause");
					system("CLS");
					goto D;
					break;

					// 2
				case 2:
					system("CLS");
					if (obj1.isEmpty2())
					{
						cout << "Please Add Record first....! \n"
							 << endl;
					}
					else
					{
						obj1.docedit();
					}
					system("pause");
					system("CLS");
					goto D;
					break;

					// 3
				case 3:
					system("CLS");
					if (obj1.isEmpty2())
					{
						cout << "Please Add Record first....! \n"
							 << endl;
					}
					else
					{
						obj1.docsearch();
					}
					system("pause");
					system("CLS");
					goto D;
					break;

					// 4
				case 4:
					system("CLS");
					if (obj1.isEmpty2())
					{
						cout << "record Is Empty....! \n"
							 << endl;
					}
					else
					{
						srno2--;
						bool  ans=obj1.docdelete(srno2);
						if(ans==false){
							srno2++;
						}
						else{
						}
					}
					system("pause");
					system("CLS");
					goto D;
					break;

					// 5
				case 5:
					system("CLS");
					if (obj1.isEmpty2())
					{
						cout << "Please Add Record first....! \n"
							 << endl;
					}
					else
					{
						obj1.doctabledis();
						obj1.doctable();
					}
					system("pause");
					system("CLS");
					goto D;
					break;

					// 6
				case 6:
					goto B; // sub menu
				default:
					system("CLS");
					cout << "INVALID NUMBER.. " << endl;
					system("pause");
					system("CLS");
					goto D;
				}
				break;
			} // administrator par doctor ka record break

			case 3:
			{ // addministrator say wapas main menu
				goto A;
				break;
			}
			default:
				system("CLS");
				cout << "INVALID NUMBER.. " << endl;
				system("pause");
				system("CLS");
				goto B;
			}
		} // end of admin case:

		break; // addministrator case break
	}

	case 2:
	{ // patient case start
		int ch2;
		patient p1;
		bool validity1 = p1.patientlogin(obj);
		if (validity1 == false)
		{
			goto A;
		}
		else
		{
		P:
			p1.patientmenu(obj);
			obj.gotoxy(4, 23);
			cout << "Enter Your Choice: ";
		p:
			char c;
			cin >> c;
			if (c >= '1' && c <= '2')
			{
				ch2 = c - 48;
				cout << c;
				goto p2;
			}

			goto p;

		p2:
			Sleep(200);
			system("CLS");
			switch (ch2)
			{ // patient class ka search
			case 1:
			{

				system("CLS");
				if (obj.isEmpty())
				{
					cout << "Please Add Record first....! \n"
						 << endl;
				}
				else
				{
					p1.search_Record_Patient(obj);
				}
				system("pause");
				system("CLS");
				goto P;
				break;
			}
			case 2:
			{ // main menu par
				goto A;
				break;
			}

			default:
				system("CLS");
				cout << "INVALID NUMBER.. " << endl;
				system("pause");
				system("CLS");
				goto P;
			} // patient inside case break
		}
	}
	case 3:
	{ // doctor case start
		int ch3;
		doctor d1;
		bool validity3 = d1.dlogin(obj1,obj);
		if (validity3 == false)
		{
			goto A;
		}
		else
		{
		O:
			d1.docmenu(obj);
			obj1.gotoxy(4, 23);
			cout << "Enter Your Choice: ";
		o:
			char c;
			cin >> c;
			if (c >= '1' && c <= '4')
			{
				ch3 = c - 48;
				cout << c;
				goto o2;
			}

			goto o;

		o2:
			Sleep(200);
			system("CLS");
			switch (ch3)
			{ // doctor class ka search
			case 1:
			{
				system("CLS");
				if (obj1.isEmpty2())
				{
					cout << "Please Add Record first....! \n"
						 << endl;
				}
				else
				{
					d1.see_docRecord2(obj1,obj);
				}
				system("pause");
				system("CLS");
				goto O;
				break;
			}
			case 2:
			{
				system("CLS");
				if (obj.isEmpty())
				{
					cout << "Please Add Record first....! \n"
						 << endl;
				}
				else
				{
					d1.search_patientRecord(obj);
				}
				system("pause");
				system("CLS");
				goto O;
				break;
			}
			case 3:
			{
				system("CLS");
				if (obj.isEmpty())
				{
					cout << "Please Add Record first....! \n"
						 << endl;
				}
				else
				{
					d1.all_patient(obj);
				}
				system("pause");
				system("CLS");
				goto O;
				break;
			}
			case 4:
			{			// main menu par
				goto A; // kkjj
				break;
			}

			default:
				system("CLS");
				cout << "INVALID NUMBER.. " << endl;
				system("pause");
				system("CLS");
				goto O;
			} // doctor inside case break
		}
	}
	
	case 4:{
		exit(0);
		break;
	}
	 default:
	
		cout << "INVALID NUMBER.. " << endl;
		
	
		system("pause");
	}
}
//
bool check(string a)
{
	int i = 0;
	while (a[i] != 0)
	{
		if (a[i] >= 48 && a[i] <= 53)
		{
			return false;
		}
		else
		{
			i++;
	}
		}
	return true;
}
//
bool check_alphabet(string a)
{
	int i = 0;
	while (a[i] != 0)
	{
		if (a[i] >= 65 && a[i] <= 122)
		{
			return false;
		}
		else
		{
			i++;
		}
	}
	return true;
}
