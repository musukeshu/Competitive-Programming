#include<bits/stdc++.h>
using namespace std;
#define maxCapacity 5
#define totalDaySlots 3
#define totalNightSlots 3
#define maxCentre
map<string, map< string, vector<vector<pair<string,int> > > > >centre;
map<string, map<string, vector<vector<string> > > >bookingDetails;
int uid=0;
map<string,int> user; 
map<int, string> slotTimes;
void addSlotTimes(){
slotTimes[0]="6:00AM-7:00AM";
slotTimes[1]="7:00AM-8:00AM";	
slotTimes[2]="8:00AM-9:00AM";
slotTimes[10]="6:00PM-7:00PM";
slotTimes[11]="7:00PM-8:00PM";
slotTimes[12]="8:00PM-9:00PM";
}
bool Register(string uName)
{
	if(user.find(uName)==user.end())
	{
		user[uName]++;
		return true;
	}
	else{
		if(user[uName]>0)
		{
		cout<<"Username already exist. Please chose a different one\n";
		return false;
		}
		else{
			user[uName]++;
			return true;
		}
	}
}
void addWorkoutInfo()
{
	map< string, vector<vector<pair<string,int> > > > temp;
	map< string, vector<vector<pair<string, int> > > > temp2;
	temp["01-02-2022"]={
	{make_pair("Cardio",maxCapacity),make_pair("Weights",maxCapacity),make_pair("Cardio",maxCapacity)},
	{make_pair("Cardio",maxCapacity),make_pair("Cardio",maxCapacity),make_pair("Weights",maxCapacity)}
	};
	centre["Koromangala"]=temp;
	temp2["02-02-2022"]={
	{make_pair("Cardio",maxCapacity),make_pair("Weights",maxCapacity),make_pair("Cardio",maxCapacity)},
	{make_pair("Cardio",maxCapacity),make_pair("Weights",maxCapacity),make_pair("Weights",maxCapacity)}
	};
	centre["Bellandur"]=temp2;
	addSlotTimes();
}

void viewWorkoutDetails(string cname, string cdate)
{
	string uName;
	cout<<"Please enter your userName\n";
	cin>>uName;
	if(user.find(uName)==user.end())
	{
		cout<<"You are not a registered user\n";
	}
	else{
		
	if(centre.find(cname)==centre.end()){
		cout<<"No such centre exist\n";
	}
	else{
		map< string, vector<vector<pair<string,int> > > > ctemp=centre[cname];
		if(ctemp.find(cdate)==ctemp.end())
	{
		cout<<"Wrong date\n";
	}
	else{
		vector<vector<pair<string,int> > > temp;
		map< string, vector<vector<pair< string, int> > > > ctemp=centre[cname];
		temp=ctemp[cdate];
		for(int i=0;i<temp.size();i++)
		{
			for(int j=0;j<temp[i].size();j++)
			{
				cout<<slotTimes[i*10+j*1]<<" "<<temp[i][j].first<<" "<<temp[i][j].second<<endl;
			}
		}
	}
}
}
}
void bookSlot(string buname, string bcname, string bdate, string bslot){
	int tempSlotNo;
	if(user.find(buname)==user.end())
	{
		cout<<"User doesn't exist \n";
	}
	else if(centre.find(bcname)==centre.end())
	{
		cout<<"Center detail is wrong\n";
	}
	else if(centre[bcname].find(bdate)==centre[bcname].end())
	{
		cout<<"No workout details for this date\n";
	}
	else
	{
		map<int, string> ::iterator it;
		for(it=slotTimes.begin();it!=slotTimes.end();it++)
		{
			if(it->second==bslot)
			{
				tempSlotNo=it->first;
				break;
			}
		}
		if(it==slotTimes.end())
		{
			cout<<"Enter a valid slot\n";
		}
		else{
			vector<vector<pair<string,int> > > &temp=centre[bcname][bdate];
			if((temp[tempSlotNo/10][tempSlotNo%10]).second>0)
			{
				int i=0;
				for(i=0;i<bookingDetails[buname][bdate].size();i++)
				{
					if(bookingDetails[buname][bdate][i][1]==bslot)
					{
						cout<<"Already booked by you\n";
					}
				}
				if(i==bookingDetails[buname][bdate].size()){
						(temp[tempSlotNo/10][tempSlotNo%10]).second--;
						bookingDetails[buname][bdate].push_back({bcname,bslot});
						cout<<"Booked Successfully\n";
				    }

			}
			else{
				cout<<"Slot is full\n";
			}
		}
	}
}
void viewWorkoutPlan(string uName, string uDate)
{
	if(user.find(uName)==user.end())
	{
		cout<<"You are not registered\n";
	}
	else if(bookingDetails.find(uName)==bookingDetails.end())
	{
		cout<<"No plan is there for you\n";
	}
	else if(bookingDetails[uName].find(uDate)==bookingDetails[uName].end())
	{
		cout<<"No plan for the given date\n";
	}
	else{
		for(int i=0;i<bookingDetails[uName][uDate].size();i++)
		{
			cout<<bookingDetails[uName][uDate][i][0]<<" "<<uDate<<" "<<bookingDetails[uName][uDate][i][1];
			cout<<endl;
		}
	}
}
int main()
{
	//This needs to be done by the Admin once
	int typeOfUser;
	bool adminFlag=false;
	string uName, choice,centreName, currDate;
	string userName, bCentreName, bDate, bSlot;
	while(1){
		cout<<"Enter 1 for User and 2 for Admin and 3 for exit\n";
	cin>>typeOfUser;
	if(typeOfUser==2)
	{
		cout<<"\nWelcome Admin to FlipFLit\n";
		addWorkoutInfo();
		adminFlag=true;
	}
	else if(typeOfUser==1){
		while(1)
		{
		if(!adminFlag){
			cout<<"No workout plan is there\n";
			break;
		}

		cout<<"Welcome to FLipFlit\n";
		cout<<"Choose one of the option\n";
		cout<<"Register, exit, view_workout_details, book_slot, view_workout_plan \n";
		cin>>choice;
		if(choice=="Register")
		{
			cout<<"Please enter your user name\n";
			cin>>uName;
			if(Register(uName))
			{
				cout<<"User Successfuly Added\n";
			}
		}
		else if(choice=="view_workout_details")
		{
			cin>>centreName>>currDate;
			viewWorkoutDetails(centreName, currDate);
			
		}
		else if(choice=="book_slot")
		{
			cin>>userName>>bCentreName>>bDate>>bSlot;
			cout<<endl;
			bookSlot(userName,bCentreName,bDate,bSlot);
		}
		else if(choice== "view_workout_plan")
		{
			cin>>userName>>bDate;
			cout<<endl;
			viewWorkoutPlan(userName, bDate);
		}
		else if(choice=="exit")
		{
			break;
		}
		else{
			cout<<"Enter correct choice\n";
		}
		}

	}
	else if(typeOfUser==3)
	{
		break;
	}
	else{
		cout<<"Invalid Type of User\n";
		break;
	}
	}
	
	return 0;
	
	
	
}
