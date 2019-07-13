#include <iostream>
#include<conio.h>

using namespace std;


void selectionsort(int arr[]) //header
{
int size, temp, i, j;
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


}

int main() 
{
    int size, i, arr[100];

    cout << "Enter array size: ";
    cin>>size;
    cout<<"Enter the "<<size<<" elements: \n";
    for (i = 0; i < size; i++)
    cin>>arr[i];

    cout<<"\nYour Data: ";
    for (i = 0; i < size; i++)
	{
        cout<< arr[i]<<" ";
    }
    //expression that should do the work that was stated on the void function
    cout << "\n\nSorted Data: ";
    for (i = 0; i < size; i++) 
	{
        cout<<arr[i]<<" ";
    }
   
}


