#include <iostream>
 
using namespace std;
int main(int argc, char *argv[])
{
 
	const double A = 4.0;
    const double A_MINUS = 3.67;
	const double B_PLUS = 3.33;
	const double B = 3.0;
	const double B_MINUS = 2.67;
	const double C_PLUS = 2.33;
	const double C = 2.0;
	const double C_MINUS = 1.67;
	const double D = 1.00;
	const double F = 0.0;
	
	string lettergrade;
 	double credit;
    double caltimes = 0;
    double totalcal = 0;
    double totalcredit = 0;
    double finalgpa = 0;
    int option;
  
 	for(;;)
    {           
        cout<<"\nEnter letter grade: ";
        cin>>lettergrade;
        cin.ignore();
        cout<<"Enter the course credit: ";
        cin>>credit;
    
			   
		if(lettergrade == "a" || lettergrade == "A")
		{
			caltimes = credit * A;
		}
		else if(lettergrade == "a-" || lettergrade == "A-")
		{
			caltimes = credit * A_MINUS;
		}
		else if(lettergrade == "b+" || lettergrade == "B+")
		{
			caltimes = credit * B_PLUS;
		}
		else if(lettergrade == "b" || lettergrade == "B")
		{
			caltimes = credit * B;
		}
		else if(lettergrade == "b-" || lettergrade == "B-")
		{
			caltimes = credit * B_MINUS;
		}
		else if(lettergrade == "c+" || lettergrade == "C+")
		{
			caltimes = credit * C_PLUS;
		}
		else if(lettergrade == "c" || lettergrade == "C")
		{
			caltimes = credit * C;
		}
		else if(lettergrade == "c-" || lettergrade == "C-")
		{
			caltimes = credit * C_MINUS;
		}
		else if(lettergrade == "d" || lettergrade == "D")
		{
			caltimes = credit * D;
		}
		else if(lettergrade == "f" || lettergrade == "F")
		{
			caltimes = credit * F;
		}	   
		else
		{
			cout<<"Invaild Input...";
		}
	
	             
          totalcredit = totalcredit + credit;
          totalcal = totalcal + caltimes;
          
		  cout<<"Do you want to enter another grade (1 - Yes, 2 - no): ";
		  cin>>option;
		  if(option == 1)
		  {
		  	continue;
		  }
		  else
		  {
		  	break;
		  }      
 	}
                
          finalgpa = totalcal/totalcredit;
          cout<<"Student's GPA: "<<finalgpa<<"\n";
    
	
	return 0;
}