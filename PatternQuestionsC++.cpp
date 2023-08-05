
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

//Alphabet Diamond pattern
//    A
//   ABC
//  ABCDE
// ABCDEFG
//ABCDEFGHI
// ABCDEFG
// ABCDE
//  ABC
//   A
#include <iostream>
using namespace std;
int main()
{
    int n=5;
//to print upper triangle
for(int line=1;line<=n;line++)
{
    int no_of_spaces=(n-line);
    for(int k=0;k<no_of_spaces;k++)
    {
        cout<<" ";
    }
    int no_of_ch=2*line-1;
    for(int j=0;j<no_of_ch;j++)
        {
            char ch=('A'+ j);
            cout<<ch;
        }
        cout<<endl;
}
//loop to print lower triangle
for(int line=n+1;line<2*n-1;line++)
{
    int no_of_spaces=(line-n);
    for(int k=0;k<no_of_spaces;k++)
    {
        cout<<" ";
    }
    int no_char=2*(2*n-line)-1;
    for(int j=0;j<no_char;j++)
    {
        char ch1=('A' + j);
        cout<<ch1;
    }
    cout<<endl;
}
return 0;
}

//  *
//  *
//*****
//  *
//  *
#include <iostream>
using namespace std;
int main()
{
    int n=5;
for(int line=0;line<n;line++)
{
    for(int i=0;i<n;i++)
    {
       
        if(i==n/2) cout<<"*";
        else if(line==n/2) cout<<"*";
        else cout<<" ";
    }
    cout<<endl;
}
return 0;
}

