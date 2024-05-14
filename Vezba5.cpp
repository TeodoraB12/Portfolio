#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class date
{
    private:
        int day, month, year,hour,minute,second;
    public:
        date(){}
        friend void operator>>(istream &in, date &d);   //funkcijata ovozmozuva pristap do  clenovite na klasa bez razlika na status
        friend void operator<<(ostream &out, date &d)  //Overloading ovozmozuva specifikacija na poveke od edna fukcija so isto ime i ist domen
        {
                out<<"\n Date : ";
                out<<d.day;
                out<<"/";
                out<<d.month;
                out<<"/";
                out<<d.year;
                out<<"/";
                out<<d.hour;
                out<<"/";
                out<<d.minute;
                out<<"/";
                out<<d.second;
        }
        ~ date(){}
};
void operator>>(istream &in, date &d)
{
        cout<<"\n Enter Day : ";
        in>>d.day;
        cout<<"\n Enter Month : ";
        in>>d.month;
        cout<<"\n Enter Year : ";
        cin>>d.year;
        cout<<"\n Enter Hour : ";
        cin>>d.hour;
        cout<<"\n Enter Minute : ";
        cin>>d.minute;
        cout<<"\n Enter Second : ";
        cin>>d.second;
        cout<<"\n ------------------";
        if( d.month >12 || d.month<1)
        {
        	cout<<endl;
        	cout<<"Invalid month"<<endl;
    	} 
        switch(d.month)
        {
                case 1:    //January
                case 3:    //March
                case 5:    //May
                case 7:    //July
                case 8:    //August
                case 10:   //October
                case 12:   //December
                        if(d.day>31 || d.day<1)
                        {
                                cout<<"\n Invalid Days ";
                                exit(0);
                        }
                        break;
                case 4:   //April
                case 6:   //June
                case 9:   //September
                case 11:  //November
                        if(d.day>30 || d.day<1)
                        {
                                cout<<"\n Invalid Days ";
                                exit(0);
                        }
                        break;
                case 2:
                        //Uslov za mesec Februari, za proverka dali stanuva zbor za prestapna godina ili ne
                        if((d.year%100!=0&&d.year%4==0)||(d.year%400==0))   
                        {
                                if(d.day>29 || d.day<1)
                                {
                                        cout<<"\n Invalid Days ";
                                        exit(0);
                                }
                        }
                        else
                        {
                                if(d.day>28 || d.day<1)
                                {
                                        cout<<"\n Invalid Days ";
                                        exit(0);
                                }
                        }
                        break;
        }
}
int main()
{
        date d;
        cout<<"\n Enter Date \n";
        cout<<"\n ------------------";
        cin>>d;
 return 0;
}
