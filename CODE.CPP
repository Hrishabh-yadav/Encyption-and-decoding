#include<iostream.h>
#include<conio.h>
#include<math.h>

void binaryconvertor(char string[100], int a)
{   
	int o;
    for(int i = 0; i < a; i++)    
     	o+=string[i] * pow(2, (a - 1 - i));     
    cout << o;
}

int main()
{ 
	clrscr();
	
 	char string[100];
   	int a,b,T;
	
   	cout << "\nEnter the number of test cases:\n";
   	cin >> T;
	
	for(int i = 0; i<T; i++)
   	{
		cout << "\nEnter two integers (with the first number greater than second)\n";
		cin >> a >> b;
		
		if(b > a)		
			cout << "The entered pair (" << a << ", " << b << ") is not valid!!";			
		else if(a % b == 0)
		{ 
			string[0] = 1;
			for(int j = 1; j < a; j++)		      	
				string[j] = 0;		      	

			binaryconvertor(string, a);
		}
		else
		{
			for(int m = 0; m < a; m++)
			{
				if(m % b == 0)
					string[m] = 1;			    
				else
					string[m] = 0;			    

				binaryconvertor(string, a);

				cout << "\n" << string;         // output changes  due to  this
			}
		}
	  }
	
	return 0;
}
