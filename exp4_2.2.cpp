#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //declaration of variables 
int size, i, j, temp, arr[50];
cout<<"Enter array size: ";
cin>>size;
cout<<"Enter the "<<size<<" elements: \n";

for(i=0; i<size; i++)
{
    cin>>arr[i];

}

cout<<"\nYour Data: ";
    for (i = 0; i < size; i++)
	{
        cout<< arr[i]<<" ";
	}
         
//selection sort
for(i=0; i<size; i++)
	{
		for (j=i+1; j<size; j++)
			{
				if(arr[i]>arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
	}
cout << "\n\nSorted Data: ";
 for (i = 0; i < size; i++)
 {
     cout<<arr[i]<<" ";
}
getch();
return 0;
}
