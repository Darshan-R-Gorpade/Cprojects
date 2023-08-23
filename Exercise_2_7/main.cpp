#include <iostream>
using namespace std;

class Base{
    int data1;
public:
    int data2;
    void setdata();
    int getData1();
    int getData2();

};
void Base::setdata()
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived:private Base{
    int data3;
public:
    void process();
    void display();
};
void Derived::process()
{
    setdata();
    data3 = data2 * getData1();
}

void Derived::display()
{
    cout<< "Value data1 :"<< getData1()<<endl;
    cout<< "Value data2 :"<< data2<<endl;
    cout<< "Value data3 :"<< data3<<endl;

}

int main()
{
    //    char * const ptr = "abc";
    //    cout<< ptr <<endl;
    //    ptr++;//can't possible
    //    cout<< ptr <<endl;

    //    float sum = 100;
    //    float &total = sum; //allias, just a alternate name to the sum, total doen't consume any space in memory
    //    cout<< total<<endl;
    //    cout<< &sum<<endl;

//    Derived dirv;
//    //    dirv.setdata();
//    dirv.process();
//    dirv.display();

    //Dynamically allocation a 1d array
    int* p = new int[5];
    int *a;
    a = p;
    cout<<"Enter 10 array elements:"<<endl;
    for(int i = 0;i<5;i++){
        cin>>a[i];
    }
    a = p;
    cout<<"array elements are"<<endl;
    for(int i = 0;i<5;i++){
        cout<<*(a+i)<< " ";
    }

    //Dynamically allocating a 2 d array
//    int** p = new int* [5];
//    for(int i=0;i<5;i++){
//        p[i] = new int[3];
//        for(int j=0;j<3;j++){
//            p[i][j] = 1;
//        }
//    }

//    for(int i=0;i<5;i++){
//        for(int j=0;j<3;j++){
//            cout<<p[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
    return 0;

}



