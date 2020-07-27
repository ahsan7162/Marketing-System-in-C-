#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;
string passwordinput()
{
    char pass[32];//to store password.
    int i = 0;
    char a;//a Temp char
    for(i=0;;)//infinite loop
    {
        a=getch();//stores char typed in a
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
            //check if a is numeric or alphabet
        {
            pass[i]=a;//stores a in pass
            ++i;
            cout<<"*";
        }
        if(a=='\b'&&i>=1)//if user typed backspace
            //i should be greater than 1.
        {
            cout<<"\b \b";//rub the character behind the cursor.
            --i;
        }
        if(a=='\r')//if enter is pressed
        {
            pass[i]='\0';//null means end of string.
            i=0;
            break;//break the loop
        }
    }
    return pass;
}
class person{
	protected:
	string name,password,username,email;
	public:
		virtual bool login(string user,string pass)=0;
};
class customer:public person{
public:
	int count1;//for checking wrong login credentiails
	signup()
		{
			ifstream file("database.txt");
				string n,u,e;
				string p;
				cout<<endl<<endl<<"****************************************************************************************************"<<endl<<endl;
				cout<<"\t\t\tfield marked (*) with this are required!!!!!!!!!!"<<endl<<endl;
				cout<<"Enter e-mail*(xyz123@abc.com): ";
				cin>>email;
				cout<<endl<<endl;
				cout<<"Enter name*: ";
				cin>>name;
				cout<<endl<<endl;
				cout<<"Enter username *: ";
				cin>>username;
				cout<<endl<<endl;
				cout<<"Enter password*: ";
				cin>>password;
				cout<<endl<<endl;
				cout<<"**************************************************************************************************"<<endl<<endl;
				cout<<"Press any key to continue...................................";
				getch();
				system("cls");
				file.clear();
				file.seekg(0, ios::beg);
				while(file>>n>>u>>e>>p)
				{
					if(email==e)
					{
						cout<<"Enter new email!!!"<<endl;
						cin>>email;
						int c=0;
						c=1;
						if(c=1)
						{
							file.clear();
							file.seekg(0, ios::beg);
						}
						
					}
					if(username==u)
					{
						cout<<"Enter new username: ";
						cin>>username;
						int c =0;
						c=1;
						if(c=1)
						{
							file.clear();
							file.seekg(0, ios::beg);
						}
					}
				}
				file.close();
				ofstream file1("database.txt",ios::app);
				file1<<name<<endl;
				file1<<username<<endl;
				file1<<email<<endl;
				file1<<password<<endl;
				cout<<endl<<endl<<"*********************************************************************************************************";
				cout<<endl<<endl<<"\t\t\t\t\tSIGNUP IS SUCCESSFUL!!!!!!!!!!!!!!!";
				cout<<endl<<endl<<"*********************************************************************************************************";
				cout<<"Press any key to continue........................................";
				file1.close();
				
		}
   bool login(string user,string pass)//login function for customer to gain access to market
    {
        int count;
        string n,u,e,p;
        system("cls");

ifstream input("database.txt");
while(input>>n>>u>>e>>p)
{
	if(u == user && p == pass || e==user && p==pass)//check if usenamer or email and password match from file
	{
		count=1;
		if(count==1)	
		break;
		system("cls");
		return true;
	}
}
	input.close();
	if(count==1)
		{
			cout<<"\t\t*****************************************************************************************\n";
			cout<<"\n\t\t\t\t\t\tHello "<<n<<"\n\t\t\t\t\t\tLOGIN SUCESS\n\t\t\t\t\t\tWe're glad that you're here.\n\n";
			cout<<"\t\t*****************************************************************************************\n";
		}
	else
		{
			count1++;
			if(count1==5)//check if five wrong login credentials are given
				{
					cout<<"Too many times wrong credentials program will now close!!!!!!!!!!!!!!!!!!!!";
					exit(0);
					input.close();
				}
			char choice2;//for asking choice of entering credentials again
			cout<<endl<<endl<<"**************************************************************************************"<<endl<<endl;
			cout<<"\nLOGIN ERROR\nPlease check your username and password\n\n\n";
			loop2:
			cout<<"Do you want to enter again!!!!!!!"<<endl<<"(Y for Yes,N for no): ";
			cin>>choice2;
			system("cls");
			if(choice2=='Y'||choice2=='y')
			{
				cout<<endl<<endl<<"***********************************************************************************"<<endl<<endl;
				cout<<"Enter USERNAME OR Email (xyz123@abc.com): ";
				cin>>user;
				cout<<endl<<endl;
				cout<<"Enter password: ";
				cin>>pass;
				cout<<endl<<endl<<"***********************************************************************************";
				cout<<endl<<endl<<"Press any key to continue ..................................";
				getch();
				login(user,pass);//call agian login if username or email or password is wrong 
			}
			else if(choice2=='N'||choice2=='n')
			{
				return false;
			}
			else
			{
				cout<<"Wrong input detected!!!!!!"<<endl;
				cout<<"Please Enter carefully!!!!!!!!!!!"<<endl;
				goto loop2;
			}
		}
	}
	int AddToCart(string name, int id, int price, int quantity)
{
	system("cls");
	cout<<name<<endl<<id<<endl<<price<<endl<<quantity;
	getch();
}
	void buying()
{
	int op, quantity, cat1, com, op2, op3, op4, op5, op6, data[3], price, id;
	char chr, line[15];
	
	MAIN://kahin bhi user chahay main menu pe ana to by using goto function yha tak paunch skta hai
	system("cls");
	cout<<endl<<endl<<"************************************************************************************************************"<<endl<<endl; 
	cout<<"Hi! Sir, How Are You?\n\nPlease Select Your Category\n\n1)Electronic Devices\n\n2)Home Appliances\n\n3)Fashion\n\n4)Health And Beauty\n\n5)Sports\n\n6)Watches\n\n7)-> LOGOUT\n\nType your Option: ";
	cin>>op;
	cout<<endl<<endl<<"************************************************************************************************************"<<endl<<endl;
	cout<<"Press any key to continue........................";
	getch();
	
	if(op==1)
	{
		system("cls");
		cout<<"1)Mobile\n2)Laptops\n3)Tv-Leds\nType: ";
		cin>>cat1;
		if(cat1==1)
		{
			system("cls");
			cout<<"Please Choose Company\n1)Samsung\n2)IPhone\nType: ";
			cin>>com;
			if(com==1)
			{
				BACK://user jab bhi back ana chahy to yaha askta hai goto ke zariyay
				system("cls");
				cout<<"Please Choose your Favourite One:\n1)Samsung Note 8\n2)Samsung Galaxy A40\n\n0-> For Go Back\nType: ";
				cin>>op2;
				if(op2==1)//jis ko select kia uski file open hogi
				{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Mobiles/Samsung/Galaxy Note8.txt");	
					while(i)//read data from file
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						cout<<"Quantity: ";
						cin>>quantity;
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						getch();
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Mobiles/Samsung/Galaxy Note8.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						system("cls");
						cout<<"Do You Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK;//go back by using goto
						}
						else if(op4==2)
						{
							goto MAIN;// go main by using goto
						}
					}
				}
				else if(op2==2)
				{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Mobiles/Samsung/Galaxy A40.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"\n\nDo you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						cout<<"Quantity: ";
						cin>>quantity;
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						getch();
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Mobiles/Samsung/Galaxy A40.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						system("cls");
						cout<<"Do You Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
				}
				else if(op2==0)
				{
					goto MAIN;
				}
			}
			else if(com==2)
			{
				BACK1:
				system("cls");	
				cout<<"Please Choose your Favourite One\n1)IPhone7\n2)IPhone8\n\n0->For Go Back\nType: ";
				cin>>op2;
				if(op2==1)
				{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Mobiles/IPhone/Iphone7.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Mobiles/IPhone/Iphone7.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do You Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK1;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
				}
				else if(op2==2)
				{
					system("cls");	
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Mobiles/IPhone/Iphone8.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Mobiles/IPhone/Iphone8.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do You Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK1;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
				}
				else if(op2==0)
				{
					goto MAIN;
				}
			}
		}
		else if(cat1==2)
		{
			system("cls");
			cout<<"Please Choose Company\n1)HP\n2)Apple\nType: ";
			cin>>com;
			if(com==1)
			{
				BACK2:
				system("cls");
				cout<<"Please Choose your Favourite One:\n1)HP EliteBook G4 Notebook PC\n2)HP Elitebook G5 Notebook PC - Customizable\n0-> For Go Back\nType: ";
				cin>>op2;
				if(op2==1)
				{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Laptops/HP/HP EliteBook G4 Notebook PC.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Laptops/HP/HP EliteBook G4 Notebook PC.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do You Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK2;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
				}
				else if(op2==2)
				{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Laptops/HP/HP EliteBook G5 Notebook PC - Customizable.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Laptops/HP/HP EliteBook G5 Notebook PC - Customizable.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do You Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK2;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
				}
				else if(op2==0)
				{
					goto MAIN;
				}
			}
			else if(com==2)
			{
				BACK3:
				system("cls");
				cout<<"Please Choose your Favourite One:\n1)13.3 MacBook Air (Mid 2017) - 128GB Storage MQD32\n2)13.3 MacBook Pro Retina - 256GB PCIe SSD - macOS Sierra - Space Grey\n0->For Go Back\nType: ";
				cin>>op2;
				if(op2==1)
				{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Laptops/Apple/13.3 MacBook Air (Mid 2017) - 128GB Storage MQD32.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					system("cls");
					if(op3==1)
					{
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Laptops/Apple/13.3 MacBook Air (Mid 2017) - 128GB Storage MQD32.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do You Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK3;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
				}
				else if(op2==2)
				{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Laptops/Apple/13.3 MacBook Pro Retina - 256GB PCIe SSD - macOS Sierra - Space Grey.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Laptops/Apple/13.3 MacBook Pro Retina - 256GB PCIe SSD - macOS Sierra - Space Grey.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK3;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
				}
				else if(op2==0)
				{
					goto MAIN;
				}
			}
		}
		else if(cat1==3)
		{
			system("cls");
			cout<<"Please Choose Company\n1)Samsung\n2)Sony\nType: ";
			cin>>com;
			if(com==1)
			{
				BACK4:
					system("cls");
				cout<<"Please Choose your Favourite One:\n1)Samsung NU7300 65 inch Curved Ultra HD 4K Smart TV (Series 7)\n2)Samsung NU8000 65 inch Ultra HD Flat 4K Smart TV (Series 8)\n\n\n0-> For Go Back\nType: ";
				cin>>op2;
				if(op2==1)
				{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Tv-Leds/Samsung/Samsung NU7300 65 inch Curved Ultra HD 4K Smart TV (Series 7).txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					system("cls");
					if(op3==1)
					{
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Tv-Leds/Samsung/Samsung NU7300 65 inch Curved Ultra HD 4K Smart TV (Series 7).txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK4;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
				}
				else if(op2==2)
				{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Tv-Leds/Samsung/Samsung NU8000 65 inch Ultra HD Flat 4K Smart TV (Series 8).txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Tv-Leds/Samsung/Samsung NU8000 65 inch Ultra HD Flat 4K Smart TV (Series 8).txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK4;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
				}
				else if(op2==0)
				{
					goto MAIN;
				}
			}
			else if(com==2)
			{
				BACK5:
				system("cls");
				cout<<"Please Choose your Favourite One:\n1)Sony Bravia 40 KLV-40W652D Full HD Smart LED\n2)Sony Bravia KDL-43W660F 43 inch Smart Full HD LED TV\n\n0->For Go Back\nType: ";
				cin>>op2;
				if(op2==1)
				{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Tv-Leds/Sony/Sony Bravia 40 KLV-40W652D Full HD Smart LED.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Tv-Leds/Sony/Sony Bravia 40 KLV-40W652D Full HD Smart LED.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK5;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
				}
				else if(op2==2)
				{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Tv-Leds/Sony/Sony Bravia KDL-43W660F 43 inch Smart Full HD LED TV.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Electronic_Devices/Tv-Leds/Sony/Sony Bravia KDL-43W660F 43 inch Smart Full HD LED TV.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK5;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
				}
				else if(op2==0)
				{
					goto MAIN;
				}
			}
		}
	}
	else if(op==2)
	{
		BACK6:
		system("cls");
		cout<<"1)Blender\n2)Pressur Cookers\n3)Sofa Set\nType: ";
		cin>>cat1;
		if(cat1==1)
		{
			system("cls");
			cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Home_Appliances/Blender.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Home_Appliances/Blender.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK6;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
		}
		else if(cat1==2)
		{
			system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Home_Appliances/Pressure Cooker.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Home_Appliances/Pressure Cooker.txt");						
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK6;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
			
		}
		else if(cat1==3)
		{
			system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Home_Appliances/Sofa Set.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Home_Appliances/Sofa Set.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK6;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
		}
	}
	else if(op==3)
	{
		system("cls");
		cout<<"1)Mens Wear\n2)Womens Wear\n3)Kids Wear\nType: ";
		cin>>cat1;
		if(cat1==1)
		{
			BACK7:
				system("cls");
			cout<<"Please Choose Product\n1)Hoodies\n2)Shirts\nType: ";
			cin>>com;
			if(com==1)
			{
				system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Fashion/Mens Fashion/Hoodie.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Fashion/Mens Fashion/Hoodie.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK7;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
			}
			else if(com==2)
			{
				system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Fashion/Mens Fashion/Shirts.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Fashion/Mens Fashion/Shirts.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK7;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
			}
		}
		else if(cat1==2)
		{
			BACK8:
				system("cls");
			cout<<"Please Choose Product\n1)Duppata\n2)Trousers\nType: ";
			cin>>com;
			if(com==1)
			{
				system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Fashion/Womens Fashion/Dupatta.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Fashion/Womens Fashion/Dupatta.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK8;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
			}
			else if(com==2)
			{
				system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Fashion/Womens Fashion/Trousers.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Fashion/Womens Fashion/Trousers.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK8;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
			}	
		}
		else if(cat1==3)
		{
			BACK9:
				system("cls");
			cout<<"Please Choose Product\n1)Hoodie\n2)Pents\nType: ";
			cin>>com;
			if(com==1)
			{
				system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Fashion/Kids Fashion/Hoodie.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Fashion/Kids Fashion/Hoodie.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 12);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK9;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
			}
			else if(com==2)
			{
				system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Fashion/Kids Fashion/Pents.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/User/naeem/OneDrive/Desktop/Buying/Fashion/Kids Fashion/Pents.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK9;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
			}
		}
	}
	else if(op==4)
	{
		BACK10:
			system("cls");
		cout<<"1)Blood Pressure Monitor\n2)Facial Cleanser For Men\n3)Facial Cleanser For Women\nType: ";
		cin>>cat1;
		if(cat1==1)
		{
					system("cls");
					cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Health And Beauty/Blood Pressure Monitor.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Health And Beauty/Blood Pressure Monitor.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK10;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
		}
		else if(cat1==2)
		{
			system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Health And Beauty/Facial Cleanser For Men.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Health And Beauty/Facial Cleanser For Men.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK10;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
			
		}
		else if(cat1==3)
		{
			system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Health And Beauty/Facial Cleanser For Women.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Health And Beauty/Facial Cleanser For Women.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK10;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
		}
	}
	else if(op==5)
	{
		BACK11:
			system("cls");
		cout<<"1)Cricket\n2)FootBall\n3)BasketBall\nType: ";
		cin>>cat1;
		if(cat1==1)
		{
			system("cls");
			cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Sports/Cricket.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Sports/Cricket.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK11;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
		}
		else if(cat1==2)
		{
			system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Sports/Football.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Sports/Football.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK11;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
			
		}
		else if(cat1==3)
		{
			system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Sports/BasketBall.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Sports/BasketBall.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK11;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
		}
	}
	else if(op==6)
	{
		BACK12:
			system("cls");
		cout<<"1)Hublot Men Watch\n2)Men's Fashion Luxury Watch\n3)Women's' Fashion Luxury Watch\nType: ";
		cin>>cat1;
		if(cat1==1)
		{
			system("cls");
			cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Watches/Hublot Men Watch.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Watches/Hublot Men Watch.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 10);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK12;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
		}
		else if(cat1==2)
		{
			system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Watches/Men's Fashion Luxury Watch.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Watches/Men's Fashion Luxury Watch.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK12;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
			
		}
		else if(cat1==3)
		{
			system("cls");
				cout<<"Features: \n\n";
					ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Watches/Womens's Fashion Luxury Watch.txt");	
					while(i)
					{
						i.get(chr);
						cout<<chr;
					}
					i.close();
					getch();
					system("cls");
					cout<<"Do you Want to Buy this Product?\n1)Yes\n2)No\nType: ";
					cin>>op3;
					if(op3==1)
					{
						system("cls");
						cout<<"Quantity: ";
						cin>>quantity;
						system("cls");
						cout<<"Thankyou! Sir you are product will be delieverd on your Address!";
						ifstream i("C:/Users/naeem/OneDrive/Desktop/Buying/Watches/Womens's Fashion Luxury Watch.txt");	
						for (int j = 1; j < 4; j++)
					    {
					    	i.ignore(7);//file me naam, id, aur price se pehlay 7 characters(include spaces) ignoure kiay takay sirf naam hi uthay file se
					    	if (j == 3)//j==3 means 3rd line jis may product ka naam hai wo uthaega
						    {
								i.read(line, 15);//product ka naam file me agya	
							}
							else
							{
						    	i>>data[j];//baqi dono lines means j=1, j=2 pe id aur price hai wo uthalay:
							}
						}
						i.close();
						price=data[1];//line 1 jokay data[1] me ayi, wo price hai;
						id=data[2];//line 2 jokay data[2] me ayi, wo id hai;
						string name(line);//naam ko char[] se string me convert krdia;
						AddToCart(name, price, id, quantity);//function calling;
						getch();
						system("cls");
						cout<<"Do you Want to Continue Shopping?\n1) Yes\n2) No\nType: ";
						cin>>op6;
						if(op6==1)
						{
							goto MAIN;
						}
						else if(op6==2)
						{
							system("cls");
							cout<<"Thankyou Sir!, You Are Successfully LogOut";
						}
					}
					else if(op3==2)
					{
						system("cls");
						cout<<"1)Go back\n2)Go MainPage\nType: ";
						cin>>op4;
						if(op4==1)
						{
							goto BACK12;
						}
						else if(op4==2)
						{
							goto MAIN;
						}
					}
		}
	}
	else if(op==7)
	{
		system("cls");
		cout<<"You Are Successfully LogOut\nThankYou Sir For Visiting!";
	}
}
};
class normal:public customer
{
	public:
		 bool login(string user,string pass)//login function for customer to gain access to market
    {
        int count;
        string n,u,e,p;
        system("cls");

ifstream input("normal.txt");
while(input>>n>>u>>e>>p)
{
	if(u == user && p == pass || e==user && p==pass)//check if usenamer or email and password match from file
	{
		count=1;
		if(count==1)	
		break;
		system("cls");
		return true;
	}
}
	input.close();
	if(count==1)
		{
			cout<<"\t\t*****************************************************************************************\n";
			cout<<"\n\t\t\t\t\t\tHello "<<n<<"\n\t\t\t\t\t\tLOGIN SUCESS\n\t\t\t\t\t\tWe're glad that you're here.\n\n";
			cout<<"\t\t*****************************************************************************************\n";
		}
	else
		{
			count1++;
			if(count1==5)//check if five wrong login credentials are given
				{
					cout<<"Too many times wrong credentials program will now close!!!!!!!!!!!!!!!!!!!!";
					exit(0);
					input.close();
				}
			char choice2;//for asking choice of entering credentials again
			cout<<endl<<endl<<"**************************************************************************************"<<endl<<endl;
			cout<<"\nLOGIN ERROR\nPlease check your username and password\n\n\n";
			loop2:
			cout<<"Do you want to enter again!!!!!!!"<<endl<<"(Y for Yes,N for no): ";
			cin>>choice2;
			system("cls");
			if(choice2=='Y'||choice2=='y')
			{
				cout<<endl<<endl<<"***********************************************************************************"<<endl<<endl;
				cout<<"Enter USERNAME OR Email (xyz123@abc.com): ";
				cin>>user;
				cout<<endl<<endl;
				cout<<"Enter password: ";
				pass=passwordinput();
				cout<<endl<<endl<<"***********************************************************************************";
				cout<<endl<<endl<<"Press any key to continue ..................................";
				getch();
				normal n1;
				n1.login(user,pass);//call agian login if username or email or password is wrong 
			}
			else if(choice2=='N'||choice2=='n')
			{
				return false;
			}
			else
			{
				cout<<"Wrong input detected!!!!!!"<<endl;
				cout<<"Please Enter carefully!!!!!!!!!!!"<<endl;
				goto loop2;
			}
		}
	}
		
