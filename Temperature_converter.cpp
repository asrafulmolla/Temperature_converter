#include<bits/stdc++.h>
using namespace std;
int main()
{
    int choice;
    cout<<" 1- Celcius To Farenheit.";
    cout<<"\n 2- Farenheit To Celcius.";
    cout<<"\n 3- Celcius To Kelvin.";
    cout<<"\n 4- Kelvin To Celcius.";
    cout<<"\n 5- Farenheit To Kelvin.";
    cout<<"\n 6- Kelvin To Farenheit.\n";
    cout<<"\nChoice your number (1-6): ";
    cin>>choice;
    float c,f,k;
    switch (choice)
    {
    case 1:
    cout<<"\nEnter the tempreature on the Celsius scale: ";
    cin>>c;
    cout<<1.8*c+32<<" it is tempreature on the Farenheit scale."<<endl;
    break;
    case 2:
    cout<<"\nEnter the tempreature on the Farenheit scale: ";
    cin>>f;
    cout<<(f-32)/1.8<<" it is tempreature on the Celcius scale."<<endl;
    break;
    case 3:
    cout<<"\nEnter the tempreature on the Celsius scale: ";
    cin>>c;
    cout<<c+273.15<<" it is tempreature on the Kelvin scale."<<endl;
    break;
    case 4:
    cout<<"\nEnter the tempreature on the Kelvin scale: ";
    cin>>k;
    cout<<k-273.15<<" it is tempreature on the Celcius scale."<<endl;
    break;
    case 5:
    cout<<"\nEnter the tempreature on the Farenheit scale: ";
    cin>>f;
    cout<<((f-32)/1.8)+273.15<<" it is tempreature on the Kelvin scale."<<endl;
    break;
    case 6:
    cout<<"\nEnter the tempreature on the Kelvin scale: ";
    cin>>k;
    cout<< (k-273.15) * 9/5 + 32<<" it is tempreature on the Farenheit scale."<<endl;
    break;
    }

}
