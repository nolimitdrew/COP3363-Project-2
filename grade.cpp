/* Name: Andrew Stade
Date: 1/29/2019
Section: 0004
Assignment: Homework #2 "Grade Calculator"
Due Date: 1/31/2019
About this project: The objective of this assignment is to demonstrate knowledge of if and else statements, along with switch statements.
Assumptions: The user will input only valid homwework scores, recitation grades, and test grades, however, an error message must still apply.

All work below was performed by Andrew Stade */



#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	
	int HW1; int HW2; int HW3; int HW4; int HW5; int HW6; int HW7;
	int RT1; int RT2; int RT3; int RT4; int RT5; int RT6;
	int MT1; int MT2; int FNL;
	int ECP;	
	char response;


	/* The variables are labeled to indicate which homework,
	recitation, or test conneceted respectively. */ 

			 
	cout << "" << endl;
	cout << "\nWelcome to the Grade Calculator!" << endl;

	cout << "\nHOMEWORK GRADES --> " << endl;
	cout << "Homework 1: " ;
	cin >> HW1;
	cout << "Homework 2: " ;
	cin >> HW2;
	cout << "Homework 3: " ;
	cin >> HW3;
	cout << "Homework 4: " ;
	cin >> HW4;
	cout << "Homework 5: " ;
	cin >> HW5;
	cout << "Homework 6: " ;
	cin >> HW6;
	cout << "Homework 7: " ;	
	cin >> HW7;
	
	cout << "" << endl;
	cout << "\nRECITATION GRADES --> " << endl;
	cout << "Recitation 1: " ;
	cin >> RT1; 
	cout << "Recitation 2: " ;
	cin >> RT2; 
	cout << "Recitation 3: " ;
	cin >> RT3; 
	cout << "Recitation 4: " ;
	cin >> RT4; 
	cout << "Recitation 5: " ;
	cin >> RT5; 
	cout << "Recitation 6: " ;
	cin >> RT6; 
	
	cout << "" << endl;
	cout << "\nTEST GRADES -->" << endl;
	cout << "Midterm I: " ;
	cin >> MT1;
	cout << "Midterm II: " ;
	cin >> MT2;
	cout << "Final: " ;
	cin >> FNL;


	/* The information above prompts the user
	to input the corresponding grades and saves
	them for equations later.*/


	double HWA1 = (((HW1+HW2+HW3+HW4+HW5+HW6+HW7)
	+(RT1+RT2+RT3+RT4+RT5+RT6)));

	cout << "\nIs there any extra credit to add in? (Y or N) --> " ;
	cin >> response; 
	cout << fixed << showpoint << setprecision(2) ;


	/* The double declared above is the equation of the currently
	input grades of all homework, recitation, and test grades. The
	line then prompts the user to respond stated as "response".*/
	

	switch(response)
	{
		case 'y': cout 
		<< "How many extra credit points should be added? --> " ;
		cin >> ECP ;

		cout << fixed << showpoint << setprecision(2) ;
		cout << "\nHomework Average: " 
		<< (((HWA1+ECP)/820)*100) << "%" << endl;
		cout << "Test Average: " 
		<< ((MT1*17.5)+(MT2*17.5)+(FNL*25))/60 << "%";
		if ( 70 > (((MT1*17.5)+(MT2*17.5)+(FNL*25))/60)) 
			cout << " (!!Test average requirement not met," 
			<< " final course grade may differ!!)" << endl;
		else
			cout << "" << endl;
		cout << "Course Average: " 
		<< (MT1*.175)+(MT2*.175)+(FNL*.25)+(((HWA1+ECP/820)*100)*.40) 
		<< "%" << endl;			
		cout << "Course Grade: ";

		if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 90)	
			cout << "A\n" << endl;
		else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 80)		
			cout << "B\n" << endl;
		else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 70)
			cout << "C\n" << endl;
		else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 60)			
			cout << "D\n" << endl;
		else
			cout << "F\n" << endl;
		break;


		/*This is the first case which solves the given response 
		of 'y' in the program. The following else statements are 
		formulas stated to solve for all averages, homework 
		average, test average, course average, and finally 
		checks the value of the course average for the course
		grade.*/  


		case 'Y': cout 
		<< "How many extra credit points should be added? --> " ;
		cin >> ECP ;

                cout << fixed << showpoint << setprecision(2) ;
                cout << "\nHomework Average: " 
		<< (((HWA1+ECP)/820)*100) << "%" << endl;
                cout << "Test Average: " 
		<< ((MT1*17.5)+(MT2*17.5)+(FNL*25))/60 << "%";
                if ( 70 > (((MT1*17.5)+(MT2*17.5)+(FNL*25))/60))
                        cout << " (!!Test average requirement not met," 
			<< " final course grade may differ!!)" << endl;
                else
                        cout << "" << endl;
                cout << "Course Average: " << (MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) << "%" << endl;
                cout << "Course Grade: ";

                if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 90)
                        cout << "A\n" << endl;
                else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 80)
                        cout << "B\n" << endl;
                else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 70)
                        cout << "C\n" << endl;
                else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 60)
                        cout << "D\n" << endl;
                else
                        cout << "F\n" << endl;
		break;

		
		/*This is the second case which solves the given response 
		of 'Y' in the program. Much like the first case comment
		the following else statements are formulas stated to 
		solve for all averages, homework average, test average, 
		course average, and finally checks the value of the 
		course average for the course grade.*/


		case 'n': ECP = 0; 

                cout << fixed << showpoint << setprecision(2) ;
                cout << "\nHomework Average: " 
		<< (((HWA1+ECP)/820)*100) << "%" << endl;
                cout << "Test Average: " 
		<< ((MT1*17.5)+(MT2*17.5)+(FNL*25))/60 << "%";
                if ( 70 > (((MT1*17.5)+(MT2*17.5)+(FNL*25))/60))
                        cout << " (!!Test average requirement not met," 
			<< " final course grade may differ!!)" << endl;
                else
                        cout << "" << endl;
                cout << "Course Average: " << (MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) << "%" << endl;
                cout << "Course Grade: ";

                if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 90)
                        cout << "A\n" << endl;
                else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 80)
                        cout << "B\n" << endl;
                else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 70)
                        cout << "C\n" << endl;
                else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 60)
                        cout << "D\n" << endl;
                else
                        cout << "F\n" << endl;
		break;


		/*This is the thrid case that solves the given response 
		of 'n' in the program. Unlike the first two cases, this
		case immediatley declares the extra credit points as '0'
		and then continues to solve for all averages, homework  
                average, test average, course average, and finally 
                checks the value of the course average for the course
                grade.*/


		case 'N': ECP = 0;

                cout << fixed << showpoint << setprecision(2) ;
                cout << "\nHomework Average: " 
		<< (((HWA1+ECP)/820)*100) << "%" << endl;
                cout << "Test Average: " 
		<< ((MT1*17.5)+(MT2*17.5)+(FNL*25))/60 << "%";
                if ( 70 > (((MT1*17.5)+(MT2*17.5)+(FNL*25))/60))
                        cout << " (!!Test average requirement not met," 
			<< " final course grade may differ!!)" << endl;
                else
                        cout << "" << endl;
                cout << "Course Average: " << (MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) << "%" << endl;
                cout << "Course Grade: ";

                if ((MT1*.175)+(MT2*.175)+(FNL*.25)
		+((((HWA1+ECP)/820)*100)*.40) >= 90)
                        cout << "A\n" << endl;
                else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 80)
                        cout << "B\n" << endl;
                else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 70)
                        cout << "C\n" << endl;
                else if ((MT1*.175)+(MT2*.175)+(FNL*.25)+
		((((HWA1+ECP)/820)*100)*.40) >= 60)
                        cout << "D\n" << endl;
                else
                        cout << "F\n" << endl;
		break;


                /*This is the fourth case that solves the given response   
                of 'N' in the program. Much like the third case, this        
                case immediatley declares the extra credit points as '0'       
                and then continues to solve for all averages, homework         
                average, test average, course average, and finally
                checks the value of the course average for the course
                grade.*/


		default: cout << "\nInvalid option, exiting program.\n" ;
		
		
		/*Should any invalid character be input to the question
		the program will default to an error message and then
		exit. */


	}


	return 0;
}


