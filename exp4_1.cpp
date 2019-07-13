#include<iostream>
#include<conio.h>

using namespace std;

int addition (int num1, int num2) //header 
{
int r;
r=num1+num2;
return r;
}

int subtraction (int num1, int num2) //header
{
int r;
r=num1-num2;
return r;	
}

int multiplication (int num1, int num2) //header
{
int r;
r=num1*num2;
return r;	
}

int division (int num1, int num2) //header
{
int r;
r=num1/num2;
return r;	
}

int mod (int num1, int num2) //header
{
int r;
r=num1%num2;
return r;	
}

//function call
int main ()
{
cout<<"MENU:\n"<<"\t1. Addition\n"<<"\t2. Subtraction\n"<<"\t3. Multiplication\n"<<"\t4. Division\n"<<"\t5. Modulus\n\n";
//declaration of variables
int num1, num2;
double add, sub, mul, div, mo;
char choice, choice2;
//using the do-while loop that gives the user a choice whether he/she would like to continue
do
{
cout<<"Enter your choice: ";
cin>> choice;
cout<<"Enter your two numbers: \n";
cin>> num1>> num2;

//expressions that make the program do the job that was stated above
add = addition (num1,num2);
sub = subtraction (num1, num2);
mul = multiplication (num1, num2);
div = division (num1, num2);
mo = mod (num1, num2);

//using switch for the user's choice of operation
switch(choice)
{
 case '1' :
 	{
 	cout<<"Result: "<< add;
 	break;
	}
 
 case '2':
 	{
 	cout<<"Result: "<< sub ;
 	break;
	}	

 case '3' :
	{
	cout<<"Result: "<< mul ;
	break;
	}

 case '4' :
 	{
 	cout<<"Result: "<<div ;
 	break;
	}
	
 case '5' :
 	{
 	cout<<"Result: "<<mo;
 	break;
	}
}
//asks the user if he/she would like to continue running the program
cout<<"\n\nContinue? (y/n)";
cin>>choice2;
}
//this expression states that as the user keeps on entering y (for yes), the program keeps on running
while (choice2 == 'y' || choice2 == 'Y');
//and this expression states that the profram will end as soon as the user enters n	
if (choice2 == 'n' || choice2 == 'N')
	{
		return 0;
	}
//default
//if the user enters neither of the 4 possible characters, the program will say invalid input and will end
else if (choice2!='n' && choice2!='N' && choice2!='y' && choice2!='Y')
	{
	cout<<"\nINVALID INPUT";
	return 0;
	}

getch();
return 0;
}
