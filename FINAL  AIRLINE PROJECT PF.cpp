#include<iostream>
#include<stdlib.h>      // headerfile for clear screen
#include<windows.h>      // headerfile for sleep 
using namespace std;

// ***********************************
// *                                 *
// *    STRUCT TO HOLD DATA          *
// *                                 *
// ***********************************

struct Flight
{
    string fname,lname,mail;
    long long int  passport,phone;
    void displayF()
    {
        	cout<<".....Your Ticket...."<<endl;
        
        cout<<endl;
        
        cout<<"Your First Name : "<<fname<<endl;
        
        cout<<"Your Last Name : "<<lname<<endl;
        
        cout<<"Your Email ID  : "<<mail<<endl;
        
        cout<<"Your Passpot Number : "<<passport<<endl;
        
        cout<<"Your Phone Number : "<<phone<<endl;
        
    }
    void setValues(string fn,string ln,string m,long long int pp,long long int p);
};
void Flight::setValues(string fn,string ln,string m,long long int pp,long long int p)
{
    fname=fn;
    lname=ln;
    mail=m;
    passport=pp;
    phone=p;
}

 //***********************************
// *                                 *
// *    STRUCT TO HOLD DATA          *
// *                                 *
// ***********************************
 
 struct Airline
 {
     int num;
     string cityName;
     string departureTime;
     string arrivalTime;
     void displayA()
     {
    cout<<"--------------------------------------------------------------"<<endl;;
    cout<<endl;
    cout<<"\tNumber\t"<<num;
    cout<<"\tCity\t"<<cityName;
    cout<<"\tDeparture Time\t"<<departureTime;
    cout<<"\tArrival Time\t"<<arrivalTime;
    cout<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
     }
     
    void setValuesA(int n,string cn,string dt, string at);
 };
 
 void Airline::setValuesA(int n,string cn,string dt,string at)
 {
     num=n;
     cityName=cn;
     departureTime=dt;
     arrivalTime=at;
 }
 
 // ***********************************
//  *                                 *
//  *     GLOBEL VARAIBLE             *
//  *                                 *
// ************************************
 
 Airline a[8]={{1,"Islamabad_To_Karachi","04:05 PM","06:00 PM"},{2,"Lahor_To_Peshawar","07:00 AM","01:55 PM"},
 {3,"Faisalabad_To_Rawalpindi","03:56 PM","05:35 PM"},{4,"Quetta_To_Islambad","09:40 PM","11:15 PM"},};
int count=8;
 Flight fl[3];
 int count1=3;
 
// ***********************************
// *                                 *
// *    FUNCTION OF AIRPLANE         *
// *                                 *
// ***********************************

void display()
{
	cout<<"\t<><><><><><><><><<<><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
	cout<<endl;
	cout<<"\t            A I R L I N E     ^^^^^^^^^^^    R E S E R V A T I O N     "<<endl;
	cout<<endl;
	cout<<"                                     _____                         "<<endl;
	cout<<"                            |\\       \\    \\                              "<<endl;
	cout<<"                            | \\       \\    \\                               "<<endl;
	cout<<"		            |  \\_______\\____\\_________________________               "<<endl;
    cout<<"		            |                                         \\             "<<endl;
	cout<<"		            |                                          \\              "<<endl;
	cout<<"		            |                                           |               "<<endl;
	cout<<"		            |                                          /                 "<<endl;
	cout<<"		            |   ______________________________________/                   "<<endl;
	cout<<"                            |  /           \\    \\                                "<<endl;
	cout<<"                            | /             \\    \\                                "<<endl;
	cout<<"	                    |/               \\____\\                                 "<<endl;
	cout<<endl;
	cout<<"\t WELCOME TO AIRLINE RESERVATION  ^   ^ "<<endl;
	cout<<"                                           _    "<<endl;
	cout<<"\t<><><><><><><><><<<><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
}


// ***********************************
// *                                 *
// *  FUNCTION OF FLIGHT MENU        *
// *                                 *
// ***********************************

void flightsMenu()
{
cout<<"\t <><><><><><> M E N U ~ O F ~ A V A I B I L E ~ F L I G H T S <><><><><><>"<<endl;

	for(int i=0; i<8; i++)
	{
       a[i].displayA();
	}

cout<<"\t-----------------------------------------------------------------------------------"<<endl;
cout<<endl;

}

