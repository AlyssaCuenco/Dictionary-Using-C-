#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    
    cout<<"Please Enter Your Word: ";
    cin>>a;
    
    if (a== "Abacus"){
        cout<<"Believed to be the first computer.";
        
	}else if (a== "Napier's_Bones"){
		cout<<"Invented by John Napier. Used to multiply and divide for calculation.";
	}else if (a== "Pascaline"){
		cout<<"The first mechanical and automatic calculator.";
	}else if(a== "Leibniz_Wheel"){
		cout<<"A digital mechanical calculator.";	
    	}else if (a== "Analytical_Engine"){
		cout<<"Mechanical computer that used punch cards as input.";
	}else if (a== "Tabulating_Machine"){
		cout<<"Capable of tabulating statistics and record or sort data or information.";
	}else if (a== "Mark_1"){
		cout<<"The first programmable digital computer.";
	}else if (a== "First_Generation_Computers"){
		cout<<"1940-1956, these machines are slow, huge, and expensive.";
	}else if (a== "Second_Generation_Computers"){
		cout<<"1957-1963, the time of transistor computers.";
	}else if (a== "Third_Generation_Computers"){
		cout<<"Used integrated circuits.";
	}else if (a== "Fourth_Generation_Computers"){
		cout<<"1971-1980, used Very Large Scale Integrated Circuits.";
	}else{
		cout<<"No word is found";
	}
    
	return 0;
}
