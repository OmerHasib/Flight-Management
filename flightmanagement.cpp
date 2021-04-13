#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>
#include <ctime>
#define limit 30
using namespace std;

int domestic_pnr = 2010; //global variables
int international_pnr = 5000;
class user
{
    char name[limit];
    char username[limit];
    char password[limit];

public:
    void signup()
    {
        cout << "\n\n\n---------------------CREATE A NEW ACCOUNT------------------" << endl;
        cout << "Enter Your Name: ";
        fflush(stdin);
        cin.getline(name, limit);
        cout << "Username: ";
        fflush(stdin);
        cin >> username;
        cout << "Password: ";

        cin >> password;
        cout << "Account Created Successfully!!" << endl;
    }
    void login()
    {
        char user_retrieved[limit], pass_retrieved[limit];
        cout << "-----------------------------LOGIN--------------------------" << endl;
        fflush(stdin);
        cout << "Enter Your Username: ";
        cin >> user_retrieved;

        cout << "Password: ";
        cin >> pass_retrieved;
        if (strcmp(username, user_retrieved) || strcmp(password, pass_retrieved))
        {
            cout << "You Have entered wrong username or password! Try Again!" << endl;
            return login();
        }
        else
        {
            cout << "\t\t\tLogin Successful!!" << endl;
        }
    }
};

void booking_time()
{
    // current date and time on the current system
    time_t now = time(0);

    // convert now to string form
    char *date_time = ctime(&now);

    cout << date_time;
}

int monthdays(int &day, int &month, int &year)
{
    if ((day <= 31 && day >= 1) && month <= 12 && month >= 1)
    {
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
        {
            return 1;
        }
        else if (month == 2 && day < 29)
        {
            return 2;
        }
        else if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) && month == 2 && day <= 29)
        {
            return 3;
        }
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            return 4;
        }
        else
        {
            cout << "Inappropriate Input!!" << endl;
            exit(0);
        }
    }
    else
    {
        cout << "Please Enter Appropriate Date." << endl;
        exit(0);
    }
}

