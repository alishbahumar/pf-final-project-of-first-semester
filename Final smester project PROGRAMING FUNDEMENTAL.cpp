#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
struct Customer 
{
    string name;
    string phone;
    string address;
    string ticketType;
    string seatType;
    string showtime;

};
void setColor(int color);
void addCustomer(Customer customers[], int& size)
{
 if (size<100)   
 {
 	setColor(1);
     cout<<"Enter name of customer="<<endl;
     getline(cin, customers[size].name);
     cout<<"Enter customer phone number"<<endl;
     getline(cin, customers[size].phone);
     cout<<"Enter customer address"<<endl;
     getline(cin, customers[size].address);
     cout<<"Enter the type of ticket(high class,family etc)"<<endl;
     getline(cin, customers[size].ticketType);
     cout<<"Enter the type of seat(golden or silver) "<<endl;
     getline(cin, customers[size].seatType);
     cout<<"Enter the showtime(morning or evening)"<<endl;
     getline(cin, customers[size].showtime);
     size++;
     setColor(2);
     cout<<"The ticket is booked for the customer"<<endl;
     }
     else
     {
     	setColor(3);
         cout<<"Customers list is full. No more customers can be add."<<endl;
    }
}

void displayCustomers(const Customer customers[], int size)
{
    if (size==0)
    {
    	setColor(4);
        cout<<"No customers in the list"<<endl;
    }
    else
    {
    	setColor(5);
        cout<<"Customers list="<<endl;
        for (int i=0; i<size; i++)
        {
        	setColor(6);
            cout<<"Name="<<customers[i].name<<endl;
            cout<<"Phone="<<customers[i].phone<<endl;
            cout<<"Address="<<customers[i].address<<endl;
            cout<<"ticket Type="<<customers[i].ticketType<<endl;
            cout<<"seat Type="<<customers[i].seatType<<endl;
            cout<<"show time="<<customers[i].showtime<<endl;
            cout<<endl;
        }
    }
}
void searchCustomer(Customer customers[], int size) {
	setColor(5);
    cout << "Enter customer name to search: ";
    string name;
    getline(cin, name);

    for (int i = 0; i < size; i++) 
    {
        if (customers[i].name == name) 
        {
        	setColor(12);
            cout << "Customer found!"<<endl;
             cout    << "Name: " << customers[i].name <<endl;
               cout  << "Phone: " << customers[i].phone <<endl;
               cout  << "Address: " << customers[i].address<<endl;
               cout<<"ticket Type:"<<customers[i].ticketType<<endl;
            cout<<"seat Type:"<<customers[i].seatType<<endl;
            cout<<"show time"""<<customers[i].showtime<<endl;
            return; 

        }
    }

    cout << "Customer not found!"<<endl;
}
void deleteCustomer(Customer customers[], int& size) {
	setColor(6);
    cout << "Enter customer name to delete: ";
    string name;
    getline(cin, name);

    for (int i = 0; i < size; i++) {
        if (customers[i].name == name)
        {
            for (int j = i; j < size - 1; j++)
            {
                customers[j] = customers[j + 1];
            }
            size--; 
            setColor(7);
            cout << "Customer deleted successfully!" << endl;
            return; 
        }
    }

    cout << "Customer not found!" << endl; 
}