// ***********************************
// *                                 *
// *    FUNCTION OF ADD FLIGHT       *
// *                                 *
// ***********************************

void addFlight()
{
string cn,dt,at;
int n,flight;
cout<<"How Many Flights You Want To Add"<<endl;
cout<<endl;
cin>>flight;
if(flight<0)
{
	cout<<"\t......ONLY POSITIVE NUMBER............."<<endl;
	cin>>flight;
}

if (flight>4)
{
	cout<<"......CANT ADD MORE THAN 4 FLIGHTS................"<<endl;
	cin>>flight;
}
   for (int i=0; i<flight; i++)
 {
    cout<<"\tEnter Number Of Flight"<<endl;
	cin>>n;
	if (n<0)
	{
	    cout<<".......ONLY POSITIVE NUMBER......"<<endl;
	    cin>>n;
	}
    cout<<"\tEnter The Name Of The City You Want To Add"<<endl;
    cin>>cn;
    cout<<"\tEnter Departure Time"<<endl;
    cin>>dt;
    cout<<"\tEnter Arrival Time"<<endl;
    cin>>at;
    a[i+4].setValuesA(n,cn,dt,at);
    cout<<endl;
    cout<<"\t FLIGHTS ARE ADDED SUCCESSFULLLY :-) "<<endl;
    cout<<""<<endl;
 }
}

// ***********************************
// *                                 *
// *    FUNCTION OF DELETE FLIGHT    *
// *                                 *
// ***********************************

void  deleteFlight(int f)
{
for (int i=0; i<count;i++)
{
if (a[i].num==f)
{
a[i].num=0;
a[i].cityName=" ";
a[i].departureTime=" ";
a[i].arrivalTime=" ";
cout<<"\t You Delete Flight Successfully"<<endl;
cout<<endl;
}
else 
{
cout<<"Flight does not Found"<<endl;
}
}
}
// **************************************
// *                                    *
// *    FLIGHTS BOOK  MENU FUNCTION     *
// *                                    *
// **************************************

void bookFlight()
{
   cout<<"\t <><><><><><> M E N U ~ O F ~ A V A I B I L E ~ F L I G H T S <><><><><><>"<<endl;
	cout<<"\t-------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	
		for(int i=0; i<8; i++)
	{
       a[i].displayA();
	}
	
	cout<<"\t-------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;	
}

// ***********************************
// *                                 *
// *    FLIGHTS BOOK FUNCTION        *
// *                                 *
// ***********************************


