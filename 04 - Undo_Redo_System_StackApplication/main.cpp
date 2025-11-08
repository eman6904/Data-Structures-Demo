#include <iostream>
#include<Stack.h>
using namespace std;

int main()
{
    Stack unDo,reDo;

    while(true)
    {

        cout<<"1 - NewTab\n2 - Back <-\n3 - Forword ->\n";

        cout<<"Enter number of command: ";
        int number;
        cin>>number;
        string tabName,currentTab;

        switch(number)
        {
        case 1:
            cout<<"Enter tab name: ";
            cin.ignore();
            getline(cin,tabName);
            unDo.push(tabName);
            cout<<"Welcome in "<<tabName<<".\n";
            cout<<"===================================================\n";
            break;
        case 2:
            if(!unDo.top().empty())
            {
                currentTab = unDo.top();
                unDo.pop();
                reDo.push(currentTab);
                if(!unDo.top().empty())
                    cout<<"Welcome in "<<unDo.top()<<".\n";
                else
                {
                    cout<<"There is no tab in back\n";
                    unDo.push(reDo.top());
                    reDo.pop();
                }
            }
            else
                cout<<"There is no tab in back\n";
            cout<<"===================================================\n";
            break;
        case 3:
            if(!reDo.top().empty())
            {
                currentTab = reDo.top();
                reDo.pop();
                unDo.push(currentTab);
                cout<<"Welcome in "<<unDo.top()<<".\n";
            }
            else
                cout<<"There is no tab in forward\n";
            cout<<"===================================================\n";
            break;
        default:
            cout<<"Invalid command.\n";
            break;
        }
    }
    return 0;
}
