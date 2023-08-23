#include <iostream>
#include <string>
using namespace std;

/*
class Base
{
public:
    int num;

    Base(int a):num{a}{

    }

    Base operator +(Base x){
        int sum = num + x.num;
        Base obj(sum);
        return  obj;
    }
};

int findSubstring(const std::string& str, const std::string& substr) {
    int mainStrLength = str.length();
    int subStrLength = substr.length();


}

int main() {
    std::string inputString;
    std::string searchString;

    std::cout << "Enter the main string: ";
    std::getline(std::cin, inputString);

    std::cout << "Enter the substring to search for: ";
    std::getline(std::cin, searchString);

    int result = findSubstring(inputString, searchString);

    if (result != -1) {
        std::cout << "Substring found at position: " << result << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;
}

*/


//class Base{
//public:
//    int a;

//    void add(){
//        cout<<"add of a base class called\n";
//    }

//};

//class Derived:public Base
//{
//public :
//    int b;
//    void add(){
//        cout<<"add of a Derived class called\n";
//    }
//};

//int main()
//{

//    //    Derived d;
//    //    d.add();
//    Base *b;

//   b=new Derived;
//   ((Derived *) b)->add();

//}

/*
class Base{
    int a;
    int b;
public:
    Base(int x,int y):a{x},b{y}
    {
        cout<<"Base class constructor called "<<a<<" "<<b<<endl;
    }
};

class Derived:public Base
{
    int d_x;
public:
    Derived(int x,int y):Base(x,y)
    {
        cout<<"Deriver1 class constructor value received "<<x<<" "<<y<<endl;
    }
    Derived(int x,int y,int z):Base(x,y)
    {
        cout<<"Derived2 class constructor called "<<x<< " "<<y<<" "<<z<<endl;
    }
};

int main()
{
    Derived der(3,4);
    Derived der2(4,5,6);
}

*/

/*
int main(){
    int n = 4;
    int count=0;
    float res;
    int num[] = {1 ,2, 2, 8};
    int den[] = {2 ,4, 6, 12};

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            res = static_cast<float>(num[i]) / static_cast<float>(den[i]) + static_cast<float>(num[j]) /  static_cast<float>(den[j]);
            if(res == 1)
                count++;
        }
    }
    cout<<"Count is "<<count<<endl;

}
*/
/*
int main() {
    int n = 4;
    int count = 0;

    int numerator[] = {1, 2, 2, 8};
    int denominator[] = {2, 4, 6, 12};

//    for (int i = 0; i < n\; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if(static_cast<float>(numerator[i]) )
//        }
//    }
    cout<<"Count of ele "<<sizeof(numerator)/4<<endl;
    cout << "Count is " << count << endl;

    return 0;
}
*/
/*

int main() {
    int score = 0;

    cout << "Welcome to the C++ Quiz!" << endl;

    cout << "Question 1: Which of the following is the correct way to initialize an integer variable x with the value 10?" << endl;
    cout << "A) int x = 10;" << endl;
    cout << "B) x = 10;" << endl;
    cout << "C) int x; x = 10;" << endl;
    cout << "D) x int = 10;" << endl;

    char answer1;
    cout << "Your answer: ";
    cin >> answer1;
    if (answer1 == 'A' || answer1 == 'a') {
        score++;
    }

    cout << "Question 2: What is the correct syntax to define a function named 'add' that takes two integers and returns their sum in C++?" << endl;
    cout << "A) int add(int a, b) { return a + b; }" << endl;
    cout << "B) int add(a, b) { return a + b; }" << endl;
    cout << "C) int add(int a, int b) { return a + b; }" << endl;
    cout << "D) add(int a, int b) => a + b;" << endl;

    cout << "Your answer: ";
    cin >> answer1;
    if (answer1 == 'C' || answer1 == 'c') {
        score++;
    }

    cout << "Question 3: Which data type is used to represent a single character in C++?" << endl;
    cout << "A) char" << endl;
    cout << "B) character" << endl;
    cout << "C) int" << endl;
    cout << "D) string" << endl;

    cout << "Your answer: ";
    cin >> answer1;
    if (answer1 == 'A' || answer1 == 'a') {
        score++;
    }

    cout << "Question 4: What is the output of the following code snippet?" << endl;
    cout << "int x = 5;" << endl;
    cout << "cout << x++ << endl; // Note the post-increment operator" << endl;
    cout << "cout << x << endl;"<<endl;
    cout << "A) 3" << endl;
    cout << "B) 4" << endl;
    cout << "C) 5" << endl;
    cout << "D) 6" << endl;

    cout << "Your answer: ";
    cin >> answer1;
    if (answer1 == 'D' || answer1 == 'd') {
        score++;
    }
//    score = 0;
    cout << "Quiz completed! Your score is: " << score << " out of 4" << endl;

    return 0;
}


*/
/*
//#include <stdio.h>
int main()
{
   printf("new_c_questionbr");
   printf("geeksforgeeks");
   getchar();
   return 0;
}


*/

/*
int main()
{
    //    A[] = {6,1,2,8,3,4,7,10,5}

    int temp;
    int a[] = {6,1,2,3,5};

    for(int i=0;i<sizeof(a)/4;i++)
    {
        for(int j=i;j<sizeof(a)/4;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int num = a[0];

    for( int i=0;i<sizeof(a)/4;i++ )
    {
        if(num != a[i]){
            cout<<"Missing num is "<<num<<endl;
            break;
        }
        num++;
    }


}
*/

/*
int main()
{
//    string a,b;
//    cout<<"Enter 1st string : "<<endl;
//    cin>>a;

//    for(int i=0;i<a.length();i++)
//    {
//        for(int j=0;j<a.length();j++){
//            if(a[i] == a[j])
//            {
//                j++;
//            }
//            b = a[i] + a[j];
//        }
//        cout<<b<<endl;
//    }
/*
    int *ptr,**ptr1;
    int a = 5;
    ptr = &a;
    ptr1 = &ptr;

    cout<<**ptr1<<endl;
    (*ptr);
    cout<<*++*ptr1<<endl;

}
*/
/*

int main()
{

int x = -1;

try{
    cout<<"Inside try block\n";
    if(x<0){

        cout<<"Never executes\n";
    }
}
catch(string a)
{
    cout<<"Inside catch block\n";
}
catch(...)
{
    cout<<"Int catched\n";
}

cout<<"After catch block\n";


return 0;
}
*/

template <typename T>
T myMax(T x, T y)
{
    return x>y ? x : y;
}




int main()
{

    cout<<myMax(8,6)<<endl;
    cout<<myMax(3.2,1.1)<<endl;
}


