void flightBooking()
{   
   
	int flightChoice, choice, seats;
	long long int pp, p;
    string fn,ln,m;
	cout<<"\t::::::::::::: W E L C O M E ^^ S I R ^^ M A M :::::::::::::"<<endl;
	cout<<"\t                  Please Book Your Ticket                     "<<endl;
	cout<<"\t                   (1). For Bussiness Class                         "<<endl;
	cout<<"\t                   (2). For Economy Class                            "<<endl;
	cout<<"\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cin>>choice;
	if(choice<0)
	{
		cout<<"\t ONLY POSITIVE NUMBER !!......... "<<endl;
		cin>>choice;
	}
	else if(choice>2)
	{
		cout<<"\t__ONLY FROM 1 OR 2_____"<<endl;
	}
	if (choice==1)
	{
	bookFlight();
	cout<<"\t FROM ABOVE FLIGHTS WHICH DO YOU WANT TO BOOK ? "<<endl;
	cin>>flightChoice;
	if(flightChoice<0)
	{
		cout<<"\t ONLY POSITIVE NUMBER !!......... "<<endl;
		cin>>flightChoice;
	}

	cout<<"\t How Many Seats Do You Want To Book ?"<<endl;
	cin>>seats;
	if(seats<0)
	{
		cout<<"\t ONLY POSITIVE NUMBER !!......... "<<endl;
		cin>>seats;
	}
	else if (seats>3)
	{
	    cout<<"...SORRY! ONLY 3 SEATS ARE AVAILABLE..."<<endl;
	    cin>>seats;
	}
	for (int i=0; i<seats; i++)
	{
	cout<<"\t Please Enter The Required Details :-) "<<endl;
	cout<<"\t---------------------------------------"<<endl;
	cout<<"\tEnter Your First Name : "<<endl;
	cin>>fn;
	cout<<"\t Enter Your Last Name :"<<endl;
	cin>>ln;
	cout<<"\t Enter Your Email :"<<endl;
	cin>>m;
	cout<<"\t Enter Your Passport Number :"<<endl;
	cin>>pp;
	if(pp<0)
	{
		cout<<"\t..........ONLY POSITIVE NUMBER............."<<endl;
		cin>>pp;
	}
	cout<<"\t Enter Your Contact Number :"<<endl;
	cin>>p;
	if(p<0)
	{
		cout<<"\t..........ONLY POSITIVE NUMBER............."<<endl;
		cin>>p;
	}
	fl[i].setValues(fn,ln,m,pp,p);
	fl[i].displayF();
	}// for {} end

} //if {} end 
	
	else if (choice==2)
	{
	bookFlight();
	cout<<"\t FROM ABOVE FLIGHTS WHICH DO YOU WANT TO BOOK ? "<<endl;
	cin>>flightChoice;
	if(flightChoice<0)
	{
		cout<<"\t ONLY POSITIVE NUMBER !!......... "<<endl;
		cin>>flightChoice;
	}

	cout<<"\t How Many Seats Do You Want To Book ?"<<endl;
	cin>>seats;
	if(seats<0)
	{
		cout<<"\t ONLY POSITIVE NUMBER !!......... "<<endl;
		cin>>seats;
	}
		else if (seats>3)
	{
	    cout<<"...SORRY! ONLY 3 SEATS ARE AVAILABLE..."<<endl;
	    cin>>seats;
	}
	for(int i=0; i<seats; i++)
	{
	    
	cout<<"\t Please Enter The Required Details :-) "<<endl;
	cout<<"\t---------------------------------------"<<endl;
	cout<<"\tEnter Your First Name : "<<endl;
	cin>>fn;
	cout<<"\t Enter Your Last Name :"<<endl;
	cin>>ln;
	cout<<"\t Enter Your Email :"<<endl;
	cin>>m;
	cout<<"\t Enter Your Passport Number :"<<endl;
	cin>>pp;
	if(pp<0)
	{
		cout<<"\t..........ONLY POSITIVE NUMBER............."<<endl;
		cin>>pp;
	}
	cout<<"\t Enter Your Contact Number :"<<endl;
	cin>>p;
	if(p<0)
	{
		cout<<"\t..........ONLY POSITIVE NUMBER............."<<endl;
		cin>>p;
	}
	fl[i].setValues(fn,ln,m,pp,p);
	fl[i].displayF();
   }// for {} end
} 
	
} 

// ***********************************
// *                                 *
// *   FUNCTION OF CANCLE FLIGHT     *
// *                                 *
// ***********************************

void cancelFlight(string)
{
	char timeChoice;
	string fn;
	
	cout<<"\t The  Booking of Your Flight is More Than 24 Hours? Y or N"<<endl;
	cin>>timeChoice;
		
	if(timeChoice=='y'&&'Y')
	{	
	cout<<"\t Oops You Cant Cancle  your Flight :-( "<<endl;
	}
	else 
	{
	    for (int i=0; i<count1; i++)
	    {
	if (fl[i].fname==fn)
	{
	    fl[i].fname=" ";
	    fl[i].lname=" ";
	    fl[i].passport=0;
	    fl[i].phone=0;
	   	cout<<"Wait Processig ";
	for(int i=0; i<4; i++)
	{
	Sleep(3000);
	cout<<".";
	}
	fl[i].displayF();
	cout<<endl;
	cout<<"\t Your Flight is Cancled :-) "<<endl;
	}
	else 
	{
	    cout<<"\t Passenger Doesn't Found "<<endl;
	}
}
}
}
// ***********************************
// *                                 *
// *     FUNCTION OF PAYMENT         *
// *                                 *
// ***********************************