const int Max_Staff= 50;
struct Staff{
	int id;
	string name;
	string role;
	double salary;
};
void addStaff(Staff staff[],int &count)
{
if(count>=Max_Staff)
{
	setColor(12);
        cout << "Staff list is full! Cannot add more staff.\n";
        return;
}
setColor(11); 
    cout << "Enter Staff ID: ";
    cin >> staff[count].id;
    cout << "Enter Staff Name: ";
    cin>>staff[count].name;
    cout << "Enter Staff Role: ";
   cin>> staff[count].role;
    cout << "Enter Staff Salary: ";
    cin >> staff[count].salary;
    // Clear input buffer
    cin.ignore(); 
    count++;
     setColor(13);
    cout << "Staff added successfully!\n";	
}
void displayStaff(const Staff staff[],int count)
{
	if (count == 0) {
    	 setColor(12); 
        cout << "No staff to display.\n";
        return;
    }
    setColor(14); 
    cout << "\n....Staff Details....\n";
    for (int i = 0; i < count; i++) {
        cout << "Staff ID: " << staff[i].id << "\n";
        cout << "Name: " << staff[i].name << "\n";
        cout << "Role: " << staff[i].role << "\n";
        cout << "Salary: " << staff[i].salary << "\n";
        cout << "---------------------\n";
    }
}
void updateStaff(Staff staff[],int count)
{
	if (count == 0) {
    	setColor(12); 
        cout << "No staff to update.\n";
        return;
    }

    int id;
    setColor(11);
    cout << "Enter Staff ID to update: ";
    cin >> id;

    for (int i = 0; i < count; i++) 
	{
        if (staff[i].id == id)
		 {
            
            cout << "Enter new Name: ";
            cin>>staff[count].name;
            cout << "Enter new Role : ";
            cin>>staff[count].role;
            cout << "Enter new Salary : ";
            cin >> staff[i].salary;
             cin.ignore();
			  // Clear input buffer
            setColor(10);
            cout << "Staff details updated successfully!\n";
            return;
        }
    }
        setColor(12);
    cout << "Staff ID not found.\n";
}
void deleteStaff(Staff staff[], int &count) {
    if (count == 0) {
        cout << "No staff to delete.\n";
        return;
    }

    int id;
     setColor(11); 
    cout << "Enter Staff ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++)
	 {
        if (staff[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                staff[j] = staff[j + 1];
            }
            count--;
            setColor(10);
            cout << "Staff with ID " << id << " deleted successfully.\n";
            return;
        }
    }
     setColor(12);
    cout << "Staff ID not found.\n";
}

struct CinemaFinance {
    float ticketSales;
    float rentExpenses;
    float salaryExpenses;
    float otherExpenses;
};


void enterTicketSales(CinemaFinance &cinema) {
		setColor(10); 
    cout << "Enter total ticket sales: $";
    cin >> cinema.ticketSales;
}


void enterTicketExpenses(CinemaFinance &cinema)
 {
 		setColor(11); 
    cout << "Enter ticket expenses: $";
    cin >> cinema.rentExpenses;
}


void enterSalaryExpenses(CinemaFinance &cinema) {
		setColor(13); 
    cout << "Enter salary expenses: $";
    cin >> cinema.salaryExpenses;
}


void enterOtherExpenses(CinemaFinance &cinema) {
		setColor(10); 
    cout << "Enter other expenses (e.g., utilities, maintenance): $";
    cin >> cinema.otherExpenses;
}


float calculateTotalExpenses(const CinemaFinance &cinema) {
    return cinema.rentExpenses + cinema.salaryExpenses + cinema.otherExpenses;
}


float calculateProfit(const CinemaFinance &cinema) {
    return cinema.ticketSales - calculateTotalExpenses(cinema);
}


void displayFinancialReport(const CinemaFinance &cinema) {
    float totalExpenses = calculateTotalExpenses(cinema);
    float profit = calculateProfit(cinema);
	setColor(14); 
    cout << "\n--- Financial Report ---\n";
    cout << "Total Ticket Sales: $" << cinema.ticketSales << endl;
    cout << "Rent Expenses: $" << cinema.rentExpenses << endl;
    cout << "Salary Expenses: $" << cinema.salaryExpenses << endl;
    cout << "Other Expenses: $" << cinema.otherExpenses << endl;
    cout << "Total Expenses: $" << totalExpenses << endl;
    cout << "Profit: $" << profit << endl;
}


void deleteFinancialData(CinemaFinance &cinema) {
    cinema.ticketSales = 0;
    cinema.rentExpenses = 0;
    cinema.salaryExpenses = 0;
    cinema.otherExpenses = 0;
    	setColor(15); 
    cout << "All financial data has been deleted to 0.\n";
}

void displayMenu() {
		setColor(13); 
    cout << "\n--- Cinema Finance Management System ---\n";
    cout << "1. Add Ticket Sales\n";
    cout << "2. Add Ticket Expenses\n";
    cout << "3. Add Salary Expenses\n";
    cout << "4. Add Other Expenses\n";
    cout << "5. View Financial Report (Read)\n";
    cout << "6. Delete/Reset All Data\n";
    cout << "7. Exit\n";
    cout << "Enter your choice: ";
}



