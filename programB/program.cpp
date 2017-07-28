#include<iostream>
#include<fstream>
using namespace std;

char word[10];
char matr[10];

void copy()
   {
    bool ugual=true;
    ifstream fileone("first.txt");
    ifstream filetwo("second.txt");
    if(fileone)
       {
        if(filetwo)
           {
            while(fileone.eof()==false)
               {
                fileone>>word;
                if(fileone)
                   {
                    filetwo>>matr;
                    if(filetwo)
                       {
                        if(strcmp(word, matr)!=0)
                           ugual=false;
                       }
                    else{
                         filetwo.clear();
                         filetwo.ignore(10000,'\n');
                        }
                   }
                else{
                     fileone.clear();
                     fileone.ignore(10000,'\n');
                    }
               }
           }
       }
    
    if(ugual==true)
       cout<<"The files are the same"<<endl;
    else{
         cout<<"The files are different"<<endl;
        }
   }

int main()
   {
    copy();
    system("PAUSE");
   }
