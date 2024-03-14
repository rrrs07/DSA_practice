#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    i=1;

    //1. print pattern 1234 1234 1234
    
    // while (i<=n)
    // {
    //    int j=1;
    //    while (j<=n)
    //    {
    //     cout<<j;
    //     j=j+1;
    //    }
    //    cout<<endl;
    //    i=i+1;
       

    // }

    // 2.print pattern 4321 4321 4321

    // while (i<=n)
    // {
    //    int j=1;
    //    while (j<=n)
    //    {
    //     cout<<n-j+1;
    //     j=j+1;
    //    }
    //    cout<<endl;
    //    i=i+1;
       

    // }

    //3. print 123 456 789

//     int count=1;
//     while (i<=n)
//     {
//        int j=1;
      
//        while (j<=n)
//        {
//         cout << count <<" ";
//         count = count + 1;

//         j=j+1;
//        }
//        cout<<endl;
//        i=i+1;
       

//     }


//4. print * ** *** ****


// while (i<=n)
// {
//    int j=1;
//    while (j<=i)
//    {
//     cout<<"*";
//     j=j+1;
//    }
//    cout<<endl;
//    i=i+1;
   
// }

//5. pattern 1 22 333 4444



// while (i<=n)
// {
//    int j=1;
//    while (j<=i)
//    {
//     cout<<i;
    
//     j=j+1;
//    }
//    cout<<endl;
//    i=i+1;
   
// }

// 6. 1 23 456 7890

// int count=1;


// while (i<=n)
// {
//    int j=1;
//    while (j<=i)
//    {
//     cout<<count;
//     count=count+1;
    
//     j=j+1;
//    }
//    cout<<endl;
//    i=i+1;
   
// }

//7. pattern 1 23 345 4567

   
//    while (i<=n)
//     {
//       int j=1;
//       int value=i;
//       while (j<=i)
//       {
//        cout<<value;
//        value=value+1;
    
//         j=j+1;
//       }
//         cout<<endl;
//         i=i+1;
   
//   }

// 8.  pattern 1 21 321 4321
//    while (i<=n)
//     {
//       int j=1;
      
//       while (j<=i)
//       {
//        cout<<i-j+1;
    
//         j=j+1;
//       }
//         cout<<endl;
//         i=i+1;
   
//   }

//9. pattern AAA BBB CCC


    
    
        // while (i<=n)
        // {
        //     int j=1;
        //     while(j<=n) 
        //     {
        //         char ch = 'A' + i - 1;               
        //         cout<< ch;
        //         j=j+1;
        //     }
        //     cout<<endl;
        //     i=i+1;
        //  }

        // 10. pattern ABC ABC ABC


        // while (i<=n)
        // {
        //     int j=1;
        //     while(j<=n) 
        //     {
        //         char ch = 'A' + j - 1;               
        //         cout<< ch;
        //         j=j+1;
        //     }
        //     cout<<endl;
        //     i=i+1;
        //  }

        //11. pattern ABC DEF GHI

        char ch;
        while (i<=n)
        {
            int j=1;
            char value='A';
            while(j<=n) 
            {
                              
                cout<< value;
                value = value+1;
                j=j+1;
            }
            cout<<endl;
            i=i+1;
         }



}