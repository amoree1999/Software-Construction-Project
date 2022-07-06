
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Date 
{
	private:
		int day;
		int month;
		int year;
	public:
		Date(int d=0, int m=0, int y=0) 
		{
			day =d;
			month = m;
			year = y;
		}
		int getDay() 
		{
			return day;
		}
		int getMonth() 
		{
			return month;
		}
		int getYear() 
		{
			return year;
		}
		void setDay(int d) 
		{
			day= d;
		}
		void setMonth(int m) 
		{
			month =m;
		}
		void setYear(int y) 
		{
			year = y;
		}
};

class GiftCard 
{
	private:
		string type;
		string code;
		Date D;
	public:
		GiftCard(int d= 0, int m=0, int y=0, string ty="NON",string c="XXXXXXXXXXXX"): D(d,m,y), type(ty), code(c) 
		{
			
		}
		void setType(string tp)
		{
			type =tp;
		}
		string getCode()
		{
			return code;
		}
		void setExpireDate(string ed)
		{
			code =ed;
		}
		string getType()
		{
			return type;
		}
};


class AccountBalance
{
	private:
		string name; 
		int ID; 
		double CurrentMoney; 
		GiftCard* gif; 
	public:
		AccountBalance(string n="Default" , int I = 00000 , double CM=0) 
		{
			name =n;
			ID=I;
			CurrentMoney = CM;
		}
		void printCode()
		{
			cout <<"Gift card Type: "<<gif->getType()<<" The code: "<<gif->getCode();
		}
		
		void setGift(GiftCard* GIF) 
		{
			gif = GIF;
		}
		string getName()
		{
			return name;
		}
		int getID()
		{
			return ID;
		}
		void setCurrentMoney(double c)
		{
			CurrentMoney=c;
		}
		double getCurrentMoney()
		{
			return CurrentMoney;
		}
		void printBalance()
		{
			
		}
		
		
};

class CostumerAccount
{
	private:
		string UserName; 
		string Password; 
		AccountBalance AC; 
	public:
		CostumerAccount(string n , int I ,double CM , string U="Non", string P="xxxxxxxx"): AC(n,I,CM),  UserName(U), Password (P) 
		{
			
		}
		string getUsername()
		{
			return UserName;
		}
		string getPassword()
		{
			return Password;
		}
		void setUsername(string u)
		{
			UserName = u;
		}
		void setPassword(string p)
		{
			Password = p;
		}
		
};

void menu(int &c) 
{
	
	
	
	

	cout <<"Select your gift card\n";
	cout<<"1-PSN\n2-Xbox\n3-Stream\n4-Korek\n5-Asia\n6-Zain\n7-Matercard\n\n";
	cout<<"Enter the selected card-> ";
	cin >> c;
}