	signup()
		{
			ifstream file("normal.txt");
				string n,u,e;
				string p;
				cout<<endl<<endl<<"****************************************************************************************************"<<endl<<endl;
				cout<<"\t\t\tfield marked (*) with this are required!!!!!!!!!!"<<endl<<endl;
				cout<<"Enter e-mail*(xyz123@abc.com): ";
				cin>>email;
				cout<<endl<<endl;
				cout<<"Enter name*: ";
				cin>>name;
				cout<<endl<<endl;
				cout<<"Enter username *: ";
				cin>>username;
				cout<<endl<<endl;
				cout<<"Enter password*: ";
				password=passwordinput();
				cout<<endl<<endl;
				cout<<"**************************************************************************************************"<<endl<<endl;
				cout<<"Press any key to continue...................................";
				getch();
				system("cls");
				file.clear();
				file.seekg(0, ios::beg);
				while(file>>n>>u>>e>>p)
				{
					if(email==e)
					{
						cout<<"Enter new email!!!"<<endl;
						cin>>email;
						int c=0;
						c=1;
						if(c=1)
						{
							file.clear();
							file.seekg(0, ios::beg);
						}
						
					}
					if(username==u)
					{
						cout<<"Enter new username: ";
						cin>>username;
						int c =0;
						c=1;
						if(c=1)
						{
							file.clear();
							file.seekg(0, ios::beg);
						}
					}
				}
				file.close();
				ofstream file1("normal.txt",ios::app);
				file1<<name<<endl;
				file1<<username<<endl;
				file1<<email<<endl;
				file1<<password<<endl;
				cout<<endl<<endl<<"*********************************************************************************************************";
				cout<<endl<<endl<<"\t\t\t\t\tSIGNUP IS SUCCESSFUL!!!!!!!!!!!!!!!";
				cout<<endl<<endl<<"\t\t\t\t\tYOUR CODE IS 7700";
				cout<<endl<<endl<<"*********************************************************************************************************";
				cout<<endl<<"Press any key to continue........................................";
				file1.close();
				
		}
};
class valued:public customer
{
public:
	 bool login(string user,string pass)//login function for customer to gain access to market
    {
        int count;
        string n,u,e,p;
        system("cls");

ifstream input("valued.txt");
while(input>>n>>u>>e>>p)
{
	if(u == user && p == pass || e==user && p==pass)//check if usenamer or email and password match from file
	{
		count=1;
		if(count==1)	
		break;
		system("cls");
		return true;
	}
}
	input.close();
	if(count==1)
		{
			cout<<"\t\t*****************************************************************************************\n";
			cout<<"\n\t\t\t\t\t\tHello "<<n<<"\n\t\t\t\t\t\tLOGIN SUCESS\n\t\t\t\t\t\tWe're glad that you're here.\n\n";
			cout<<"\t\t*****************************************************************************************\n";
		}
	else
		{
			count1++;
			if(count1==5)//check if five wrong login credentials are given
				{
					cout<<"Too many times wrong credentials program will now close!!!!!!!!!!!!!!!!!!!!";
					exit(0);
					input.close();
				}
			char choice2;//for asking choice of entering credentials again
			cout<<endl<<endl<<"**************************************************************************************"<<endl<<endl;
			cout<<"\nLOGIN ERROR\nPlease check your username and password\n\n\n";
			loop2:
			cout<<"Do you want to enter again!!!!!!!"<<endl<<"(Y for Yes,N for no): ";
			cin>>choice2;
			system("cls");
			if(choice2=='Y'||choice2=='y')
			{
				cout<<endl<<endl<<"***********************************************************************************"<<endl<<endl;
				cout<<"Enter USERNAME OR Email (xyz123@abc.com): ";
				cin>>user;
				cout<<endl<<endl;
				cout<<"Enter password: ";
				pass=passwordinput();
				cout<<endl<<endl<<"***********************************************************************************";
				cout<<endl<<endl<<"Press any key to continue ..................................";
				getch();
				valued v1;
				v1.login(user,pass);//call agian login if username or email or password is wrong 
			}
			else if(choice2=='N'||choice2=='n')
			{
				return false;
			}
			else
			{
				cout<<"Wrong input detected!!!!!!"<<endl;
				cout<<"Please Enter carefully!!!!!!!!!!!"<<endl;
				goto loop2;
			}
		}
	}
	signup()
		{
			ifstream file("valued.txt");
				string n,u,e;
				string p;
				cout<<endl<<endl<<"****************************************************************************************************"<<endl<<endl;
				cout<<"\t\t\tfield marked (*) with this are required!!!!!!!!!!"<<endl<<endl;
				cout<<"Enter e-mail*(xyz123@abc.com): ";
				cin>>email;
				cout<<endl<<endl;
				cout<<"Enter name*: ";
				cin>>name;
				cout<<endl<<endl;
				cout<<"Enter username *: ";
				cin>>username;
				cout<<endl<<endl;
				cout<<"Enter password*: ";
				password=passwordinput();
				cout<<endl<<endl;
				cout<<"**************************************************************************************************"<<endl<<endl;
				cout<<"Press any key to continue...................................";
				getch();
				system("cls");
				file.clear();
				file.seekg(0, ios::beg);
				while(file>>n>>u>>e>>p)
				{
					if(email==e)
					{
						cout<<"Enter new email!!!"<<endl;
						cin>>email;
						int c=0;
						c=1;
						if(c=1)
						{
							file.clear();
							file.seekg(0, ios::beg);
						}
						
					}
					if(username==u)
					{
						cout<<"Enter new username: ";
						cin>>username;
						int c =0;
						c=1;
						if(c=1)
						{
							file.clear();
							file.seekg(0, ios::beg);
						}
					}
				}
				file.close();
				ofstream file1("valued.txt",ios::app);
				file1<<name<<endl;
				file1<<username<<endl;
				file1<<email<<endl;
				file1<<password<<endl;
				cout<<endl<<endl<<"*********************************************************************************************************";
				cout<<endl<<endl<<"\t\t\t\t\tSIGNUP IS SUCCESSFUL!!!!!!!!!!!!!!!";
				cout<<endl<<endl<<"\t\t\t\t\tYOUR CODE IS 8800";
				cout<<endl<<endl<<"*********************************************************************************************************";
				cout<<endl<<"Press any key to continue........................................";
				file1.close();
				
		}
};
class vip:public customer
{
	public:
	 bool login(string user,string pass)//login function for customer to gain access to market
    {
        int count;
        string n,u,e,p;
        system("cls");

ifstream input("vip.txt");
while(input>>n>>u>>e>>p)
{
	if(u == user && p == pass || e==user && p==pass)//check if usenamer or email and password match from file
	{
		count=1;
		if(count==1)	
		break;
		system("cls");
		return true;
	}
}
	input.close();
	if(count==1)
		{
			cout<<"\t\t*****************************************************************************************\n";
			cout<<"\n\t\t\t\t\t\tHello "<<n<<"\n\t\t\t\t\t\tLOGIN SUCESS\n\t\t\t\t\t\tWe're glad that you're here.\n\n";
			cout<<"\t\t*****************************************************************************************\n";
		}
	else
		{
			count1++;
			if(count1==5)//check if five wrong login credentials are given
				{
					cout<<"Too many times wrong credentials program will now close!!!!!!!!!!!!!!!!!!!!";
					exit(0);
					input.close();
				}
			char choice2;//for asking choice of entering credentials again
			cout<<endl<<endl<<"**************************************************************************************"<<endl<<endl;
			cout<<"\nLOGIN ERROR\nPlease check your username and password\n\n\n";
			loop2:
			cout<<"Do you want to enter again!!!!!!!"<<endl<<"(Y for Yes,N for no): ";
			cin>>choice2;
			system("cls");
			if(choice2=='Y'||choice2=='y')
			{
				cout<<endl<<endl<<"***********************************************************************************"<<endl<<endl;
				cout<<"Enter USERNAME OR Email (xyz123@abc.com): ";
				cin>>user;
				cout<<endl<<endl;
				cout<<"Enter password: ";
				pass=passwordinput();
				cout<<endl<<endl<<"***********************************************************************************";
				cout<<endl<<endl<<"Press any key to continue ..................................";
				getch();
				vip i1;
				i1.login(user,pass);//call agian login if username or email or password is wrong 
			}
			else if(choice2=='N'||choice2=='n')
			{
				return false;
			}
			else
			{
				cout<<"Wrong input detected!!!!!!"<<endl;
				cout<<"Please Enter carefully!!!!!!!!!!!"<<endl;
				goto loop2;
			}
		}
	}
	public:
		signup()
		{
			ifstream file("vip.txt");
				string n,u,e;
				string p;
				cout<<endl<<endl<<"****************************************************************************************************"<<endl<<endl;
				cout<<"\t\t\tfield marked (*) with this are required!!!!!!!!!!"<<endl<<endl;
				cout<<"Enter e-mail*(xyz123@abc.com): ";
				cin>>email;
				cout<<endl<<endl;
				cout<<"Enter name*: ";
				cin>>name;
				cout<<endl<<endl;
				cout<<"Enter username *: ";
				cin>>username;
				cout<<endl<<endl;
				cout<<"Enter password*: ";
				password=passwordinput();
				cout<<endl<<endl;
				cout<<"**************************************************************************************************"<<endl<<endl;
				cout<<"Press any key to continue...................................";
				getch();
				system("cls");
				file.clear();
				file.seekg(0, ios::beg);
				while(file>>n>>u>>e>>p)
				{
					if(email==e)
					{
						cout<<"Enter new email!!!"<<endl;
						cin>>email;
						int c=0;
						c=1;
						if(c=1)
						{
							file.clear();
							file.seekg(0, ios::beg);
						}
						
					}
					if(username==u)
					{
						cout<<"Enter new username: ";
						cin>>username;
						int c =0;
						c=1;
						if(c=1)
						{
							file.clear();
							file.seekg(0, ios::beg);
						}
					}
				}
				file.close();
				ofstream file1("vip.txt",ios::app);
				file1<<name<<endl;
				file1<<username<<endl;
				file1<<email<<endl;
				file1<<password<<endl;
				cout<<endl<<endl<<"*********************************************************************************************************";
				cout<<endl<<endl<<"\t\t\t\t\tSIGNUP IS SUCCESSFUL!!!!!!!!!!!!!!!";
				cout<<endl<<endl<<"\t\t\t\t\tYOUR CODE IS 9900";
				cout<<endl<<endl<<"*********************************************************************************************************";
				cout<<endl<<"Press any key to continue........................................";
				file1.close();
				
		}
};
class employee:public person
{
	public:
	int count1;//for checking wrong login credentiails
    bool login(string user,string pass)//login function for customer to gain access to market
    {
        int count;
        string n,u,e,p;
        system("cls");

ifstream input("database.txt");
while(input>>n>>u>>e>>p)
{
	if(u == user && p == pass || e==user && p==pass)//check if usenamer or email and password match from file
	{
		count=1;
		name=n;

		if(count==1)	
		break;
		system("cls");
	}
}
	input.close();
	if(count==1)
		{
			cout<<"\t\t\t\t*****************************************************************************************\n";
						cout<<"\n\t\t\t\t\t\t\t\tHello "<<n<<"\n\t\t\t\t\t\t\t\tLOGIN SUCESS\n\t\t\t\t\t\t\t\tWe're glad that you're here.\n\n";
						cout<<"\t\t\t\t*****************************************************************************************\n";
		}
	else
		{
			cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
			cout<<"Enter USERNAME OR Email: ";
			cin>>user;
			cout<<"Enter password: ";
			cin>>pass;
			count1++;
			if(count1==5)//check if five wrong login credentials are given
				{
					cout<<"Too many times wrong credentials program will now close!!!!!!!!!!!!!!!!!!!!";
					exit(0);
					input.close();
				}
	login(user,pass);//call agian login if username or email or password is wrong 
		}
	}	
};
class manager:public employee
{
	public:
	int count1;//for checking wrong login credentiails
    bool login(string user,string pass)//login function for customer to gain access to market
    {
    	string scode;
    	char choice;
    	loop:
    	cout<<"Enter manager special code: ";
    	cin>>scode;
    	if(scode!="Man123")
    	{
    		cout<<"Not  right code!!!!!!!!!!!!!!!!!!!"<<endl;
    		loop2:
    		cout<<"Do you want to enter again(y for yes,N for no): ";
    		cin>>choice;
    		if(choice=='Y'||choice=='y')
    		{
    			goto loop;
			}
			else if(choice=='n'||choice=='N')
			{
				return 0;				
			}
			else
			{
				cout<<"Wrong input detected!!!!!!!"<<endl<<"Please Enter correctly!!!!!!!!!! "<<endl;
				goto loop2;
			}
		}
        int count;
        string n,u,e,p;
        system("cls");

	ifstream input1("manager.txt");
	while(input1>>n>>u>>e>>p)
	{
		if(u == user && p == pass || e==user && p==pass)//check if usenamer or email and password match from file
			{
				count=1;
				if(count==1)
				break;
				system("cls");
			}
	}	
	input1.close();
	if(count==1)
		{	cout<<"\t\t\t\t*****************************************************************************************\n";
			cout<<"\n\t\t\t\t\t\t\t\tHello "<<"\n\t\t\t\t\t\t\t\tManager: "<<n<<endl<<endl;
			cout<<"\t\t\t\t*****************************************************************************************\n";
			return true;
		}
	else
		{
			count1++;
			if(count1==5)//check if five wrong login credentials are given
				{
					cout<<"Too many times wrong credentials program will now close!!!!!!!!!!!!!!!!!!!!";
					input1.close();
					exit(0);
					
				}
			char choice2;//for asking choice of entering credentials again
			cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
			cout<<"Do you want to enter again!!!!!!!"<<endl<<"(Y for Yes,N for no)";
			cin>>choice2;
			if(choice2=='Y'||choice2=='y')
			{
				cout<<"Enter USERNAME OR Email: ";
				cin>>user;
				cout<<"Enter password: ";
				cin>>pass;
				login(user,pass);//call agian login if username or email or password is wrong 
			}
			else if(choice2=='N'||choice2=='n')
			{
				return 0;
			}
			else
			{
				cout<<"Wrong input detected!!!!!!"<<endl;
				cout<<"Please Enter carefully!!!!!!!!!!!"<<endl;
			}
	}
	}
};
bool maindisplay()
{
	cout<<"**********************************************************************************************************************"<<endl<<endl<<endl;
    cout<<"\t\t******      *         *****   *******    *       *       *       *******  *   *  ******  *******"<<endl;
	cout<<"\t\t*          * *        *          *       * *   * *      * *      *     *  *  *   *          *"<<endl;
	cout<<"\t\t*         *   *       *          *       *  * *  *     *   *     *     *  * *    *          *"<<endl;
	cout<<"\t\t******   *******      *****      *       *   *   *    *******    *******  **     ******     *"<<endl;
	cout<<"\t\t*       *       *         *      *       *       *   *       *   *   *    * *    *          *"<<endl;
	cout<<"\t\t*      *         *        *      *       *       *  *         *  *    *   *  *   *          *"<<endl;
	cout<<"\t\t*     *           *   *****      *       *       * *           * *     *  *   *  ******     *"<<endl<<endl<<endl;
	cout<<"***********************************************************************************************************************"<<endl<<endl;
	cout<<"MAKE YOUR LIFE EASIER !!!!!!!!!!!!!!!!!!!"<<endl;
	cout<<"ANYTHING YOU NEED WE ARE HERE TO FULLFILL IT.............."<<endl;
	cout<<"GOT ANY COMPLAINTS ......."<<endl;
	cout<<"Contact us at (+92)3110237524"<<endl;
	cout<<endl<<endl<<"Press any key to continue.............................";
	getch();
	return true;
}
main()
{
	
    int code,code1,count,count1;
    bool a,b;//for checking the person has logged in or not
    string user,pass;
    char choice,choice1,choice2;
    maindisplay();
    system("cls");
    do
    {
		loop1:	//for getting back to main choices
		cout<<endl<<endl<<"*********************************************************************************************************"<<endl<<endl;
    	cout<<endl<<"1) For Customer"<<endl<<endl<<endl<<"2) For Manager"<<endl<<endl<<endl<<"3) For Exit"<<endl<<endl;
    	cout<<endl<<endl<<"*********************************************************************************************************"<<endl<<endl;
    	cout<<endl<<"ENTER YOUR CHOICE: ";
		cin>>choice;    
    system("cls");
    switch(choice)
    {
    	
    case '1':
        {
        	
        	do
        	{
           		loop:
           			cout<<endl<<endl<<"*********************************************************************************************************"<<endl<<endl;
           			cout<<"\nDo You Want To Login OR Sign up\n\n\n1) For Login\n\n\n2) For Signup\n\n\n3) For Back To Selection\n\n\n ";
           			cout<<endl<<endl<<"*********************************************************************************************************"<<endl<<endl;
           			cout<<"\nENTER YOUR CHOICE: ";
        	cin>>choice2;
        	system("cls");
        	switch(choice2)
        	{
        	case '1':
        			{
        	char cho;
        	cout<<"Are you a Normal or VIP or Valued Customer.......(N for normal,I for VIP,V for Valued): ";
        	cin>>cho;
			if(cho!='v'&&cho!='V'&&cho!='n'&&cho!='N'&&cho!='i'&&cho!='I')
			{
				cout<<"Wrong choice !!!!!!!!!!!!!!!!!!!!!!!\n Back to main menu......"<<endl;
				cout<<"Press any key to continue!!!!";
				getch();
				system("cls");
			}
        	if(cho=='V'||cho=='v')
        	{
        		cout<<"Enter your valued customer code: ";
        		cin>>code;
        		if(code==8800)
        		{
        			valued v1;
        		cout<<endl<<endl<<"***********************************************************************************"<<endl<<endl;
				cout<<"Enter USERNAME OR Email (xyz123@abc.com): ";
				cin>>user;
				cout<<endl<<endl;
				cout<<"Enter password: ";
				cin>>pass;
				cout<<endl<<endl<<"***********************************************************************************";
				cout<<endl<<endl<<"Press any key to continue ..................................";
				getch();
				a=v1.login(user,pass);
				if(a==1)
				{
					cout<<endl<<"Valued customer!!!!!!"<<endl;
                	getch();
                	cout<<endl<<endl;
                	v1.buying();
				}
				else{
					cout<<"Login Error!!!!!!!!!!!!"<<endl<<endl;
					cout<<"Press Any key to continue.....................";
					getch();
					system("cls");
				}
				}
				else
				{
					cout<<"Wrong code!!!!!!!!!!!!"<<endl;
					cout<<"Press Any key to continue.....................";
					getch();
					system("cls");
				}
			}
			if(cho=='N'||cho=='n')
        	{
        		cout<<"Enter your Normal customer code: ";
        		cin>>code;
        		if(code==7700)
        		{
        			normal n1;
        		cout<<endl<<endl<<"***********************************************************************************"<<endl<<endl;
				cout<<"Enter USERNAME OR Email (xyz123@abc.com): ";
				cin>>user;
				cout<<endl<<endl;
				cout<<"Enter password: ";
				pass=passwordinput();
				cout<<endl<<endl<<"***********************************************************************************";
				cout<<endl<<endl<<"Press any key to continue ..................................";
				getch();
				a=n1.login(user,pass);
				if(a==1)
				{
					cout<<endl<<"Normal customer!!!!!!"<<endl;
                	getch();
                	cout<<endl<<endl;
                	n1.buying();
				}
				else{
					cout<<"Login Error!!!!!!!!!!!!"<<endl<<endl;
					cout<<"Press Any key to continue.....................";
					getch();
					system("cls");
				}
				}
				else
				{
					cout<<"Wrong code!!!!!!!!!!!!"<<endl;
					cout<<"Press Any key to continue.....................";
					getch();
					system("cls");
				}
			}
			if(cho=='I'||cho=='i')
        	{
        		cout<<"Enter your VIP customer code: ";
        		cin>>code;
        		if(code==9900)
        		{
        			vip i1;
        		cout<<endl<<endl<<"***********************************************************************************"<<endl<<endl;
				cout<<"Enter USERNAME OR Email (xyz123@abc.com): ";
				cin>>user;
				cout<<endl<<endl;
				cout<<"Enter password: ";
				pass=passwordinput();
				cout<<endl<<endl<<"***********************************************************************************";
				cout<<endl<<endl<<"Press any key to continue ..................................";
				getch();
				a=i1.login(user,pass);
				if(a==1)
				{
					cout<<endl<<"VIP customer!!!!!!"<<endl;
                	getch();
                	cout<<endl<<endl;
                	i1.buying();
				}
				else{
					cout<<"Login Error!!!!!!!!!!!!"<<endl<<endl;
					cout<<"Press Any key to continue.....................";
					getch();
					system("cls");
				}
				}
				else
				{
					cout<<"Wrong code!!!!!!!!!!!!"<<endl;
					cout<<"Press Any key to continue.....................";
					getch();
					system("cls");
				}
			}	
			break;
		}
        case '2':
        	{
        		char choi;
        		customer m1;
        		cout<<endl<<endl<<"******************************************************************************************************"<<endl<<endl;
        		cout<<"Sign up Categories!!!!!!!!!!!!!"<<endl<<endl;
        		cout<<"1) Normal Customer: The most basic type of customer having 24/7 market support usually having no discounts on purchases!!!!!!"<<endl<<endl;
        		cout<<"2) Valued Customer: A More prestige type of customer having 24/7 support market mostly getting benefits of new discounted rates!!!!"<<endl<<endl;
				cout<<"3) Vip Customer: Our most loyal customer type having 24/7 market support getting the new and updated things before anyone else\nand getting most discounted offers"<<endl<<endl;
				cout<<"Enter the customer type you want to signup in\n\nN for Normal customer\n\nV for Valued Customer\n\nI for VIP customer\n\nChoice: ";
				cin>>choi;
				if(choi=='n'||choi=='N')
				{
					normal n1;
					n1.signup();
				}
				if(choi=='v'||choi=='V')
				{
					valued v1;
					v1.signup();
				}
				if(choi=='i'||choi=='I')
				{
					vip i1;
					i1.signup();
				}
				else
				{
					cout<<endl<<"Back to menu!!!!!!!!!!!!! ";
				}
        		getch();
        		system("cls");
        		break;
			}
		case '3':
			{
				system("cls");
				break;
			}
			default:
			{
				cout<<"You have inputted wrong please renter your choice again!!!!!!"<<endl;
        		goto loop;
				break;
			}
        }
    	}
    	while(choice2<=2);
    	break;
    }
    case '2':
    	{
    				cout<<endl<<endl<<"************************************************************************************"<<endl<<endl;
    				cout<<"Please enter the following details"<<endl<<endl;
            		cout<<"USERNAME or Email (abc123@xyz.com): ";
            		cin>>user;
            		cout<<endl<<endl;
            		cout<<"PASSWORD :";
            		pass=passwordinput();
            		cout<<endl<<endl;
            		cout<<"**************************************************************************************";
            		cout<<endl<<endl<<"Press any key to continue...........................";
            		getch();
            		cout<<endl<<endl;
    				manager m1;
					b=m1.login(user,pass);
					if(b==1)
					{
						char choice3;
						system("cls");
						cout<<endl<<endl<<"*****************************************************************************************"<<endl<<endl;
						cout<<endl<<endl<<"What operations you want to perform\n\n1 For Getting all item detail\n\n2 For adding stock of a item\n\n3 for Deleting an item\n\n4 for getting weekly report\n\nEnter Choice: ";
						cin>>choice3;
						cout<<endl<<endl<<"*******************************************************************************************"<<endl<<endl;
						cout<<"Press any key to continue.....................";
						getch();
					}
					system("cls");
					break;
		}
		case '3':
			{
				exit(0);
				break;
			}
		default:
			{
				cout<<"Please reneter your choice: "<<endl;
				goto loop1;
				
			}
        	
    }
    
	}
	while(choice);
}

