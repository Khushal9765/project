#include<iostream>
#include<cstdlib>
using namespace std;
int main ()
{
    string name;
    char input;
    int score;
    int inputuser;
    cout<<"enter your name        ";
    getline(cin,name );
    cout<<endl;
    do
    {
        srand(0);
        int variable=rand()%100+1;
        cout<<"enter any number in between range 1 to 100         ";
        cin>>inputuser;
        cout<<endl;
        if (inputuser==variable)
        {
            cout<<"congratulation ! you gussed the corret number"<<endl;
            score++;
        }
        else
        {
        cout<<"sorry,you guessed wrong number Try again"<<endl;
        }
        cout<<"would you like to try again Y/N            ";
        cin>>input;
        cout<<endl;

    }
    while(input!='N');
            cout<<"your score is          "<<score<<endl;
}