void payment()
{
	int paymentChoice, creditNum, expDate, debitNum, cvv, code;
	
	cout<<"\t   <><><><><><> PAYMENT METHODS <><><><><><>"<<endl;
	cout<<"\t              (1). For Credit Card                   "<<endl;
	cout<<"\t              (2). For Debit Card                    "<<endl;
	cout<<"\t   <><><><><><> CHOOSE PLEASE <><><><><><>"<<endl;
	cin>>paymentChoice;
	if(paymentChoice<0)
	{
		cout<<"\t ONLY POSITIVE NUMBER !!......... "<<endl;
		cin>>paymentChoice;
	}
	else if(paymentChoice>2)
	{
		cout<<"\t______ONLY FROM 1 OR 2______"<<endl;
	}
	if(paymentChoice==1)
	{
		cout<<"\tEnter Your Credit Card Number :"<<endl;
		cin>>creditNum;
		if(creditNum<0)
		{
			cout<<"\t..............ONLY POSITIVE NUMBER............."<<endl;
			cin>>creditNum;
		}
		cout<<"\tEnter Expiraton Date :"<<endl;
		cin>>expDate;
		if(expDate<0)
		{
			cout<<"\t..............ONLY POSITIVE NUMBER............."<<endl;
			cin>>expDate;
		}
		cout<<"\t Processing";
		for(int i=0; i<4; i++)
		{
			Sleep(3000);
			cout<<".";
		}
		cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
		cout<<"\t \t Transaction Successful :-)"<<endl;
		cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	}
	
	else if(paymentChoice==2)
	{
		cout<<"\tEnter The Debit Card Number :"<<endl;
		cin>>debitNum;
		if(debitNum<0)
		{
		cout<<"\t..............ONLY POSITIVE NUMBER............."<<endl;
		cin>>debitNum;	
		}
		cout<<"\tEnter The Expiry Date :"<<endl;
		cin>>expDate;
		if(expDate<0)
		{
		cout<<"\t..............ONLY POSITIVE NUMBER............."<<endl;
		cin>>expDate;	
		}
		cout<<"\tEnter The CVV That Printed On Your Debit Card :"<<endl;
		cin>>cvv;
		if(cvv<0)
		{
		cout<<"\t..............ONLY POSITIVE NUMBER............."<<endl;
		cin>>cvv;	
		}
		cout<<"\tEnter Your Pin Code :"<<endl;
		cin>>code;
		if(code<0)
		{
		cout<<"\t..............ONLY POSITIVE NUMBER............."<<endl;
		cin>>code;	
		}
		cout<<"\t Processing";
		for(int i=0; i<4; i++)
		{
			Sleep(3000);
			cout<<".";
		}
		cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
		cout<<"\t \t Transaction Successful :-)"<<endl;
		cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	}
}

// ***********************************
// *                                 *
// *       INT MAIN PROCESS          *
// *                                 *
// ***********************************

