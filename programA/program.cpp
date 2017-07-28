#include<iostream>
#include<fstream>
using namespace std;

char word[10];
char matr[10];

void copy()
   {
    ifstream fileda("first.txt");
    ofstream filea("second.txt");
    if(fileda)
       {
        if(filea)
           {
            while(fileda.eof()==false)
               {
                fileda>>word;
                if(fileda)
                   filea<<word<<endl;
                else{
                     fileda.clear();
                     fileda.ignore(10000,'\n');
                    }
               }
           }
       }
   }

int main()
   {
    copy();
    system("PAUSE");
   }