int main()
{
	setColor(12);
cout << "\t\t\t*************************************************" << endl;
cout << "\t\t\t*******WELCOME TO CINEMA MANAGEMENT SYSTEM*******" << endl;
cout << "\t\t\t*************************************************" << endl;

string username;
	int password=12345;
	setColor(9);
	cout<<"Enter the username"<<endl;
	cin>>username;
	int pass;
	cout<<"Enter the password"<<endl;
	cin>>pass;
	if(password==pass)
	{
		setColor(14);
		cout<<"LOGIN SUCCESSFUL!"<<endl;
	
	}
	else
	{
		cout<<"you entered invalid password"<<endl;
	
	}

	
	int choice;
	do{
		p:
	setColor(6);
	cout<<"Which managemnent you want to see?? Enter the choice"<<endl;
	cout<<"1.---Cinema customers management ----"<<endl;
	cout<<"2.---Cinema staff management -----"<<endl;
	cout<<"3.----Cinema Finance Management-----"<<endl;
	cin>>choice;
	if (choice==1)
	{
	Customer customers[100];
    int size=0;
    while(true)
    {
    	setColor(13);
        cout<<" ----------Customer Management System----------"<<endl;
        cout<<"1:Add Customer "<<endl;
        cout<<"2:Display Customer"<<endl;
        cout<<"3:Search Customer "<<endl;
        cout<<"4:Delete Customer "<<endl;
        cout<<"5:Exit "<<endl;
        cout<<"Enter your choice "<<endl;
        cin>>choice;
        cin.ignore();
        switch(choice)
             {
                              case 1:
                               addCustomer(customers, size);
                              break;
                               case 2:
                                displayCustomers(customers, size);
                              break;
                               case 3:
                                searchCustomer(customers, size);
                              break;
                               case 4:
                                deleteCustomer(customers, size);
                              break;
                               case 5:
                               	setColor(6);
                               	{
                               cout<<"Exiting"<<endl;
                               goto p;}
                              return 0;
                              
                               default:
                               cout<<"invalid choice"<<endl;
                              break;
                          }
    
    }
}
	if (choice==2)
	{
	Staff staff[Max_Staff];
	int staffcount=0;
	do
	{
		setColor(5);
		cout<<"\n.....Cinema Staff Management....\n";
		cout<<"1.Add Staff\n";
		cout<<"2.Display Staff\n";
		cout<<"3.Update Staff\n";
		cout<<"4.Delete Staff\n";
		cout<<"5.Exit\n";
		cout<<"Enter your choice:";
		cin>>choice;
		switch (choice)
		{
			case 1:
				addStaff(staff,staffcount);
				break;
			case 2:
				displayStaff(staff,staffcount);
				break;
			case 3:
				updateStaff(staff,staffcount);
				break;
			case 4:
			    deleteStaff(staff,staffcount);
			    break;
			case 5:
				setColor(14);{
				cout<<"Exiting program.Goodbye!\n";
				goto p;}
				break;
			default:
				setColor(10);
				cout<<"Invalid choice.Try again\n";
				
		}
	} while(choice!=5);
}
	
	if (choice==3)
	{
		CinemaFinance cinema; 
    int choice;
    do {
        displayMenu();
        cin >> choice;

        
        switch (choice) {
            case 1:
                enterTicketSales(cinema);
                break;
            case 2:
                enterTicketExpenses(cinema); 
                break;
            case 3:
                enterSalaryExpenses(cinema); 
                break;
            case 4:
                enterOtherExpenses(cinema); 
                break;
            case 5:
                displayFinancialReport(cinema);
                break;
            case 6:
                deleteFinancialData(cinema); 
                break;
            case 7:
            		setColor(10); {
                cout << "Exiting the system. Goodbye!\n";
                goto p;
            }
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 7.\n";
        }
    } while (choice != 7);
}
} while(choice!=3);
return 0;
}
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(int STD_OUTPUT_HANDLE), color);
}

	