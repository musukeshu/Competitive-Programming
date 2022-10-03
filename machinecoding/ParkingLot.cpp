#include<bits/stdc++.h>
using namespace std;
#define maxfloor 5
#define maxslot 10
#define noOfParkingLot 1
class Vehicle{
	protected:
		string RegNo;
		string type;
		string color;
	public:
		virtual void addDetails(string, string){
			
		};
		string getType()
		{
			return type;
		}
		string getRegno()
		{
			return RegNo;
		}
};

class Car:public Vehicle{
	public:
	void addDetails(string rn, string c){
		RegNo=rn;
		color=c;
		type="CAR";
	}
};
class Bike:public Vehicle{
	public:
	void addDetails(string rn, string c){
		RegNo=rn;
		color=c;
		type="BIKE";
	}
};
class Truck:public Vehicle{
	public:
	void addDetails(string rn, string c){
		RegNo=rn;
		color=c;
		type="TRUCK";
	}
};

class Slot{
	public:
	string SlotType;
	int SlotId;
	bool isFree;
	Vehicle vehicle;
	public:
	Slot(string st,int sid,bool f)
	{
		SlotType=st;
		SlotId=sid;
		isFree=f;
	}
};
class Floor{
	public:
	int levelId;
	vector<Slot> slots;
	int current_slotid=0;
	public:
	Floor(int lid,int noslots)
	{
		levelId=lid;
		while(noslots>0)
		{
			bool x= addSlot();
			noslots--;
		}
	}
		
		bool addSlot(){
			if(slots.size()==maxslot)
			{
				cout<<"Maximum slot reached \n";
				return false;
			}
			else if(slots.size()>=3){
				current_slotid++;
				slots.push_back(Slot("CAR",current_slotid,true));
			}
			else if(slots.size()>=1)
			{
				current_slotid++;
				slots.push_back(Slot("BIKE",current_slotid,true));
			}
			else{
				current_slotid++;
				slots.push_back(Slot("TRUCK",current_slotid,true));
			}
			return true;
		}
		
	

};
class ParkingLot{
	public:
	vector<Floor> floors;
	string parkingLotName;
	int currentfloorno=floors.size();
	public:
	bool createParkingLot(string name,int nofloor,int noslot)
	{
		if(nofloor>maxfloor || noslot>maxslot)
		{
			cout<<"Maximum of floor or slot achieved\n";
			return false;
		}
		if(nofloor==0 || noslot==0)
		{
			cout<<"Floor or slot can't be zero\n";
			return false;
		}
		else{
			parkingLotName=name;
			for(int i=1;i<=nofloor;i++)
			{
				if(!addFloor(noslot))
				{
					return false;
				}
			} 
			return true;
		}
	}
	bool addFloor(int nslot)
	{
		if(floors.size()<maxfloor)
		{
			if(nslot>0&&nslot<=maxslot)
			{
			currentfloorno++;
			floors.push_back(Floor(currentfloorno,nslot));
			return true;
			}
			else
			{
				cout<<"Enter a valid slot count\n";
				return false;
			}
			
		}
		else{
			cout<<"Maximum floor reached. Can't add anymore'\n";
			return false;
		}
	}
	bool addSlots(int fid)
	{
		if(floors[fid-1].addSlot())
		{
			return true;
		}
		else{
			return false;
		}
	}
	void freeSlotDisplay(string vtype){
				for(int i=0;i<floors.size();i++)
				{
					Floor obj=floors[i];
					for(int j=0;j<obj.slots.size();j++)
					{
						if(obj.slots[j].isFree==true&&obj.slots[j].SlotType==vtype)
						{
							cout<<"Free slots for "<<vtype<<" in FLoor "<<i+1<<" : "<<j+1<<endl;
						}
					}
				}
	}
	void freeSlotCountDisplay(string vtype){
		for(int i=0;i<floors.size();i++)
		{
			int count=0;
				Floor obj=floors[i];
				for(int j=0;j<obj.slots.size();j++)
				{
						if(obj.slots[j].isFree==true&&obj.slots[j].SlotType==vtype)
						{
							count++;
						}
				}
				cout<<"Free slots count for "<<vtype<<" in FLoor "<<i+1<<" : "<<count<<endl;
		}
	}
	
	void park_vehicle(Vehicle v){
		for(int i=0;i<floors.size();i++)
		{
			int count=0;
				Floor obj=floors[i];
				for(int j=0;j<obj.slots.size();j++)
				{
						if(obj.slots[j].isFree==true&&obj.slots[j].SlotType==v.getType())
						{
							floors[i].slots[j].vehicle=v;
							floors[i].slots[j].isFree=false;
							string tktid=generateTicket(i+1,j+1);
							cout<<v.getType()<<" parked. Ticket ID: "<<tktid<<endl;
							return;
						}
				}
		}
		cout<<"Parking lot is full\n";		
	}
	void occupiedSlotDisplay(string vtype){
		for(int i=0;i<floors.size();i++)
				{
					Floor obj=floors[i];
					cout<<"Occupied slots for "<<vtype<<" in FLoor "<<i+1<<" :";
					for(int j=0;j<obj.slots.size();j++)
					{
						if(obj.slots[j].isFree==false&&obj.slots[j].SlotType==vtype)
						{
							cout<<j+1<<",";
						}
					}
					cout<<endl;
				}
	}
	
