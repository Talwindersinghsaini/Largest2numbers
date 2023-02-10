//************************************************************************
// Name : Talwinder singh saini
// course : CS 155 computer science
// Semester : 1
// Assignment A6 : Selection again
// Date : 9/22/2021
//Description : Write a C++ program that accepts 5 numbers from the user and then uses selection structures to determine the largest TWO numbers out of those 5.  Your output should say, "The largest number is: " and then give the largest number and then on the next line "The second largest number is: " and then give the second largest number.
//************************************************************************

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,lar1,lar2;
    
    cout <<"Enter the five values"<<endl;
    
    cin >>a>>b>>c>>d>>e;
    
    if (a > b && a > c && a > d && a > e)
    {
        if (b >= c && b >= d && b >= e)
        {
            lar2 = b;
            cout << "second largest is"<<lar2;
        }
            if (c >= b && c >= d && c >= e)
            {
                lar2 = c;
                cout<< "second largest is "<<lar2<< endl;
            }
                if (d >= b && d >= c && d >= e)
                {
                    lar2 = d;
                    cout <<"second largest is "<<lar2<<endl;
                }
                    if (e >= b && e >= c && e >= d)
                    {
                        lar2 = e;
                        cout<< "second largest is "<<lar2<<endl;
                    }
        lar1 = a;
        cout<<"The greatest number is "<<lar1<<endl;
    }

    if (b > a && b > c && b > d && b > e)
        {
            if (a >= c && a >= d && a >= e)
            {
                lar2 = a;
                cout<< " is second largest"<<lar2<< endl;
            }
                 if (c >= b && c >= d && c >= e)
                {
                    lar2 = c;
                    cout <<"second largest is "<<lar2<<endl;
                }
                     if (d >= b && d >= c && d >= e)
                    {
                        lar2 = d;
                        cout <<"second largest is "<<lar2<<endl;
                    }
                         if (e >= b && e >= c && e >= d)
                        {
                            lar2 = e;
                            cout <<"second largest is "<<lar2<<endl;
                        }
            lar1 = b;
            cout<<" The greatest number is "<<lar1<<endl;
        }

     if (c > a && c > b && c > d && c > e)
        {
            if (a >= c && a >= d && a >= e)
            {
                lar2 = a;
                cout <<"second largest is "<<lar2<<endl;
            }
                if (b >= c && b >= d && b >= e)
                {
                    lar2 = b;
                    cout <<"second largest is "<<lar2<<endl;
                }
                    if (d >= b && d >= c && d >= e)
                    {
                        lar2 = d;
                        cout <<"second largest is "<<lar2<<endl;
                    }
                         if (e >= b && e >= c && e >= d)
                        {
                            lar2 = e;
                            cout <<"second largest is "<<lar2<<endl;
                        }
            lar1 = c;
            cout<<"The greatest number is "<<lar1<<endl;
        }

    if (d > a && d > b && d > c && d > e)
        {
            if (a >= c && a >= d && a >= e)
            {
                lar2 = a;
                cout <<"second largest is "<<lar2<<endl;
            }
                if (b >= c && b >= d && b >= e)
                {
                    lar2 = b;
                    cout <<"second largest is "<<lar2<<endl;
                }
                    if (c >= b && c >= d && c >= e)
                    {
                        lar2 = c;
                        cout <<"second largest is "<<lar2<<endl;
                    }
                        if (e >= b && e >= c && e >= d)
                        {
                            lar2 = e;
                            cout <<"second largest is "<<lar2<<endl;
                        }
            lar1 = d;
            cout<<"The greatest number is "<<lar1<<endl;
        }
    else
        {
            if (a >= c && a >= d && a >= e)
            {
                lar2 = a;
                cout <<"second largest is "<<lar2<<endl;
            }
                if (b >= c && b >= d && b >= e)
                {
                    lar2 = b;
                    cout <<"second largest is "<<lar2<<endl;
                }
                    if (c >= b && c >= d && c >= e)
                    {
                        lar2 = c;
                        cout <<"second largest is "<<lar2<<endl;
                    }
                        if (d >= b && d >= c && d >= e)
                        {
                            lar2 = d;
                            cout <<"second largest is "<<lar2<<endl;
                        }
            lar1 = e;
            cout<<"The greatest number is "<<lar1<<endl;
        }
}