class domestic_booking //class  for domestic booking
{
protected:
    int pnr;
    char for_domestic[10], arrival_time[7], departure_time[7]; //protected members
    int day, month, year, p;
    int choice, origin, desti;
    int dprice1 = 5000, dprice2 = 5500, dprice3 = 6000, nop, total_price = 0;

public: //public member functions
    void d_pnr()
    {
        domestic_pnr++; // increment variable
        pnr = domestic_pnr;
    }
    int domestic_detail() // function declaration and definition for domestic journey
    {
        cout << "\nEnter DateOfJourney(DD MM YYYY): " << endl;
        cin >> day >> month >> year;
        p = monthdays(day, month, year);
        if (p > 4 || p < 0)
        {
            return (domestic_detail());
        }
        cout << endl;
        cout << "1.New Delhi\n2.Hyderabad\n3.Bhuwaneshwar\n4.Mumbai" << endl
             << endl;
        cout << "\tEnter Origin: " << endl;
        cin >> origin;
        cout << "\tEnter destination: " << endl;
        cin >> desti;
        if ((origin == 1 && desti == 2) || (origin == 2 && desti == 1)) //condition
        {
            cout << "\t \t \tFlights Found" << endl
                 << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t08:00\t\t11:05\t\t*Rs.5000\t\tRefundable\n";
            cout << "2.Spice Jet\t14:00\t\t17:05\t\t*Rs.5500\t\tRefundable\n";
            cout << "3.Air india\t19:00\t\t22:05\t\t*Rs.6000\t\tRefundable\n";
            cout << " *All prices are inclusive of taxes" << endl;
        }

        else if ((origin == 1 && desti == 3) || (origin == 3 && desti == 1)) //condition
        {
            cout << "\t \t \tFlights Found" << endl
                 << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t08:00\t\t11:05\t\t*Rs.5000\t\tRefundable\n";
            cout << "2.Spice Jet\t14:00\t\t17:05\t\t*Rs.5500\t\tRefundable\n";
            cout << "3.Air india\t19:00\t\t22:05\t\t*Rs.6000\t\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }

        else if ((origin == 1 && desti == 4) || (origin == 4 && desti == 1)) //condition
        {
            cout << "\t \t \tFlights Found" << endl
                 << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t08:00\t\t11:05\t\t*Rs.5000\t\tRefundable\n";
            cout << "2.Spice Jet\t14:00\t\t17:05\t\t*Rs.5500\t\tRefundable\n";
            cout << "3.Air india\t19:00\t\t22:05\t\t*Rs.6000\t\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }

        else if ((origin == 2 && desti == 3) || (origin == 3 && desti == 2)) //condition
        {
            cout << "\t \t \tFlights Found" << endl
                 << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t08:00\t\t11:05\t\t*Rs.5000\t\tRefundable\n";
            cout << "2.Spice Jet\t14:00\t\t17:05\t\t*Rs.5500\t\tRefundable\n";
            cout << "3.Air india\t19:00\t\t22:05\t\t*Rs.6000\t\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }

        else if ((origin == 2 && desti == 4) || (origin == 4 && desti == 2)) //condition
        {
            cout << "\t \t \tFlights Found" << endl
                 << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t08:00\t\t11:05\t\t*Rs.5000\t\tRefundable\n";
            cout << "2.Spice Jet\t14:00\t\t17:05\t\t*Rs.5500\t\tRefundable\n";
            cout << "3.Air india\t19:00\t\t22:05\t\t*Rs.6000\t\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }
        else if ((origin == 3 && desti == 4) || (origin == 4 && desti == 3)) //condition
        {
            cout << "\t \t \tFlights Found" << endl
                 << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t08:00\t\t11:05\t\t*Rs.5000\t\tRefundable\n";
            cout << "2.Spice Jet\t14:00\t\t17:05\t\t*Rs.5500\t\tRefundable\n";
            cout << "3.Air india\t19:00\t\t22:05\t\t*Rs.6000\t\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }
        else if (origin == desti) //condition
        {
            cout << "\nSource and destination can't be same.\nTry again\n\n\n"
                 << endl;
            return domestic_detail();
        }
        else
        {
            cout << "\nWrong input entered\nTry again\n\n\n"
                 << endl;
            return domestic_detail();
        }
    }

    int select_domestic() //function declaration and definition for selecting flight
    {
        cout << "\nEnter your choice: " << endl;
        cin >> choice;
        switch (choice) // switch case
        {
        case 1: //condition
            cout << "\nFlight selected:" << endl;
            cout << "Vistara" << endl;
            strcpy(for_domestic, "Vistara"); //copy to string
            cout << "Departure Time : 08:00" << endl;
            cout << "Arrival Time: 11:05" << endl;
            strcpy(departure_time, "8:00"); //copy to string
            strcpy(arrival_time, "11:05");  // copy to string
            break;
        case 2: //condition
            cout << "\nFlight selected:" << endl;
            cout << "Spice Jet" << endl;
            strcpy(for_domestic, "Spice Jet"); //copy to string
            cout << "Departure Time : 14:00" << endl;
            cout << "Arrival Time: 17:05" << endl;
            strcpy(departure_time, "14:00"); //copy to string
            strcpy(arrival_time, "17:05");   //copy to string
            break;
        case 3: //condition
            cout << "\nFlight selected:" << endl;
            cout << "Air India" << endl;
            strcpy(for_domestic, "Air India"); //copy to string
            cout << "Departure Time : 19:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(departure_time, "19:00"); //copy to string
            strcpy(arrival_time, "22:05");   //copy to string
            break;
        default: //condition
            cout << "Wrong input entered.\nTry again" << endl;
            return select_domestic();
        }
    }

    void price_type()
    {
        int n, s;
        if (choice == 1)
        {

            cout << "Select the seat type of passenger: "
                 << "\n1.Economy class   \n2.Business class" << endl;
            cin >> s;
            switch (s)
            {
            case 1:
                dprice1 = 500 + dprice1;
                cout << "The price of the seat you opted is : " << dprice1 << "\n";
                cout << endl;
                break;
            case 2:
                dprice1 = 1100 + dprice1;
                cout << "The price of the seat you opted is : " << dprice1 << "\n";
                cout << endl;
                break;
            }
            total_price += dprice1;
        }
        if (choice == 2)
        {

            cout << "Select the seat type of passenger: "
                 << "\n1.Business class   \n2.Economy class ";
            cin >> s;
            switch (s)
            {
            case 1:
                dprice2 = 1100 + dprice2;
                cout << "The price of the seat you opted is : " << dprice2 << "\n";
                break;
            case 2:
                dprice2 = 500 + dprice2;
                cout << "The price of the seat you opted is : " << dprice2 << "\n";
                break;
            }
            total_price += dprice2;
        }
        if (choice == 3)
        {

            cout << "Select the seat type of passenger: "
                 << "\n1.Business class   \n2.Economy class ";
            cin >> s;
            switch (s)
            {
            case 1:
                dprice3 = 1100 + dprice3;
                cout << "The price of the seat you opted is : " << dprice3 << "\n";
                break;
            case 2:
                dprice3 = 500 + dprice3;
                cout << "The price of the seat you opted is : " << dprice3 << "\n";
                break;
            }
            total_price += dprice3;
        }
        dprice1 = 5000, dprice2 = 5500, dprice3 = 6000;
        cout << "The Total Price till now is: " << total_price << endl;
    }
};
class international_booking //class for international booking
{
protected: //protected members
    int pnri;
    char for_international[10], arrival_time[7], departure_time[7];
    int day_i, month_i, year_i, c;
    int origin_i, desti_i, choice_i;
    int iprice1 = 15000, iprice2 = 13500, iprice3 = 14000, nopi, total_pricei = 0;

public: //public member functions
    void i_pnr()
    {
        international_pnr++; //increment variable
        pnri = international_pnr;
    }

    int international_detail() // function declaration and definition for journey details
    {
        cout << "Enter DateOfJourney(DD MM YYYY)." << endl;
        cin >> day_i >> month_i >> year_i;
        c = monthdays(day_i, month_i, year_i);
        if (c > 4 || c < 0)
        {
            return (international_detail());
        }
        cout << "1.London\n2.Dubai\n3.Abu Dhabi\n4.Singapore\n5.NewYork " << endl
             << endl;
        cout << "\tEnter Origin: " << endl;
        fflush(stdin);
        cin >> origin_i;
        cout << "\nEnter destination: " << endl;
        fflush(stdin);
        cin >> desti_i;
        cout << "\t \t \tFlights Found" << endl
             << endl;

        if ((origin_i == 1 && desti_i == 3) || (origin_i == 3 && desti_i == 1)) //condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t10:00\t\t14:05\t\t*Rs.15000\tRefundable\n";
            cout << "2.Fly Dubai\t14:00\t\t18:05\t\t*Rs.11500\tRefundable\n";
            cout << "3.Emirates\t18:00\t\t22:05\t\t*Rs.14000\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }
        else if ((origin_i == 1 && desti_i == 2) || (origin_i == 2 && desti_i == 1)) //condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t10:00\t\t14:05\t\t*Rs.15000\tRefundable\n";
            cout << "2.Fly Dubai\t14:00\t\t18:05\t\t*Rs.13500\tRefundable\n";
            cout << "3.Emirates\t18:00\t\t22:05\t\t*Rs.14000\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }

        else if ((origin_i == 1 && desti_i == 4) || (origin_i == 4 && desti_i == 1)) //condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t10:00\t\t14:05\t\t*Rs.15000\tRefundable\n";
            cout << "2.Fly Dubai\t14:00\t\t18:05\t\t*Rs.13500\tRefundable\n";
            cout << "3.Emirates\t18:00\t\t22:05\t\t*Rs.14000\t\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }

        else if ((origin_i == 1 && desti_i == 5) || (origin_i == 5 || desti_i == 1)) //condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t10:00\t\t14:05\t\t*Rs.15000\tRefundable\n";
            cout << "2.Fly Dubai\t14:00\t\t18:05\t\t*Rs.13500\tRefundable\n";
            cout << "3.Emirates\t18:00\t\t22:05\t\t*Rs.14000\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }

        else if ((origin_i == 2 && desti_i == 3) || (origin_i == 3 && desti_i == 2)) //condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t10:00\t\t14:05\t\t*Rs.15000\tRefundable\n";
            cout << "2.Fly Dubai\t14:00\t\t18:05\t\t*Rs.13500\tRefundable\n";
            cout << "3.Emirates\t18:00\t\t22:05\t\t*Rs.14000\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }

        else if ((origin_i == 2 && desti_i == 4) || (origin_i == 4 && desti_i == 2)) //condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t10:00\t\t14:05\t\t*Rs.15000\tRefundable\n";
            cout << "2.Fly Dubai\t14:00\t\t18:05\t\t*Rs.13500\tRefundable\n";
            cout << "3.Emirates\t18:00\t\t22:05\t\t*Rs14000\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }

        else if (origin_i == 2 && desti_i == 5 || (origin_i == 5 && desti_i == 2)) //condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t10:00\t\t14:05\t\t*Rs.15000\tRefundable\n";
            cout << "2.Fly Dubai\t14:00\t\t18:05\t\t*Rs.13500\tRefundable\n";
            cout << "3.Emirates\t18:00\t\t22:05\t\t*Rs 14000\tRefundable\n";
            cout << "*All prices are inclusive of taxes" << endl;
        }
        else if (origin_i == desti_i) //condition
        {
            cout << "Wrong input entered.\nTry again\n\n\n"
                 << endl;
            return international_detail();
        }
        else //condition
        {
            cout << "Wrong input entered.\nTry again\n\n\n"
                 << endl;
            return international_detail();
        }
    }

    int select_flighti() //function declaration and definition for selecting international flight
    {
        cout << "\nEnter your choice" << endl;
        cin >> choice_i;
        switch (choice_i) //switch case
        {
        case 1: //condition
            cout << "\nFlight selected:" << endl;
            cout << "Vistara" << endl;
            strcpy(for_international, "Vistara"); //copy to string
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(departure_time, "10:00"); //copy to string
            strcpy(arrival_time, "14:05");   //copy to string
            break;
        case 2: //condition
            cout << "\nFlight selected:" << endl;
            cout << "Fly Dubai" << endl;
            strcpy(for_international, "Fly Dubai"); //copy to string
            cout << "Departure Time: 14:00" << endl;
            cout << "Arrival Time: 18:05" << endl;
            strcpy(departure_time, "14:00"); //copy to string
            strcpy(arrival_time, "18:05");   //copy to string
            break;
        case 3: //condition
            cout << "\nFlight selected:" << endl;
            cout << "Emirates" << endl;
            strcpy(for_international, "Emirates"); //copy to string
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(departure_time, "18:00"); //copy to string
            strcpy(arrival_time, "22:05");   //copy to string
            break;
        default: //condition
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
    void Meals()
    {
        int n;

        cout << endl
             << "Available meal types:\n1.Vegetarian\n2.Non-Vegetarian\n3.No Meals\n"
             << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << " Vegetarian\n"
                 << endl;
            break;
        case 2:
            cout << "Non-Vegetarian\n"
                 << endl;
            break;
        case 3:
            cout << "No meal\n"
                 << endl;
            break;
        }
    }
    void Mealsi()
    {
        int n;

        cout << endl
             << "Available meal types:\n1.Vegetarian\n2.Non-Vegetarian\n3.No Meals\n";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << " Vegetarian\n"
                 << endl;
            break;
        case 2:
            cout << "Non-Vegetarian\n"
                 << endl;
            break;
        case 3:
            cout << "No meal\n"
                 << endl;
            break;
        }
    }
    void price_typei()
    {
        int n, si;
        if (choice_i == 1)
        {

            cout << "Select the seat type of passenger " << endl
                 << "\n1.Economy class   \n2.Business class" << endl;
            cin >> si;
            switch (si)
            {
            case 1:
                iprice1 = 500 + iprice1;
                cout << "The price of the seat is : " << iprice1 << endl
                     << "\n";
                cout << endl;
                break;
            case 2:
                iprice1 = 1100 + iprice1;
                cout << "The price of the seat is : " << iprice1 << endl
                     << "\n";
                cout << endl;
                break;
            }
            total_pricei += iprice1;
        }
        if (choice_i == 2)
        {

            cout << "Select the seat type of passenger " << endl
                 << "\n1.Business class   \n2.Economy class " << endl;
            cin >> si;
            switch (si)
            {
            case 1:
                iprice2 = 500 + iprice2;
                cout << "The price of the seat is : " << iprice2 << endl
                     << "\n";
                break;
            case 2:
                iprice2 = 1100 + iprice2;
                cout << "The price of the seat is : " << iprice2 << endl
                     << "\n";
                break;
            }
            total_pricei += iprice2;
        }
        if (choice_i == 3)
        {

            cout << "Select the seat type of passenger " << endl
                 << "\n1.Business class   \n2.Economy class: "<<endl;
            cin >> si;
            switch (si)
            {
            case 1:
                iprice3 = 500 + iprice3;
                cout << "The price of the seat is : " << iprice3 << endl
                     << "\n";
                break;
            case 2:
                iprice3 = 1100 + iprice3;
                cout << "The price of the seat is : " << iprice3 << endl
                     << "\n";
                break;
            }
            total_pricei += iprice3;
        }
        iprice1 = 15000, iprice2 = 13500, iprice3 = 14000;

        cout << "The total Price till now is: " << total_pricei << endl;
    }
};
class passenger : public domestic_booking, public international_booking //class passenger publicly inherited from class domestic_booking and international_booking
{
protected: //protected members
    char first_name[20], last_name[20], email[30];
    int age, gender;
    char c_no[15];
    char passport_no[10], expiry_date[10], dob[10];

public:                   //public member functions
    int getpnr_domestic() //function to get pnr for domestic booking
    {
        return domestic_pnr;
    }

    int getpnr_international() //function to get pnr for international booking
    {
        return international_pnr;
    }

    void p_detail(int x) //function declaration and definition
    {
        if (x == 1) //if else for domestic and international booking selection
        {
            domestic_detail(); //function call
            select_domestic(); //function call
        }
        else
        {
            international_detail(); //function call
            select_flighti();       //function call
        }
    }
    void passport_details()
    {
        cout << "\n---------------ENTER PASSPORT DETAILS---------------" << endl;
        cout << "Enter Passport Number: " << endl;
        cin >> passport_no;
        fflush(stdin);
        cout << "Enter Date of Birth: " << endl;
        cin >> dob;
        fflush(stdin);
        cout << "Enter Expiry Date: " << endl;
        cin >> expiry_date;
        fflush(stdin);

        ofstream fout("file.txt", ios::app);
        fout << setw(6) << pnri << setw(14) << for_international << setw(11) << first_name << " " << last_name << setw(15) << passport_no << setw(11) << day_i << "/" << month_i << "/" << year_i << setw(17) << international_booking::departure_time << setw(17) << international_booking::arrival_time << endl
             << endl;
        fout.close();
    }
    int gender_check() //to check gender input as valid
    {
        cout << "\nGender:\n 1. Male \n2. Female" << endl;
        cin >> gender;
        if (gender > 2) //condition
        {
            cout << "\n\nWrong input entered.\nTry again\n\n"
                 << endl;
            return gender_check(); //function call
        }
    }
    void more_details() //to take more details of the passenger
    {
        cout << "--------------------------------PASSENGER DETAILS------------------------------------------";
        cout << "\n\n\nEnter passenger details" << endl;
        cout << "\nFirst Name: ";
        cin >> first_name;
        cout << "Last Name: ";
        cin >> last_name;
        cout << "Age : ";
        cin >> age;
        cout << "Email Id : ";
        cin >> email;
        cout << "Contact no.(10 digits) : ";
        cin >> c_no;
        ofstream fout("file.txt", ios::app);
        fout << setw(6) << pnr << setw(14) << for_domestic << setw(11) << first_name << " " << last_name << setw(11) << day << "/" << month << "/" << year << setw(17) << domestic_booking::departure_time << setw(17) << domestic_booking::arrival_time << endl
             << endl;
        fout.close();
    }
    void more_details_i() //to take more details of the passenger
    {
        cout << "--------------------------------PASSENGER DETAILS------------------------------------------";
        cout << "\n\n\nEnter passenger details" << endl;
        cout << "\nFirst Name: ";
        cin >> first_name;
        cout << "Last Name: ";
        cin >> last_name;
        cout << "Age : ";
        cin >> age;
        cout << "Email Id : ";
        cin >> email;
        cout << "Contact no.(10 digits) : ";
        cin >> c_no;
    }
    void display() //function to display details for domestic booking
    {
        cout << " -------------------BOOKING CONFIRMED------------------------" << endl;
        cout << "Time of Booking : ";
        booking_time();
        cout << endl
             << endl;
        cout << setw(5) << "PNR" << setw(13) << "Flight" << setw(15) << "Name" << setw(22) << "Date of Journey"
             << setw(22) << "Departure Time " << setw(15) << "Arrival Time " << endl
             << endl;
        char str[200];
        ifstream fin;
        fin.open("file.txt", ios::app);
        while (fin)
        {
            fin.getline(str, 200);
            cout << str << endl;
        }
        fin.close();
	    cout << "This is a digitally generated ticket. Print only if necessary!!!. SAVE TREES SAVE EARTH";

    }

    void display_international() //function to display details for international booking
    {
        cout << " -------------------BOOKING CONFIRMED------------------------" << endl;
        cout << "Time of Booking : ";
        booking_time();
        cout << endl
             << endl;
        cout << setw(5) << "PNR" << setw(13) << "Flight" << setw(15) << "Name" << setw(22) << "Passport No." << setw(22) << "Date of Journey"
             << setw(22) << "Departure Time: " << setw(15) << "Arrival Time: " << endl
             << endl;

        char str[200];
        ifstream fin;
        fin.open("file.txt", ios::app);
        while (fin)
        {
            // fin.read(str,EOF);
            fin.getline(str, 200);
            cout << str << endl;
        }
        fin.close();
        cout << "This is a digitally generated ticket. Print only if necessary!!!. SAVE TREES SAVE EARTH";
    }
};

class payment //class for payment
{
protected: //protected members
    int c, bank, card, date, cvv, user_id;
    char password[10];

public:               //public members functions
    void pay_detail() //function declaration and definition for payment method
    {
        cout << "\n\n\n\n-----------------------------PAYMENT DETAILS-------------------------------------";
        cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n1.Debit Card or Credit Card \n2.Net Banking\n 3.Bitcoin";
        cout << "\n\nEnter your choice: ";
        cin >> c;
        switch (c) //switch case
        {
        case 1: //condition
            cout << "\nEnter card no.: ";
            cin >> card;
            cout << "\nEnter expiry date: ";
            cin >> date;
            cout << "\nEnter CVV no.: ";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2: //condition
            cout << "Banks Available: \n1.ICICI Bank \n2.Axis Bank \n3.HDFC Bank \n4.SBI \n5.Others";
            cout << "\nSelect your bank: ";
            cin >> bank;
            cout << "\nYou have selected: " << bank;
            cout << "\nEnter user id: ";
            cin >> user_id;
            cout << "\nEnter password: ";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3: //condition

            cout << "Copy the following address and paste it in ur Bitcoin wallet for payment (njvyhjvwCb5HxWVn2trch37EoU9PoPdb)";
            cout << endl;
            cout << "\nTransaction Successful\n";
            break;

        default: //condition
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }
};

void createfile(passenger p) //file creation for domestic booking
{
    ofstream fin("domestic.txt", ios::binary | ios::app);
    fin.write((char *)&p, sizeof(p)); //writing to file
    fin.close();                      //closing file
}

void cancelticket(int x) //function to cancel ticket
{
    passenger p;
    int flag = 0;
    ifstream fout("domestic.txt", ios::binary | ios::app); //for reading file
    ofstream fin("domestic1.txt", ios::binary | ios::app); //for writing to a new file
    fout.read((char *)&p, sizeof(p));                      //reading file
    while (fout)
    {
        if (p.getpnr_domestic() != x)         //checking pnr
            fin.write((char *)&p, sizeof(p)); //writing to file
        else
        {
            p.display(); //display details
            cout << "\nYour Above ticket is being canceled:\n"
                 << "Amount refunded: Rs 1000\n";
            flag++; //incrementing f if pnr found
        }
        fout.read((char *)&p, sizeof(p)); //reading another record from file
    }
    if (flag == 0) //if f==0,pnr not found
        cout << "Ticket not found\n";
    fout.close();                            //closing file
    fin.close();                             //closing file
    remove("domestic.txt");                  //deleting old file
    rename("domestic1.txt", "domestic.txt"); //renaming new file
}

void checkticket(int x) //function to check pnr or ticket
{
    passenger p;
    int flag = 0;
    ifstream fout("domestic.txt", ios::binary); //opening file
    fout.read((char *)&p, sizeof(p));           //reading file
    while (fout)
    {
        if (p.getpnr_domestic() == x) //checking pnr
        {
            p.display(); //display details
            cout << "\nYour ticket" << endl;
            flag++; //incrementing flag if onr found
            break;
        }
        fout.read((char *)&p, sizeof(p)); //reading another record from the same file
    }
    fout.close();  //closing file
    if (flag == 0) //if flag==0, pnr not found
        cout << "Ticket not found!! " << endl;
}
void createfilei(passenger p) //opening a file for international booking
{
    ofstream fin("international.txt", ios::binary | ios::app);
    fin.write((char *)&p, sizeof(p)); //writing to file
    fin.close();                      //closing file
}

void cancelticketi(int x) //function to cancel ticket
{
    passenger p;
    int flag = 0;
    ifstream fout("international.txt", ios::binary | ios::app); //opening file
    ofstream fin("international1.txt", ios::binary | ios::app); //writing to a new file
    fout.read((char *)&p, sizeof(p));                           //reading old file
    while (fout)
    {
        if (p.getpnr_international() != x)    //checking pnr
            fin.write((char *)&p, sizeof(p)); //writing to new file;
        else
        {
            p.display_international(); //display details
            cout << "Your Above ticket is being deleted:\n"
                 << "Amount refunded: Rs 1000\n";
            flag++; //incrementing flag if pnr found
        }
        fout.read((char *)&p, sizeof(p)); //reading another record from old file
    }
    if (flag == 0) //if flag==0,pnr not found
        cout << "\nTicket not found\n";
    fout.close();                                      //closing file
    fin.close();                                       //closing file
    remove("international.txt");                       //deleting old file
    rename("international1.txt", "international.txt"); //renaming new file
}
void checkticketi(int x) //function to check pnr or ticket
{
    passenger p;
    int flag = 0;
    ifstream fout("international.txt", ios::binary); //opening file
    fout.read((char *)&p, sizeof(p));                //reading file
    while (fout)
    {
        if (p.getpnr_international() == x) //checking pnr
        {
            p.display_international(); //display details
            cout << "\nYour ticket: " << endl;
            flag++; //incrementing flag if pnr found
            break;
        }
        fout.read((char *)&p, sizeof(p)); //reading another record from the file
    }
    fout.close();  //closing file
    if (flag == 0) //if flag==0, pnr not found
        cout << "Ticket not found!! " << endl;
}

int main() //main function
{
    user u1;
    system("cls");
    u1.signup();
    u1.login();

    domestic_booking d1;      //object for class domestic_booking
    international_booking i1; //object for class international_booking
    passenger p1;             //object for class passenger
    payment p2;               //object for class payment
    int ch, ch1, n, nop;      //integer variables
    char input;               //character variables
    do                        //do while loop
    {
        system("CLS");
        cout << "\n\n \t\t-----------Welcome To Flight Reservation System-----------" << endl
             << endl;

        cout << "\n\n\t\t\t1.Book Flight \n\t\t\t2.Cancel Fight \n\t\t\t3.Check Ticket \n\t\t\t4.Exit" << endl;
        cout << "\n\t\t Please enter your choice: ";
        cin >> ch;
        switch (ch) //switch case
        {
        case 1: //condition
            system("CLS");
            cout << "\n\n1.Domestic Fights \n2.International Flights" << endl;
            cout << "\nPlease enter your option: " << endl;
            cin >> ch1;
            switch (ch1) //inner switch case
            {
            case 1: //for booking domestic ticket
                p1.d_pnr();
                p1.p_detail(1); //function calls
                cout << "Enter the number of passengers: ";
                cin >> nop;
                cout << endl;
                for (int i = 0; i < nop; i++)
                {
                    p1.more_details();
                    p1.gender_check();
                    p1.Meals();
                    p1.price_type();
                }
                p2.pay_detail();
                p1.display();
                createfile(p1); //call to create file

                break;
            case 2:             //for booking international ticket
                p1.p_detail(2); //function calls
                p1.i_pnr();
                cout << "Enter the number of passengers: ";
                cin >> nop;
                cout << endl;
                for (int i = 0; i < nop; i++)
                {
                    p1.more_details_i();
                    p1.gender_check();
                    p1.Mealsi();
                    p1.passport_details();
                    p1.price_typei();
                }
                p2.pay_detail();
                p1.display_international();
                createfilei(p1); //call to create file
                break;
            default: //wrong input
                cout << "Wrong input entered\nTry again!\n\n\n"
                     << endl;
                return main();
            }
            break;
        case 2:
            //for canceling ticket
            system("CLS");
            cout << "1.Domestic Fights \n2.International Flights" << endl;
            cout << "\nPlease enter your option" << endl;
            cin >> ch1;
            if (ch1 == 1)
            {
                cout << "Please enter your PNR no.: " << endl;
                cin >> n;
                cancelticket(n); //function call for domestic booking cancellation
            }
            else if (ch1 == 2)
            {
                cout << "Please enter your PNR no.: " << endl;
                cin >> n;
                cancelticketi(n); //function call for international cancellation
            }
            else
            {
                cout << "Wrong input entered\nTry again\n\n\n";
                return main();
            }
            break;
        case 3: //for displaying booked ticket details
            system("CLS");
            cout << "1.Domestic Fights \n2.International Flights" << endl;
            cout << "\nPlease enter your option" << endl;
            cin >> ch1;
            if (ch1 == 1)
            {
                cout << "Please enter your PNR no.: " << endl;
                cin >> n;
                checkticket(n);
            } //function call to display domestic ticket details
            else if (ch1 == 2)
            {
                cout << "Please enter your PNR no.: " << endl;
                cin >> n;
                checkticketi(n); //function call to display domestic ticket details
            }
            else
            {
                cout << "Wrong input entered.\nTry again\n\n\n";
                return main();
            }
            break;
        case 4:
            system("CLS");
            return 0;
        default: //for wrong input
            cout << "Wrong input entered\nTry again.\n\n\n\n"
                 << endl;
            return main();
        }
        cout << "\n\n\nDo you wish to continue(y/Y): " << endl;
        cin >> input;
    } while (input == 'Y' || input == 'y'); //condition for do while loop
    return 0;
}