	void unparkVehicle(string tktid)
	{
		string plname="",f="",s="";
		int flevel,slevel,count1=0;
		for(int i=0;i<tktid.length();i++)
		{
			if(tktid[i]!='_'&&count1==0)
			{
				plname+=tktid[i];
			}
			else if(tktid[i]=='_')
			{
				count1++;
			}
			else if(tktid[i]!='_'&&count1==1)
			{
				f+=tktid[i];
			}
			else if(tktid[i]!='_'&&count1==2)
			{
				s+=tktid[i];
			}
		}
			if(f==""||s==""||plname!=parkingLotName){
				cout<<"INVALID TICKETID\n";
			}
			else if(stoi(f)>maxfloor||stoi(f)<=0||stoi(s)>maxfloor||stoi(s)<=0)
			{
				cout<<"INVALID TICKETID\n";
			}
			else{
				flevel=stoi(f);
				slevel=stoi(s);
				if(floors[flevel-1].slots[slevel-1].isFree==true){
					cout<<"Slot unoccupied\n";
				}
				else{
					cout<<"Arrived"<<endl;
					string regn=floors[flevel-1].slots[slevel-1].vehicle.getRegno();
					string type=floors[flevel-1].slots[slevel-1].vehicle.getType();
					cout<<"Unparked vehicle. Reg. Num "<<regn<<" Type: "<<type<<endl;
				}
			}
	}
	
	string generateTicket(int f, int s)
	{
		string t="";
		t+=parkingLotName;
		t+="_";
		t+=to_string(f);
		t+="_";
		t+=to_string(s);
		return t;
	}
	
		
};

int main(){
	string option,vehicleType,RegNo,Color,pln,dtype,vtype,tktid;
	int noOfLot=0,nf,spf,fid;
	ParkingLot pl[noOfParkingLot];
	while(1)
	{
		cout<<"Welcome to Parking Lot System"<<endl;
		cout<<"Choose Any of the given options"<<endl;
		cout<<"create_parking_lot"<<endl;
		cout<<"park_vehicle"<<endl;
		cout<<"add_floor"<<endl;
		cout<<"add_slot"<<endl;
		cout<<"display"<<endl;
		cout<<"EXIT"<<endl;
		cin>>option;
		cout<<endl;
		if(option=="create_parking_lot"){
			if(noOfLot>=noOfParkingLot)
			{
				cout<<"Parking Lot already exist. No more can be added\n";
			}
			else{
			cout<<"Enter Name, number of floors and slot per floor"<<endl;
			cin>>pln>>nf>>spf;
			cout<<endl;
			if(pl[noOfLot].createParkingLot(pln,nf,spf))
			{
				noOfLot++;
				cout<<"Created Parking Lot with "<<nf<<" floors with "<<spf<<" slots each\n";
			}	
			}
			
		}
		if(option=="add_floor"){
			if(noOfLot==0)
			{
				cout<<"Please Add a lot"<<endl;
			}
			else{
			cout<<"Enter slots per floor\n";
			cin>>spf;
			cout<<endl;
			if(pl[noOfLot-1].addFloor(spf))
			{
				cout<<"Floor Added \n";
			}
			}	
		}
		else if(option=="add_slot"){
			if(noOfLot==0){
				cout<<"Please Add a lot"<<endl;
			}
			else{
				cout<<"Enter the floor levelid\n";
				cin>>fid;
				cout<<endl;
				if(fid>maxfloor||fid<=0)
				{
					cout<<"Enter a valid floor\n";
				}
				else{
					if(pl[noOfLot-1].addSlots(fid))
					{
						cout<<"Slot added successfully\n";
					}
				}
			}
		}
		else if(option=="display")
		{
			if(noOfLot==0){
				cout<<"Please Add a lot"<<endl;
			}
			cout<<"\nEnter the display type\n";
			cin>>dtype;
			cout<<"\nEnter the Vehicle Type\n";
			cin>>vtype;
			if(vtype!="CAR"&&vtype!="BIKE"&&vtype!="TRUCK")
			{
				cout<<"Enter a valid vehicle type\n";
			}
			else{
				if(dtype=="free_slots")
				{
				pl[noOfLot-1].freeSlotDisplay(vtype);
				}
				if(dtype=="free_count")
				{
					pl[noOfLot-1].freeSlotCountDisplay(vtype);
				}
				if(dtype=="occupied_slot")
				{
					pl[noOfLot-1].occupiedSlotDisplay(vtype);
				}
			}

		}
		else if(option=="park_vehicle")
		{
			if(noOfLot==0){
				cout<<"Please Add a lot"<<endl;
			}
			cout<<"Please enter vehicleType, RegNo and Color respectively\n";
			cin>>vehicleType>>RegNo>>Color;
			cout<<endl;
			if(vehicleType=="CAR")
			{
				Car c;
				c.addDetails(RegNo,Color);
				pl[noOfLot-1].park_vehicle((Vehicle)c);
			}
			else if(vehicleType=="BIKE")
			{
				Bike b;
				b.addDetails(RegNo,Color);
				pl[noOfLot-1].park_vehicle((Vehicle)b);
			}
			else if(vehicleType=="TRUCK")
			{
				Truck t;
				t.addDetails(RegNo,Color);
				pl[noOfLot-1].park_vehicle((Vehicle)t);
			}
			else{
				cout<<"Invalid Vehicle Type"<<endl;
			}
		}
		else if(option=="unpark_vehicle"){
			if(noOfLot==0){
				cout<<"Please Add a lot"<<endl;
			}
			cout<<"ADD ticket"<<endl;
			cin>>tktid;
			cout<<endl;
			pl[noOfLot-1].unparkVehicle(tktid);
		}
		else if(option=="EXIT"){
			cout<<"SUCCESSFULLY EXITED\n";
			break;
		}	
		else{
			cout<<"Invalid Entry\n";
		}
	}
}
