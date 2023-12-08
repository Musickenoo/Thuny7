#include <iostream>
#include <string>
using namespace std;

int main(){
  string x ,movie,timer,text;
    int year; 
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,x);
    cout << "Fahsai: Wow!!! " << x << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cin >> year;
    cin.ignore();
    cout << x << ": ";
    cout << "Fahsai: I think you may be GEAR "<< (year/10000000)-(12) <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    getline(cin,movie);
    cout << x << ": ";
    cout << "Fahsai: So....which day are you free to go with me?\n";
    getline(cin,timer);
    cout << x << ": ";
    cout << "Fahsai: "<<timer <<"....that is OK!!! I'm looking forward to watching "<< movie << " with you.\n";
    getline(cin,text) ;
    cout << x << ": ";
    cout << "Fahsai: 555+ see you "<< timer << ". Bye Bye \\(^ ^)/";

    return 0;
}