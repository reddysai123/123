#include<iostream>
#include<conio.h>
using namespace std;
  class A 
  {	  
  public:
      int days;
      int Rent_amount;
      char carNo[10]; 
      char cust_name[30];
      char purpose[30];
      int aadhardetails;
      char model() 
	  {
	  cout<<"Please provide cumstomer Name";
      cin>>cust_name;
     }
     
};


  class B: public A
      
     {
     	public:
     		char ch;
     	 do
		  {
		  	cin>>ch;
	   switch(ch)
      {
           case 'A':
           
                      cout<<"Customer Name:" <<cust_name;
                      cout<<"Car Model:Ferrari G2";
                      cout<<"Car Number:"<<carNo;
                      cout<<"Number of days for rent:"<<days;
                     
           break;

           case 'B':
           
                      cout<<"Customer Name:" <<cust_name;
                      cout<<"Car Model:Tesla S4";
                      cout<<"Car Number:"<<carNo;
                      cout<<"Number of days for rent:"<<days;
                     
           break;
          
           case 'C':
           
                      cout<<"Customer Name:" <<cust_name;
                      cout<<"Car Model:Lambourgini T8";
                      cout<<"Car Number:"<<carNo;
                      cout<<"Number of days:"<<days;
                     
           break;
          
           default:
                   cout<<"Please Enter Correct Model Name using A to C n";
           }
       }
};
class C: public class A, public class B
{
public:
void calc_rent(char model, int days) 
{
    if(model == 'A')
    cout<<"50000 * days";
     {
	 Rent_amount = calc_rent(model, days);
      cout << "Your Rental Amount Model:Ferrari G2is:(in $ per day)"<<Rent_amount<< endl;
     }
    else if(model == 'B')
    cout<<"80000 * days";
    {
	  Rent_amount = calc_rent(model, days);
       cout << "Your Rental Amount is:(in $ per day)"<<Rent_amount<< endl;
    }
    else if(model == 'C')
    cout<<"100000 * days";
    {
     Rent_amount = calc_rent(model, days);
     cout << "Your Rental Amount is:(in $ per day)"<<Rent_amount<< endl;
    }
}
    
};
    
    int main()
    {   
	cout<<"============================================================"<<endl;
    cout<<"                 WELCOME RENT A CAR SYSTEM                  "<<endl;
    cout<<"               	Arvind Car & Bike Rental Services goa       "<<endl;
    cout<<"                      car leasing services                  "<<endl;
    cout<<"                            Open 24 hours                   "<<endl;
    cout<<"                 ___________________                        "<<endl;
    cout<<"                / _______ ________  \                        "<<endl;
    cout<<"               /  |     | |      |   \                       "<<endl;
    cout<<"    __________/   |_____| |______|    \_____                 "<<endl;
    cout<<"   /                                        \                "<<endl;
    cout<<"   |____(   )                        (   )   _|              "<<endl;
    cout<<"       (     )  ___________________ (     )                  "<<endl;
    cout<<"        (  )                         (   )                   "<<endl;
    cout<<"============================================================"<<endl;
    cout<<" ABOUT US"<<endl;
  cout<<"Arvind Car Rental is in Candolim,Goa. Car Hire with Address, "<<endl;
  cout<<"Contact Number, Photos, Maps. View Arvind Car Rental, Goa on Justdial.Offering car "<<endl;
  cout<<"rental services, Arvind Car Rental in Candolim, Goa is a name to be reckoned with. "<<endl;
  cout<<"This agency has been in the business of offering cars on rent. This venture aims "<<endl;
  cout<<"to offer individuals as well as corporates with superlative car hire services."<<endl;
  cout<<" Over time this firm has made a mark in the self-drive car rental segment. This"<<endl;
  cout<<" establishment has provided impeccable services to a large number of customers. "<<endl;
  cout<<"This professionally managed organisation believes in offering quality services at"<<endl;
  cout<<"reasonable price points. It is taking conscientious strides at achieving customer"<<endl;
  cout<<"satisfaction through maintaining impeccable standards in their service offerings."<<endl;
  cout<<"On the , this firm's office occupies a prominent location in Candolim. Take your "<<endl;
  cout<<"pick as per your preferences. Their fleet is well-maintained and kept in excellent"<<endl; 
  cout<<"condition for the passengers' comfort and convenience. They also offer long term "<<endl;
  cout<<"rentals and fleet management services. Catering to the convenience of their "<<endl;
  cout<<"customers, this firm offers its services round-the-clock. "<<endl;
  cout<<"Please provide Car Model"<<endl;
      cout<<"Enter 'A' for Ferrari, Enter 'B' for tesla, Enter 'C' for lambourgini";
      cin>>model;
      B bobj;
      C cobj;
   bobj.display_details();
   cobj.calc_rent();   
    getch();
    return 0;
}
