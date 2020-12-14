#include "Header.h"
#include "Class.h"


int interface::inputsize()
{
	while (true)
	{
		cout << "Array size = ";
		cin >> this->size;
		if (this->size <= 0)
			cout << "Incorrect input. Try again!\n";
		else
		{
			system("cls");
			break;
		}
	}
	return this->size;
}

void AndArray::inputarr()
{
	cout << "Input the first array:\n";
	for (int i = 0; i < sizz; i++)
	{
		cout << i << "-th elemnt = ";
		cin >> arr1[i];
	}
	cout << endl << "Input the second array:\n";
	for (int i = 0; i < sizz; i++)
	{
		cout << i << "-th elemnt = ";
		cin >> arr2[i];
	}
}

void AndArray::sum()
{
	int count = 0;
	int z = 0;

	for (int i = 0; i < sizz; i++)
	{
		for (int j = 0; j < sizz; j++)
		{
			if (arr1[i] == arr2[j])
			{
				count++;
				break;
			}
		}
	}

	double* arr3 = new double[count];

	for (int i = 0; i < sizz; i++)
	{
		for (int j = 0; j < sizz; j++)
		{
			if (arr1[i] == arr2[j])
			{
				arr3[z] = arr1[i];
				z++;
				break;
			}
		}
	}

	if (count > 0)
	{
		cout << endl << "intersection: ";
		for (int i = 0; i < count; i++)
		{
			cout << arr3[i] << " ";
		}
		cout << endl;
	}
	else
		cout << endl << "There is no any common element\n";

	delete[] arr3;
}

void AndArray::foreach()
{
	int count = 0;
	int z = 0;

	for (int i = 0; i < sizz; i++)
	{
		for (int j = 0; j < sizz; j++)
		{
			if (arr1[i] == arr2[j])
			{
				count++;
				break;
			}
		}
	}

	double* arr3 = new double[count];

	for (int i = 0; i < sizz; i++)
	{
		for (int j = 0; j < sizz; j++)
		{
			if (arr1[i] == arr2[j])
			{
				arr3[z] = arr1[i];
				z++;
				break;
			}
		}
	}

	if (count > 0)
	{
		cout << endl << "Sqrt from the intersection:\n";
		for (int i = 0; i < count; i++)
		{
			if (arr3[i] >= 0)
				cout << i << "-th element: " << pow(arr3[i], 1.0 / 2) << endl;
			else
				cout << i << "-th element: negative element. impossible to find sqrt" << endl;
		}
		cout << endl;
	}
	else
		cout << endl << "There is no any common element\n";

	delete[] arr3;
}

void OrArray::inputarr()
{
	cout << "Input the first array:\n";
	for (int i = 0; i < sizz; i++)
	{
		cout << i << "-th elemnt = ";
		cin >> arr1[i];
	}
	cout << endl << "Input the second array:\n";
	for (int i = 0; i < sizz; i++)
	{
		cout << i << "-th elemnt = ";
		cin >> arr2[i];
	}
}

void OrArray::sum()
{
	double* arr3 = new double[sizz * 2];

	for (int i = 0; i < sizz; i++)
	{
		arr3[i] = arr1[i];
	}

	int j = 0;

	for (int i = sizz; i < (sizz + sizz); i++)
	{
		arr3[i] = arr2[j];
		j++;
	}

	cout << endl << "Common elements: ";
	for (int i = 0; i < (sizz + sizz); i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;

	delete[] arr3;
}

void OrArray::foreach()
{
	double* arr3 = new double[sizz * 2];

	for (int i = 0; i < sizz; i++)
	{
		arr3[i] = arr1[i];
	}

	int j = 0;

	for (int i = sizz; i < (sizz + sizz); i++)
	{
		arr3[i] = arr2[j];
		j++;
	}


	for (int i = 0; i < (sizz + sizz); i++)
	{
		if (arr3[i] >= 0)
			if (arr3[i] == 0)
				cout << "ln form the " << i << "-th element: zero element! ln cant be found from it\n";
			else
				cout << "ln from the " << i << "-th element: " << log(arr3[i]) << endl;
		else
			cout << "ln from the " << i << "-th element: negative element. cant be found" << endl;
	}
	cout << endl;
	delete[] arr3;
}