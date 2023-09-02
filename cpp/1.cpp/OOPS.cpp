#include<iostream>
#include<cstring>
using namespace std;


class car
{
    private:
    int carNumber;

    public:
    string name;
    char *model;
    
    //default constructor
    car()
    {
        model=new char[100];
    }


    // //copy constructor
    // car(car&tempcar)
    // {
    //     this->carNumber=tempcar.carNumber;
    //     this->name= tempcar.name;
    // }

    // //parametrized constructor
    // car(int carNumber,string name)
    // {
    //     this->carNumber=carNumber;
    //     this->name=name;
    // }

    int getNum()
    {
        return carNumber;
    }
    int setcarNumber(int num)
    {
        carNumber=num;
    }
    string getName()
    {
        return name;
    }
    string setName(string ch)
    {
        name=ch;
    }
    char setmodel(char model[])
    {
        strcpy(this->model,model);
    }
    void print()
    {
        cout << name <<endl;
        cout << carNumber <<endl;
        cout << model <<endl;
    }
};
int main()
{
    car c1;
    c1.setName("civic");
    char model[4]={"yyyx"};
    c1.setmodel(model);
    c1.print();
// car c1(330,"civic");

//copy contructor is called
// car c2(c1);

// // c1.setName="civic";
// c1.print();

// c2.print();

 
    // //object
    // //static allocation of object
    // car C1;
    // //dynamic allocation of object
    // car*c2=new car;
    // c2->setcarNumber(30);
    // c2->name="supra";
    
    // // cout << C1.getNum() << endl;//garbage value 
    // C1.setcarNumber(333);//setter 
    // cout << C1.getNum() << endl;
    // C1.name="HONDA CIVIC";
    // cout<< "name of car :" <<C1.name << endl;
    // cout << c2->getNum() << endl;
    // // cout << "second car:" << "" << c2->name <<endl;
    // cout << "name of second car is :" << (*c2).name <<endl;

}