void IF(int &f,int &d, int &m, int &y) 
{
	AccountBalance a; 
	double cm=0; 
	Date D(d,m,y);
	
	if (f==1)
	{
		GiftCard c(d,m,y,"PSN");  
		int amount; 
		cout<<"You have choosen "<< c.getType()<< endl;
		cout <<"Please selected which amount you wanna buy: "<< endl;
		cout<<"1-10$\n2-20$\n3-50$\n4-100$\n";
		cout<< "Enter here -> ";
		cin >> amount;
		
		if(amount ==1)
		{
			
		
			cout<<"You have choosed 10$\n";
			c.setExpireDate("1X2M7HH8I9O0");
			cout<<"Your code is: "<< c.getCode()<< endl;
			cout <<"Your experation date is: 12/12/2020\n";
			cm +=10;
			a.setCurrentMoney(cm);
			
			
			
			
		}
		if(amount ==2)
		{
			cout<<"You have choosed 20$\n";
			c.setExpireDate("356GHJ88Y712");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 12/10/2020\n";
			cm +=20;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==3)
		{
			cout<<"You have choosed 50$\n";
			c.setExpireDate("AGH8JJ901U7Y");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 12/9/2021\n";
			cm +=50;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==4)
		{
			cout<<"You have choosed 100$\n";
			c.setExpireDate("356GHJ88Y712");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 9/8/2022\n";
			cm +=100;
			a.setCurrentMoney(cm);
			
		}
		
		
	}
	
	if (f==2)
	{
		GiftCard c(d,m,y,"Xbox");
		int amount;
		cout<<"You have choosen "<< c.getType()<< endl;
		cout <<"Please selected which amount you wanna buy: "<< endl;
		cout<<"1-10$\n2-20$\n3-50$\n4-100$\n";
		cout<< "Enter here -> ";
		cin >> amount;
		
		if(amount ==1)
		{
			cout<<"You have choosed 10$\n";
			c.setExpireDate("TY6734AWS10J");
			cout<<"Your code is: "<< c.getCode()<< endl;
			cout <<"Your experation date is: 7/7/2020\n";
			cm +=10;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==2)
		{
			cout<<"You have choosed 20$\n";
			c.setExpireDate("GHJK00IU87GT");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 30/12/2019\n";
			cm +=20;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==3)
		{
			cout<<"You have choosed 50$\n";
			c.setExpireDate("VBN567H7J80K");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 20/12/2020\n";
			cm +=50;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==4)
		{
			cout<<"You have choosed 100$\n";
			c.setExpireDate("HH765FG6Y9KL");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 7/9/2022\n";
			cm +=100;
			a.setCurrentMoney(cm);
			
		}
		
	}
	
	if (f==3)
	{
		GiftCard c(d,m,y,"Stream");
		int amount;
		cout<<"You have choosen "<< c.getType()<< endl;
		cout <<"Please selected which amount you wanna buy: "<< endl;
		cout<<"1-10$\n2-20$\n3-50$\n4-100$\n";
		cout<< "Enter here -> ";
		cin >> amount;
		
		if(amount ==1)
		{
			cout<<"You have choosed 10$\n";
			c.setExpireDate("GHJUIO0981SD");
			cout<<"Your code is: "<< c.getCode()<< endl;
			cout <<"Your experation date is: 7/7/2021\n";
			cm +=10;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==2)
		{
			cout<<"You have choosed 20$\n";
			c.setExpireDate("GHJ876FF9J0W");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 30/12/2020\n";
			cm +=20;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==3)
		{
			cout<<"You have choosed 50$\n";
			c.setExpireDate("HJKMNB876FD4");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 20/12/2022\n";
			cm +=50;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==4)
		{
			cout<<"You have choosed 100$\n";
			c.setExpireDate("JK9898HH00Q1");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 7/8/2021\n";
			cm +=100;
			a.setCurrentMoney(cm);
			
		}
		
	}
	
	if (f==4)
	{
		GiftCard c(d,m,y,"Korek");
		int amount;
		cout<<"You have choosen "<< c.getType()<< endl;
		cout <<"Please selected which amount you wanna buy: "<< endl;
		cout<<"1-5$\n2-10$\n3-15$\n4-20$\n";
		cout<< "Enter here -> ";
		cin >> amount;
		
		if(amount ==1)
		{
			cout<<"You have choosed 5$\n";
			c.setExpireDate("121278526745");
			cout<<"Your code is: "<< c.getCode()<< endl;
			cout <<"Your experation date is: 7/7/2021\n";
			cm +=5;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==2)
		{
			cout<<"You have choosed 10$\n";
			c.setExpireDate("459563258974");
			cout<<"Your code is: "<< c.getCode()<< endl;
			cout <<"Your experation date is: 30/12/2020\n";
			cm +=10;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==3)
		{
			cout<<"You have choosed 15$\n";
			c.setExpireDate("124578968523");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 20/12/2022\n";
			cm +=15;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==4)
		{
			cout<<"You have choosed 20$\n";
			c.setExpireDate("587412556655");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 7/8/2021\n";
			cm +=20;
			a.setCurrentMoney(cm);
			
		}
		
	}
	
	if (f==5)
	{
		GiftCard c(d,m,y,"Asia");
		int amount;
		cout<<"You have choosen "<< c.getType()<< endl;
		cout <<"Please selected which amount you wanna buy: "<< endl;
		cout<<"1-5$\n2-10$\n3-15$\n4-20$\n";
		cout<< "Enter here -> ";
		cin >> amount;
		
		if(amount ==1)
		{
			cout<<"You have choosed 5$\n";
			c.setExpireDate("525654896312");
			cout<<"Your code is: "<< c.getCode()<< endl;
			cout <<"Your experation date is: 7/7/2021\n";
			cm +=5;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==2)
		{
			cout<<"You have choosed 10$\n";
			c.setExpireDate("125483256956");
			cout<<"Your code is: "<< c.getCode()<< endl;
			cout <<"Your experation date is: 30/12/2020\n";
			
			cm +=10;
			a.setCurrentMoney(cm);
		}
		if(amount ==3)
		{
			cout<<"You have choosed 15$\n";
			c.setExpireDate("124585654789");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 20/12/2022\n";
			cm +=15;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==4)
		{
			cout<<"You have choosed 20$\n";
			c.setExpireDate("632598745632");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 7/8/2021\n";
			cm +=20;
			a.setCurrentMoney(cm);
			
		}
		
	}
	
	if (f==6)
	{
		GiftCard c(d,m,y,"Zain");
		int amount;
		cout<<"You have choosen "<< c.getType()<< endl;
		cout <<"Please selected which amount you wanna buy: "<< endl;
		cout<<"1-5$\n2-10$\n3-15$\n4-20$\n";
		cout<< "Enter here -> ";
		cin >> amount;
		
		if(amount ==1)
		{
			cout<<"You have choosed 5$\n";
			c.setExpireDate("456985231458");
			cout<<"Your code is: "<< c.getCode()<< endl;
			cout <<"Your experation date is: 7/7/2021\n";
			cm +=5;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==2)
		{
			cout<<"You have choosed 10$\n";
			c.setExpireDate("852369741020");
			cout<<"Your code is: "<< c.getCode()<< endl;
			cout <<"Your experation date is: 30/12/2020\n";
			cm +=10;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==3)
		{
			cout<<"You have choosed 15$\n";
			c.setExpireDate("500236741895");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 20/12/2022\n";
			cm +=15;
			a.setCurrentMoney(cm);
			
		}
		if(amount ==4)
		{
			cout<<"You have choosed 20$\n";
			c.setExpireDate("2301569874156");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 7/8/2021\n";
			cm +=20;
			a.setCurrentMoney(cm);
			
		}
		
	}
	
	if (f==7)
	{
		GiftCard c(d,m,y,"MasterCard");
		int amount;
		cout<<"You have choosen "<< c.getType()<< endl;
		cout <<"Please selected which amount you wanna buy: "<< endl;
		cout<<"1-10$\n2-20$\n3-50$\n4-100$\n";
		cout<< "Enter here -> ";
		cin >> amount;
		
		if(amount==1)
		{
			cout<<"You have choosed 10$\n";
			c.setExpireDate("GH879QWE1234");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 7/8/2021\n";
			cm +=10;
			a.setCurrentMoney(cm);
		}
		
		if(amount==2)
		{
			cout<<"You have choosed 20$\n";
			c.setExpireDate("HJ8779JIM012");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 30/12/2019\n";
			cm +=20;
			a.setCurrentMoney(cm);
		}
		
		if(amount==3)
		{
			cout<<"You have choosed 50$\n";
			c.setExpireDate("AS12WE55TTT9");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 4/9/2022\n";
			cm +=50;
			a.setCurrentMoney(cm);
		}
		if(amount==4)
		{
			cout<<"You have choosed 100$\n";
			c.setExpireDate("BNM098HH0OQ1");
			cout<<"Your code is: "<< c.getCode()<< endl;;
			cout <<"Your experation date is: 4/10/2023\n";
			cm +=100;
			a.setCurrentMoney(cm);
		}
		
	}
	
}

int main()
{

	
	
	string us,mail,pas;
	double Id, current;
	cout<<"Welcome to online gift card\n";
	cout<<"Enter your UserName: ";
	getline(cin,us);
	cout<<"Enter your Email: ";
	getline(cin,mail);
	cout<< "Enter your password: ";
	getline(cin,pas);
	cout<<"Enter your ID: ";
	cin >> Id;
	
	int d,m,y; 
	cout<<"\nPlease Enter today's date\n";
	cout<<"Enter Day: ";
	cin>> d;
	cout<<"Enter Month: ";
	cin >>m;
	cout<<"Enter Year: ";
	cin >> y;
	cout<<endl;
	
	CostumerAccount B(us , Id ,20 ,mail,pas); 
	
	
	int choice; 
	menu(choice); 
	
	IF(choice,d,m,y); 


	
	return 0;
}
