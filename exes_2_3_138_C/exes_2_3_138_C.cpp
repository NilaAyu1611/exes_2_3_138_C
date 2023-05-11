#include <iostream>
using namespace std;

int nila[34];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 34))
			break;
		else
			cout << "\nArray should have minimum 1 and maksimum 34 element.\n\n";
	}

	
	cout << "\n---------------------\n";
	cout << " Enter array elements \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> nila[i];
	}
}

void binersearch()
{
	char ch;
	int ctr;

	do
	{
		// Accept the number to be searched
		cout << "\nEnter the element you want to search: ";			// Langakah no 1 Algoritma
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < (n - 1); i++)						// Langkah no 2 & 3 & 4
		{
			ctr++;
			if (nila[i] == item)						// Langkah no 5 Algoritma
			{
				cout << "\n" << item << " found " << (i + 1) << endl;
				break;
			}
		}


		if (item < nila[i])
			(i == i- 1);			// Langkah no.6
		if (item > nila[i])
			(i == i+ 1);			// Langkah no.7
		if (i <= n);				// Langkah no.8
		cout << "\n" << item << " not found \n";					//Langkah no.9
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));			// Langkah no. 10
};


int main()
{
	input();
	binersearch();
}