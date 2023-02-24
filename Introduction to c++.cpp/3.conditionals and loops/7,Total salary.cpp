#include<iostream>
using namespace std;

int main() {
	int basic;
    cin>>basic;
    float hra = (20.0/100)*basic;
    float da = (50.0/100)*basic;
    float pf = (11.0/100)*basic;
    int allow;
    char grade;
    cin>>grade;
	if(grade=='A'){
        allow = 1700;
    }	else if(grade == 'B'){
        allow = 1500;
    }else{
        allow = 1300;
    }
    double totalSalary = (basic + hra + da + allow) - pf;
    int x= totalSalary;
    if(x+0.5 < totalSalary){
        x=x+1;
    }
        cout<<x;
    return 0;
}
