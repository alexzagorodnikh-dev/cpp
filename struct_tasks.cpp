#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Book { string title, author; int year; };
struct Product { string name; double price; int quantity; };
struct SimpleProduct { string name; double price; };
struct Point { double x, y; };
struct Time { int h, m, s; };
struct Rectangle { double width, height; };
struct Student { string name; int grade; };
struct Date { int day, month, year; };

void task1(){
    Book b;
    cin.ignore();
    cout<<"Enter title: ";
    getline(cin,b.title);
    cout<<"Enter author: ";
    getline(cin,b.author);
    cout<<"Enter year: ";
    cin>>b.year;
    cout<<"\""<<b.title<<"\" by "<<b.author<<" ("<<b.year<<")";
}

void task2(){
    Product p;
    cin.ignore();
    cout<<"Enter name: ";
    getline(cin,p.name);
    cout<<"Enter price: ";
    cin>>p.price;
    cout<<"Enter quantity: ";
    cin>>p.quantity;
    cout<<fixed<<setprecision(2);
    cout<<"Total: "<<p.price*p.quantity<<" UAH";
}

void task3(){
    Point p;
    cout<<"Enter x: "; cin>>p.x;
    cout<<"Enter y: "; cin>>p.y;
    cout<<fixed<<setprecision(2);
    cout<<"Distance from origin: "<<sqrt(p.x*p.x+p.y*p.y);
}

void task4(){
    Time t;
    cout<<"Enter hours: "; cin>>t.h;
    cout<<"Enter minutes: "; cin>>t.m;
    cout<<"Enter seconds: "; cin>>t.s;
    cout<<"Total seconds: "<<t.h*3600+t.m*60+t.s;
}

void task5(){
    Rectangle r;
    cout<<"Enter width: "; cin>>r.width;
    cout<<"Enter height: "; cin>>r.height;
    cout<<fixed<<setprecision(2);
    cout<<"Area: "<<r.width*r.height<<endl;
    cout<<"Perimeter: "<<2*(r.width+r.height);
}

void task6(){
    Point a,b;
    cout<<"Point 1 - Enter x: "; cin>>a.x;
    cout<<"Point 1 - Enter y: "; cin>>a.y;
    cout<<"Point 2 - Enter x: "; cin>>b.x;
    cout<<"Point 2 - Enter y: "; cin>>b.y;
    cout<<fixed<<setprecision(2);
    cout<<"Distance: "<<sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
}

void task7(){
    Time t1,t2;
    cout<<"Time 1 - hours: "; cin>>t1.h;
    cout<<"Time 1 - minutes: "; cin>>t1.m;
    cout<<"Time 1 - seconds: "; cin>>t1.s;
    cout<<"Time 2 - hours: "; cin>>t2.h;
    cout<<"Time 2 - minutes: "; cin>>t2.m;
    cout<<"Time 2 - seconds: "; cin>>t2.s;
    int s1=t1.h*3600+t1.m*60+t1.s;
    int s2=t2.h*3600+t2.m*60+t2.s;
    cout<<"Difference: "<<abs(s2-s1)<<" seconds";
}

void task8(){
    SimpleProduct p1,p2;
    cin.ignore();
    cout<<"Product 1 - name: "; getline(cin,p1.name);
    cout<<"Product 1 - price: "; cin>>p1.price;
    cin.ignore();
    cout<<"Product 2 - name: "; getline(cin,p2.name);
    cout<<"Product 2 - price: "; cin>>p2.price;
    if(p1.price>p2.price)
        cout<<p1.name<<" is more expensive";
    else
        cout<<p2.name<<" is more expensive";
}

void task9(){
    double a,b,c,d;
    cout<<"Complex 1 - real: "; cin>>a;
    cout<<"Complex 1 - imag: "; cin>>b;
    cout<<"Complex 2 - real: "; cin>>c;
    cout<<"Complex 2 - imag: "; cin>>d;
    cout<<"Sum: "<<a+c<<" + "<<b+d<<"i";
}

void task10(){
    Rectangle r1,r2;
    cout<<"Rectangle 1 - width: "; cin>>r1.width;
    cout<<"Rectangle 1 - height: "; cin>>r1.height;
    cout<<"Rectangle 2 - width: "; cin>>r2.width;
    cout<<"Rectangle 2 - height: "; cin>>r2.height;
    double a1=r1.width*r1.height;
    double a2=r2.width*r2.height;
    cout<<fixed<<setprecision(2);
    if(a1>a2)
        cout<<"Rectangle 1 is larger (area: "<<a1<<")";
    else
        cout<<"Rectangle 2 is larger (area: "<<a2<<")";
}

int main(){
    int choice;
    cout<<"Choose task (1-10): ";
    cin>>choice;
    switch(choice){
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 6: task6(); break;
        case 7: task7(); break;
        case 8: task8(); break;
        case 9: task9(); break;
        case 10: task10(); break;
        default: cout<<"Invalid task!";
    }
}
