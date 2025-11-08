#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    pair<string,string>call;
    Queue center;

    while(true)
    {
        cout<<"1 - Receive Call\n2 - Answer call\n";
        cout<<"Enter number of command:\n";
        int number;
        cin>>number;
        switch(number)
        {
        case 1:
            cout<<"Enter name: ";
            cin.ignore();
            getline(cin,call.first);

            cout<<"Enter phone number: ";
            getline(cin,call.second);

            center.push(call);
            cout<<"call added successfully.\n";
            cout<<"========================================================\n";
            break;
        case 2:
            if(center.isEmpty())
                cout<<"There is no calls yet.\n";
            else
            {
                cout<<"call of "<<center.front().first<<" of phone number: "
                <<center.front().second<<" is answered successfully\n";
                center.pop();
            }
            cout<<"=============================================================\n";
            break;
        default:
            cout<<"Invalid command\n";
            break;

        }
    }
    return 0;
}
