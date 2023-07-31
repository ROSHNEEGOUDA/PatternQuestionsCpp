
//rectangular pattern
//****
//****
//****
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


//hollow rectangle pattern
//*****
//*   *
//*   *
//*   *
//*****
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(i==1 || i==r || j==1 || j==c)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


//inverted half pyramid(triangle)
//****
//***
//**
//*
//n to 1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


//half pyramid after 180 rotation
//    *
//   **
//  ***
// ****
//*****
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else 
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}


//half pyramid using numbers
//1 
//2 2 
//3 3 3 
//4 4 4 4 
//5 5 5 5 5 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}


//floyd's triangle
//1 
//2 3 
//4 5 6 
//7 8 9 10 
//11 12 13 14 15
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}


//butterfly pattern
//rows 1 to n n n to 1
//*        *
//**      **
//***    ***
//****  ****
//**********
//**********
//****  ****
//***    ***
//**      **
//*        *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


//inverted pattern
//rows 1 to n
//column=n+1-row no.
//elements =col no
//1 2 3 4 5 
//1 2 3 4 
//1 2 3 
//1 2 
//1 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;//for line break
    }
    return 0;
}

//0-1 pattern
//1
//01
//101
//0101
//10101
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}

//Rhombus pattern
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *
//* * * * *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
                cout<<"*";
        }
            cout<<endl;
        
    }
    return 0;
}

//Number pattern
//    1
//   1 2
//  1 2 3
// 1 2 3 4
//1 2 3 4 5
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"j"<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//Palindromic pattern
//      1
//    2 1 2
//  3 2 1 2 3
//4 3 2 1 2 3 4
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int j;
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//Star pattern
//     *
//    ***
//   *****
//  *******
//  *******
//   *****
//    ***
//     *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//zig zag pattern
//   *   *
//  * * * *
// *   *   *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(((i+j)%4==0) or (i==2 && j%4==0))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}