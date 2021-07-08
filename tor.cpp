#include <bits/stdc++.h>

using namespace std;

class shell {
	string name,code;
	int age;
	public: void login() {
		cout<<"Enter your name --< ";
		cin>>name;
		cout<<"Enter your age --< ";
		cin>>age;
	}
	public: void in() {
		system("sudo apt-get install figlet -y && sudo apt-get install lolcat -y");
		system("clear");
		system("figlet -f mono9 maikal | lolcat");
		for(int i=1; i<=i; i++) {
			cout<<"|--(zsh☣"<<name<<")----"<<"["<<i<<"]"<<endl;
			cout<<"--λ ";
			cin>>code;
	        if(code=="uname") {
           		cout<<"name is --< "<<name<<endl;
       		}else if(code=="monthPay") {
	    	    int nom;
		   		cout<<"Enter a value --< ";
		   		cin>>nom;
		   		cout<<"month payment --< "<<nom*30<<endl;
			}else if(code=="add") {
				int nom1,nom2;
				cout<<"Enter a value --< ";
				cin>>nom1>>nom2;
				cout<<"som is --< "<<nom1+nom2<<endl;
			}else if(code=="table") {
				int nom;
				cout<<"Enter a vlaue --< ";
				cin>>nom;
				for(int j=1; i<=10; i++) {
					cout<<nom<<" x "<<i<<" = "<<nom*i<<endl;
				}
			}else if(code=="doller") {
				int nom;
				cout<<"Enter a Doller value --< ";
				cin>>nom;
				cout<<"Indian rupeis --< "<<nom*75<<endl;
			}else if(code=="uage") {
				cout<<"your age --< "<<age;
			}else if(code=="monthS") {
				int nom;
				cout<<"Enter a value --< ";
				cin>>nom;
				cout<<"month pay --< "<<nom*30<<endl;
			}else if (code=="yearS") {
				int num;
				cout<<"Enter a value --< ";
				cin>>num;
				cout<<"year pay --< "<<num*12<<endl;
			}else if(code=="sup") {
				int num1,num2;
				cout<<"Enter a value --< ";
				cin>>num1>>num2;
				cout<<"som is --< "<<num1-num2<<endl;
			}else if(code=="div") {
				int num,num2;
				cout<<"Enter a vlaue --< ";
				cin>>num>>num2;
				cout<<"som is --< "<<num%num2<<endl;
			}else if(code=="multi") {
				int num1,num2;
				cout<<"Enter a value --< ";
				cin>>num1>>num2;
				cout<<"som is --< "<<num1*num2<<endl;
			}else if(code=="odd") {
				int num;
				cout<<"Enter a value --< ";
				cin>>num;
				if(num % 2 == 0) {
					cout<<"value is odd"<<endl;
				}
				else {
					cout<<"value is even"<<endl;
				}
			}else if (code=="clear") {
				system("clear");
				system("figlet -f mono9 maikal | lolcat");
			}else if(code=="sqrt") {
				int num;
				cout<<"Enter a value --< ";
				cin>>num;
				cout<<sqrt(num)<<endl;
			}else if(code=="strsize") {
				string str;
				cout<<"Enter a string --< ";
				cin>>str;
				str[0];
				cout<<str.size()<<endl;
			}else {
				cout<<"Command Not Found !!!"<<endl;
			}
		}
	}
};

int main() {
	shell t;
	t.login();
	t.in();
	return 0;
}
