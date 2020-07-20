// factory Ä£Ê½ÑÝÊ¾
#include <iostream>
using namespace std;

class Product
{
public:
	Product(){}
	virtual ~Product(){}
};

class ConcreteProduct :public Product
{
public:
	ConcreteProduct()
	{
		cout << "construction of ConcreteProduct" << endl;
	}
	virtual ~ConcreteProduct()
	{
		cout << "destruction of ConcreteProduct" << endl;
	}
};

class Creator
{
public:
	Creator(){}
	virtual ~Creator(){}

	void AnOperation()
	{
		Product* p = FactoryMethod();
		cout << "an operation of product" << endl;
	}
protected:
	virtual Product* FactoryMethod() = 0;
};

class ConcreteCreator : public Creator
{
public:
	ConcreteCreator()
	{
		cout << "construction of ConcreteCreator" << endl;
	}
	virtual ~ConcreteCreator()
	{
		cout << "destruction of ConcreteCreator" << endl;
	}
protected:
	virtual Product* FactoryMethod()
	{
		return new ConcreteProduct();
	}
};

int main()
{
	Creator *p = new ConcreteCreator();
	p->AnOperation();

	delete p;
	system("pause");
	return 0;
}