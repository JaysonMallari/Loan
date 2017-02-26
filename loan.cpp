/*loan.cpp
Feb 26, 2017
Jayson Mallari
*/
#include<iostream>
using namespace std;
int main(){
	int month = 0, year = 0;
	double loan, payment;

	//Loan input value
	cout<<"Please Enter how much do you want to barrow: "<<endl;
	cin>>loan;
	//Payment input value
	cout<<"How much can you pay by month: "<<endl;
	cin>>payment;

	//month will be adding up each iteration until the statement is satisfied .
	while(loan > 0){
		month+=1;
		loan-=payment;
	}

	while(month >= 12){
		year+=1;
		month-=12;
	}

	//output the total month needed to pay off .
	cout<<"The total month you needed to payoff your loan is: "<<endl;


	if(year == 0 && month == 1){
			cout<<month<<" month"<<endl;
	}else if(year == 0 && month > 1 && month < 11){
			cout<<month<<" months"<<endl;
	}else if(month == 0 && year == 1){
			cout<<year<<" year"<<endl;
	}else if(month == 0 && year > 1){
			cout<<year<<" years"<<endl;
	}else if(year <= 1 && month <= 1){
		cout<<year<<" year and "<<month<<" month"<<endl;
	}else if(year > 1 && month <= 1){
		cout<<year<<" years and "<<month<<" month"<<endl;
	}else if(year <= 1 && month > 1){
		cout<<year<<" year and "<<month<<" months"<<endl;
	}else if(year > 1 && month > 1){
		cout<<year<<" years and "<<month<<" months"<<endl;
	}

	return 0;
}
