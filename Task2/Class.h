#pragma once

class interface
{
public:
	int inputsize();
	~interface()
	{
		cout << "Destructor interface called\n";
	}
private:
	int size;
};

class Array
{
public:
	virtual void sum() = 0;
	virtual void foreach() = 0;
	~Array()
	{
		cout << "Destructor Array called\n";
	}
};


class AndArray: public Array
{
private:
	double* arr1;
	double* arr2;
	int sizz;

public:
	AndArray(int size)
	{
		sizz = size;
		arr1 = new double[size];
		arr2 = new double[size];
	}

	~AndArray()
	{
		delete[] arr1;
		delete[] arr2;
		cout << "Destructor AndArray called\n";

	}
	
	void inputarr();
	void sum() override;
	void foreach() override;
	
};

class OrArray: public Array
{
private:
	double* arr1;
	double* arr2;
	int sizz;

public:
	OrArray(int size)
	{
		sizz = size;
		arr1 = new double[size];
		arr2 = new double[size];
	}

	~OrArray()
	{
		delete[] arr1;
		delete[] arr2;
		cout << "Destructor OrArray called\n";

	}

	void inputarr();
	void sum() override;
	void foreach() override;
	
};
