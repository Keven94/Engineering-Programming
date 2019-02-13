#include <iostream>
using std::cout;
using std::endl;

int main()
{
	for (int i = 0; i < 7; i++)
	{
		cout << "\t\t\t";
		
		for (int j = 6; j >= i; j--)
		{
			cout << " ";
		}
		
		for (int k = 0; k <= (i * 2) - 2; k++)
		{
			if ((i == 0) || (i == 2) || (i == 4))
			{
				cout << "^";
			}
			else
			{
				cout << "*";
			}
		}
		
		cout << endl << endl;
	}
	
	return 0;
}	
