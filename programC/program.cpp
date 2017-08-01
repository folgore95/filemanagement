#include<iostream>
#include<fstream>
using namespace std;

float temperature;
char city[10];

void function()
   {
    ofstream temp("temperature.txt", ios::app);
    if(temp)
       {
        ofstream med("tempMedia.txt", ios::app);
        if(med)
           {
            for(int j=0; j<10; j++)
               {
                float media=0;
                cout<<"Insert the city':"<<endl;
                fflush(stdin);
                gets(city);
                temp<<city<<'\t';
                for(int i=0; i<10; i++)
                   {
                    cout<<"Insert "<<i+1<<" the temperature:"<<endl;
                    cin>>temperature;
                    media=media+temperature;
                    temp<<temperature<<'\t';
                   }
                temp<<endl;
                cout<<endl;
                
                media=media/2;
                med<<city<<'\t'<<media<<endl;
               }
           }
        else{cout<<"Error"<<endl;}
       }
    else{cout<<"Error"<<endl;}
   }

int main()
   {
    function();
    system("PAUSE");
   }
   
