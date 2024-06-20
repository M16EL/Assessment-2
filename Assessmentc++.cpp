//C++ Programming Assessment Test

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

class Event{
	public:
	string name,first_name,last_name;
	int  guests,minutes;
	
	public :
		void Name_Event()
		{
			cout<<"\nEnter Name of Event:\n";
			cin>>name;
			cout<<"\nEnter Customer's first name and last name:\n";
			cin>>first_name>>last_name;
			cout<<"\nEnter Number of Guests:\n";
			cin>>guests;
			cout<<"\nEnter Number of minutes in the event:\n";
			cin>>minutes;
			
			cout<<"*****************EVENT ESTIMATE FOR********************s:"<<endl<<first_name<<last_name;
		}
};

class c:public Event{
	public:
		
	float costPerHour = 18.50;
	float costPerMinute = 0.40;
	float cost_of_dinner=20.70;
	float cost1,cost2,cost_hour,TotalFoodCost,cost_minute,cost_dinner,AverageCost,CostOfDinner,TotalCost,NumberOfServers,Deposite;
	
	int  dinner,Number_of_server,CostForOneServer;
	void cost()
	{
		cost_hour = costPerHour * (minutes/60);
		
		cost_minute = costPerMinute * minutes;
		
		cost_dinner = cost_of_dinner * guests;
	}
	
	void Servers(){
		Number_of_server = guests / 20;
		cout<<"\nYou need "<<Number_of_server<<" servers.";
		
		cost1 = (minutes/60) * costPerHour;
		cost2 =  (minutes % 60) * costPerMinute;
		CostForOneServer = cost1 + cost2; 
		cout<<"\nThe cost of servers: "<<CostForOneServer;
		TotalFoodCost = guests * cost_of_dinner; 
		cout<<"\nThe cost for food is: "<<TotalFoodCost;
		AverageCost = TotalFoodCost / guests; 
		cout<<"\nAvrage cost per person: "<<AverageCost; 
		TotalCost = TotalFoodCost + (CostForOneServer * Number_of_server ); 
		cout<<"\nTotal cost is : "<<TotalCost;
		
		Deposite = (TotalCost * 25) / 100;
		cout<<"\nPlease deposite a 25% deposite to reserve the event";
		cout<<"\nThe deposite needed is:"<<ceil(Deposite);
 	}
	
	
	
	
};

int main(){
	
	cout<<"*****************EVENT MANAGEMENT SYSTEM*********************";
	c e1;
	e1.Name_Event();
	e1.Servers();
	
	return 0;
}
