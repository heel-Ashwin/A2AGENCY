#include <iostream>
#include <string>
using namespace std;

class a2agency
{
    public:
    char name;
    char email;
    char addr;
    int mno;
    int price;
    int src,src1,dest,dest1;
    int rtype;
    int tmode;
    void userdet();
    void tripdet();
    void traveltype();
    void travelmode();
    int price;
	int price1,price2,price3;
	int c,c1;
	void diffmode()
	{
		if (tmode==1)
		{
			void airline();
		}
		else if(tmode==2)
		{
			void railway();
		}
		else
		{
			void roadway();
		}
	}
		void confirm();
};
void a2agency::userdet()
{
    cout<<"Welcome to A2Agency"<<endl;
    cout<<"Enter your full name:"<<endl;
    std::cin >> name;
    cout<<"Enter your email id:"<<endl;
    std::cin >> email;
    cout<<"Enter your mobile number:"<<endl;
    std::cin >> mno;
    cout<<"Enter your full address:"<<endl;
    std::cin >> addr;
}
void a2agency::tripdet()
{
    cout<<"Enter the Start Point id.no:"<<endl;
    cout<<"DELHI(1)  MUMBAI(2)  CHENNAI(3)  KOLKATA(4)  BENGALURU(5)"<<endl;
    std::cin >> src;
	if(src>5)
	{
		cout<<"Enter the id.no correctly:";
		std::cin >> src1;
		src=src1;
	}
    cout<<"Enter the Destination Point id.no:"<<endl;
    cout<<"DELHI(1)  MUMBAI(2)  CHENNAI(3)  KOLKATA(4)  BENGALURU(5)"<<endl;
    std::cin >> dest;
    if(dest>5)
    {
    	cout<<"Enter the id.no correctly:";
    	std::cin >> dest1;
    	dest=dest1;
	}
    if(src==dest)
    {
        cout<<"Re Select Destination Point id.no.Do not select same id.no for Start Point and Destination Point"<<endl;
    }
}
void a2agency::traveltype()
{
    cout<<"Enter id.no for Single Route/Up-and-Down:"<<endl;
    cout<<"SIngle Route(1)  Up-and-Down(2)"<<endl;
    std::cin >> rtype;
}
void a2agency::travelmode()
{
	cout<<"Select Travel Mode using id.no:"<<endl;
	cout<<"Airline(1)  Railway(2)  Roadways(3)"<<endl;
	std::cin >> tmode;	
}

void a2agency::airline()
{
	if(src==1)
	{
		if(dest==2)
		{
			price=6000;
		}
		if(dest==3)
		{
			price=8000;
		}
		if(dest==4)
		{
			price=4000;
		}
		if(dest==5)
		{
			price=7400;
		}
	}
	if(src==2)
	{
		if(dest==1)
		{
			price=6000;
		}
		if(dest==3)
		{
			price=4500;
		}
		if(dest==4)
		{
			price=5000;
		}
		if(dest==5)
		{
			price=4200;
		}
	}
	if(src==3)
	{
		if(dest==1)
		{
			price=8000;
		}
		if(dest==2)
		{
			price=4500;
		}
		if(dest==4)
		{
			price=6000;
		}
		if(dest==5)
		{
			price=3000;
		}
	}
	if(src==4)
	{
		if(dest==1)
		{
			price=4000;
		}
		if(dest==2)
		{
			price=5000;
		}
		if(dest==3)
		{
			price=6000;
		}
		if(dest==5)
		{
			price=6200;
		}
	}
	else
	{
		if(dest==1)
		{
			price=7400;
		}
		if(dest==2)
		{
			price=4200;
		}
		if(dest==3)
		{
			price=3000;
		}
		if(dest==4)
		{
			price=6200;
		}
	}
	
	if(rtype==2)
	{
		price1=(2*price)-200;
	}
	else
	{
		price1=price;
	}
	cout<<"The Cost of Travel ticket is: ";
	cout<<price1;
}

void a2agency::railway()
{
	if(src==1)
	{
		if(dest==2)
		{
			price=600;
		}
		if(dest==3)
		{
			price=800;
		}
		if(dest==4)
		{
			price=400;
		}
		if(dest==5)
		{
			price=740;
	}
	if(src==2)
	{
		if(dest==1)
		{
			price=600;
		}
		if(dest==3)
		{
			price=450;
		}
		if(dest==4)
		{
			price=500;
		}
		if(dest==5)
		{
			price=420;
		}
	}
	if(src==3)
	{
		if(dest==1)
		{
			price=800;
		}
		if(dest==2)
		{
			price=450;
		}
		if(dest==4)
		{
			price=600;
		}
		if(dest==5)
		{
			price=300;
		}
	}
	if(src==4)
	{
		if(dest==1)
		{
			price=400;
		}
		if(dest==2)
		{
			price=500;
		}
		if(dest==3)
		{
			price=600;
		}
		if(dest==5)
		{
			price=620;
		}
	}
	else
	{
		if(dest==1)
		{
			price=740;
		}
		if(dest==2)
		{
			price=420;
		}
		if(dest==3)
		{
			price=300;
		}
		if(dest==4)
		{
			price=620;
		}
	}
	
	if(rtype==2)
	{
		price2=(2*price)-100;
	}
	else
	{
		price2=price;
	}
	cout<<"The Cost of Travel ticket is: ";
	cout<<price2;
}

void a2agency::roadway()
{
		if(src==1)
	{
		if(dest==2)
		{
			price=300;
		}
		if(dest==3)
		{
			price=400;
		}
		if(dest==4)
		{
			price=200;
		}
		if(dest==5)
		{
			price=370;
	}
	if(src==2)
	{
		if(dest==1)
		{
			price=300;
		}
		if(dest==3)
		{
			price=225;
		}
		if(dest==4)
		{
			price=250;
		}
		if(dest==5)
		{
			price=210;
		}
	}
	if(src==3)
	{
		if(dest==1)
		{
			price=400;
		}
		if(dest==2)
		{
			price=225;
		}
		if(dest==4)
		{
			price=300;
		}
		if(dest==5)
		{
			price=150;
		}
	}
	if(src==4)
	{
		if(dest==1)
		{
			price=200;
		}
		if(dest==2)
		{
			price=400;
		}
		if(dest==3)
		{
			price=300;
		}
		if(dest==5)
		{
			price=310;
		}
	}
	else
	{
		if(dest==1)
		{
			price=370;
		}
		if(dest==2)
		{
			price=210;
		}
		if(dest==3)
		{
			price=150;
		}
		if(dest==4)
		{
			price=310;
		}
	}
	
	if(rtype==2)
	{
		price3=(2*price)-25;
	}
	else
	{
		price3=price;
	}
	cout<<"The Cost of Travel ticket is: ";
	cout<<price3;
}
void a2agency::confirm()
{
	cout<<"To confirm your booking click 1"<<endl;
	std::cin >> c;
	if(c1!=1)
	{
		cout<<"Re enter 1"<<endl;
		std::cin >> c1;
		c=c1;
	}
	cout<<"Thank you for booking in A2Agency";
}

int main()
{
	a2agency p;
	p.userdet();
	p.tripdep();
	p.traveltype();
	p.travelmode();
	p.diffmode();
	p.confirm();
	return 0;
}