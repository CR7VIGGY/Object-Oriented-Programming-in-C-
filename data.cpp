#include<bits/stdc++.h>
using namespace std;

class Bank
{
    public :
        string name;
        int acn,bal;
        int amt,flag,suc=0,unsuc=0;
        Bank(string nam,int ac,int balance)
        {
            name = nam;
            acn = ac;
            bal = balance;
        }
        
        
        void display()
        {
            cout<<"\n"<<name;
            cout<<"\t"<<acn;
            cout<<"\t"<<bal<<"\n";
        }
        
        void withdraw()
        {
            
            cout<<"enter the amount to wihtdraw";
            cin>>amt;
            if(amt <= bal)
            {
                bal = bal - amt;
                cout<<"successful transaction";
                suc++;
            }
            else
            {
                cout<<"bal is less , unsuccessful transaction";
                unsuc++;
            }
            
            
        }
       
};

int main()
{
    Bank *sbi[100];
    Bank *find;
    int i,j,k,count,ch,sno=0;
    string name;
    int acn,bal,no;
    int x[10],chk=0,flag =0;
    do
    {
        cout<<"PRESS 1:NEW LOGIN\nPRESS 2:WITHDRAW\nPRESS 3:DISPLAY ALL\nPRESS 4:DISPLAY SUCCESSFUL/UNSUC TRANSCN\n";
        cin>>ch;
        switch(ch)
        {
            case 1 : AC : cout<<"Enter Ac No :";
                     cin>>acn;
                     //a/c check
                     if(sno == 0)
                     {
                        x[chk] = acn; 
                        chk++;
                        goto LOOP;
                     }
                     else if(sno == 1)
                     {
                        if(acn == x[0])
                        {
                            cout<<"\naccount exists already\n";
                            chk--;
                            goto AC;
                        }
                        else
                        {
                            x[chk] = acn;
                            chk++;
                        }
                    
                     }
                     else 
                     {
                        for(i = 0 ; i < sno ; i++)
                        {
                            if(acn == x[i])
                            {
                                cout<<"\naccount no. already exists";
                                flag = 1;
                                break;
                            }
                            else
                            {flag = 0;}
                        }
                        if(flag == 1)
                        {
                            goto AC;
                        }
                        else
                        {
                        x[chk] = acn;
                        chk++;
                            goto LOOP;
                        }
                     }
                     
                     
                     
                     LOOP : cout<<"\nenter Name:";
                     cin>>name;
                     cout<<"\nenter ur balance:";
                     cin>>bal;
                     sno++;
                     sbi[sno] = new Bank(name,acn,bal);
                     
                     break;
                     
            case 2 : cout<<"enter account no.";
                     cin>>no;
                     for(i = 1 ; i <= sno ; i++)
                     {
                        if(sbi[i]->acn == no)
                        {
                            sbi[i]->withdraw();
                            break;
                        }
                        else
                        {
                            flag = 1;
                            continue;
                        }
                     }
                     if(flag == 1)
                     cout<<"account no. do not exist";
                     
                     break;
            case 3 : for(i = 1 ; i <= sno ; i++)
                     {
                        sbi[i]->display();
                     }
                     break;
            case 4 : cout<<find->suc;
                     cout<<find->unsuc;
        }
    }
    while(ch!=5);
    return 0;
}
    

