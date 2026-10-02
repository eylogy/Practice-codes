#include <iostream>
using namespace std;

int main()
{
   
int x, sum=0; 
int num[10] = {3, 4, 5, 6, 1, 2, 7, 2, 4, 3};
    
cout<<"Name:   ";
cout<<"\nSection:   "; 

cout<< "\n[1] Display all numbers\n";   // not graded
for(x = 0; x <= 9; x++)
{
    cout<< "     "<<num[x] << " "; 
}
		
cout<< "\n\n[2] Display the sum of all numbers";  // not graded
for(x = 0; x <=9; x++)
{ 
    sum = sum + num[x]; 
}	
cout<<"\n     The sum of all numbers is  "<<sum;
	
cout<< "\n\n[3] Display the sum of all given even numbers";   // not graded
sum=0;

    for(x = 0; x <= 9; x++)
	{      
        if (num[x] % 2 == 0) 
		{  
            sum = sum + num[x];  
        } 
	}//for loop
	cout<<"\n      The sum of all given even numbers is  "<<sum;

cout<< "\n\n[4] Display the sum of all numbers in even subscript 0, 2, 4";   // not graded
sum=0;
for(x = 0; x <= 9; x = x+2)
  {
    sum = sum + num[x];
  }	
cout<<"\n     The sum of all numbers in even subscript 0, 2, 4 is  "<<sum; //or 
sum=0;
for(x = 0; x <= 9; x++)                                                                             
{  
    if(x % 2 == 0)
    sum = sum + num[x];
} 
cout<<"\n     The sum of all numbers in even subscript(0 2 4 ) is  "<<sum; 

cout<< "\n\n[5] Display the average of all given odd numbers";  
sum = 0;
int count = 0;
double average;

    for(x = 0; x <= 9; x++)
    {
        if(num[x] % 2 != 0)
        {
            sum = sum + num[x];
            count++;
        }

        average = (double)sum/count;
    }
    
   cout<<"\n      The average of all given odd numbers is  "<< average;
    
cout << "\n\n[6] Display the product of all numbers in odd subscript 1, 3, 5, 7, 9";

int product = 1;

for (x = 1; x <= 9; x = x + 2)
{
    product = product * num[x];
}

cout << "\n     The product of all numbers in odd subscript 1, 3, 5, 7, 9 is " << product;

// or

product = 1;
for (x = 1; x <= 9; x++)
{
    if (x % 2 != 0)
        product = product * num[x];
}

cout << "\n     The product of all numbers in odd subscript (1 3 5 7 9) is " << product; 


cout<< "\n\n[7] Display the highest number"; 

    int highest = num[0];
    for (x = 1; x <= 9; x++)
    {
        if (num[x] > highest)
        {
            highest = num[x];
        }
    }
    cout << "\n     The highest number is " << highest;

    return 0;
} //end of main