int main()
{
	system("Color 6D");
	char conChoice;
	string fn;
	int userChoice, adminChoice, customerChoice,f,pass;
	display();
	do
	{
	Sleep(6000);
	system("CLS");
	cout<<"\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<"\t*                        (1). ADMIN                           *"<<endl;
	cout<<"\t*                        (2). USER                            *"<<endl;
	cout<<"\t*                        (3). EXIT                            *"<<endl;
	cout<<"\t*             ^ - ^  Please Enter Your Choice   ^ - ^         *"<<endl;
	cout<<"\t***************************************************************"<<endl;
	cin>>userChoice;
	if(userChoice<0)
	{
		cout<<"\t ONLY POSITIVE NUMBER !!......... "<<endl;
		cin>>userChoice;
	} 
	
	else if (userChoice>3)
	{
		cout<<"........ONLY FROM 1,2,3............."<<endl;
		cin>>userChoice;
	}
	//start of  choice
	if(userChoice==1) 
	{   //start of admin part
	cout<<"\t ^^^^^ENTER THE PASSWORD^^^^^^ "<<endl;
	cin>>pass;
	if(pass<0)
	{
		cout<<"........CANT ENTER NEG NUMBER ................."<<endl;
		cin>>pass;
	}
	Sleep(1000);
	cout<<"Wait Processig ";
	for(int i=0; i<4; i++)
	{
	Sleep(3000);
	cout<<".";
	}
  do
  {
	Sleep(2000);                
	system("CLS");
		cout<<"\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
		cout<<"\t                WELCOME ADMIN YOU CAN DO FOLLOWING THINGS        "<<endl;
		cout<<"\t                     (1). For  Add Flight                        "<<endl;
		cout<<"\t                     (2). For  Delete Flight                     "<<endl;
		cout<<"\t                     (3). For  View Flights                     "<<endl;
		cout<<"\t                     (4). For  Exit                              "<<endl;
		cout<<"\t             ^ - ^ Please Enter From These Choices ^ - ^         "<<endl;
		cout<<"\t<><><><><><><><><<<><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
		cin>>adminChoice;
		if(adminChoice<0)    
		{
		cout<<"\t ONLY POSITIVE NUMBER !!......... "<<endl;
		cin>>adminChoice;
		}
		else if (adminChoice>4)
		{
			cout<<".........ONLY FROM 1,2,3,4............."<<endl;
			cin>>adminChoice;
		}
		
		if(adminChoice==1)
		{
			system("CLS"); addFlight();
        }  
		
      else if(adminChoice==2)
      {
      system("CLS");
      for (int i=0; i<count;i++)
      {
       cout<<"\n We Have Following Flights\n";
       a[i].displayA();
        }
        cout<<"Enter Which Flight You Want To Delete"<<endl;
        cin>>f;
        deleteFlight(f);
        Sleep(3000);
        } 
		
		else if(adminChoice==3)
		{
			system("CLS"); flightsMenu(); Sleep(8000);
		}
	}
		while (adminChoice !=4);
		system("CLS");
		    cout<<"THANK YOU FOR VISITING ADMIN ^  ^ "<<endl;
		    cout<<"                               _   "<<endl;
		    cout<<endl;
  }//end of admin part
		    else if(userChoice==2) //start of user part
		    {
	do
	{	
	Sleep(2000);     
	system("CLS");
		cout<<"\t<><><><><><><><><<<><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
		cout<<"\t                  WELCOME TO AIRLINE RESERVATION                           "<<endl;
		cout<<"\t                     (1). For View Flights                                 "<<endl;
		cout<<"\t                     (2). For Book Flight                                  "<<endl;
		cout<<"\t                     (3). For Cancel Flight                                 "<<endl;
		cout<<"\t                     (4). For Exit Program                                  "<<endl;
		cout<<"\t<><><><><><><><><<<><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
		cin>>customerChoice;
	 if(customerChoice<0) 
	 {
	cout<<"\t ONLY POSITIVE NUMBER !!......... "<<endl;
	cin>>customerChoice;	
	 }
	 else if (customerChoice>4)
	 {
	 	cout<<"\t.......ONLY FROM 1,2,3,4.............."<<endl;
	 	cin>>customerChoice;
	 }
	 
	 if (customerChoice==1)
	 {
	 system("CLS"); flightsMenu();	Sleep(8000);
	 }
	 
	 else if (customerChoice==2)
	 {
	 	system("CLS"); flightBooking(); 
	   Sleep(4000);
		system("CLS");  payment();
	 }
	 
	 else if (customerChoice==3)
	 {
	      cout<<"Please enter your name"<< endl;
	    cin>>fn;
	 	system("CLS"); cancelFlight(fn); Sleep(4000);
	 }
	}
while (customerChoice !=4);
	    system("CLS");
cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	 	cout<<"\tDEAR CUSTOMER THANK YOU FOR VISITING ^   ^ "<<endl;
	 	cout<<"                                         _  "<<endl;
		    }  //end of user part
		  cout<<endl;  
		cout<<"\tDO YOU WANT TO CONTINUE THIS ? Y or y"<<endl;
	cin>>conChoice;
	cout<<endl;
} //~do end~  

while (conChoice == 'y' && 'Y');
system("CLS");
	cout<<"\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<endl;
	cout<<"\t                   THANK YOUR                                "<<endl;
	cout<<"\t                      FOR                                    "<<endl;
	cout<<"\t                    VISITING                                 "<<endl;
    cout<<"\t          PLEASE COME AGAIN NEXT TIME ^ _ ^                  "<< endl;
    cout<<endl;
	cout<<"\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<endl;
return 0;
}

