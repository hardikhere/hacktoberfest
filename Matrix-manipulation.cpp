#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;
int  main()
{
    int t;
    int x,y;
    int r,c,q,cnt=0;
    int *p;
    cin>>t;
    while(t--)
    {
        cin>>r>>c>>q;
        int a[r][c]={0};
        p=&a[0][0];

        for(int i=0;i<c;i++)
            a[0][i]=0;

        while(q--)
        {
            cin>>x>>y;
            x--;
            y--;
        }

        for(int i=0;i<r*c;i++)
        {
            int item;
            item=*p;
            if(item%2!=0)
            cnt++;
            p++;
        }

        cout<<cnt<<endl;    
    }

    for(int i=0;i<r*c;i++)
    {
        int item;
        item=*p;
        if(item%2!=0)
        cnt++;
        p++;
    }

    cout<<cnt<<endl;    
}

