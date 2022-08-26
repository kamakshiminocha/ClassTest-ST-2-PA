#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,count;
    // 'n' will contain the no. of elements.
    cout<<"Enter no. of elements:";
    cin>>n;
    // 'set[n]' will contain all the entered elements. 'set[n]' is an array of size n (as, we want to store only n elements).
    // Avoid writing set[50] or set[100] etc. By writing this we are wasting computer memory, use only that much amount of space which is required.
    int set[n];
    cout<<"\nEnter the elements:";
    for(i=0; i<n; i++)
    {
       cin>>set[i];
    }
    
    /* we want to print only 1 entry of repeated number. For this purpose, we have used 'flag[n]'. If flag[j] is equal to 1 then it means, we have already considered set[j] element for counting the frequency of a repeated number. If flag[j] is equal to 0 then it means we haven't considered set[j] element for counting the frequency of a repeated number.*/
    int flag[n]={0};          // Here, we have initialized all the blocks of the 'flag' array with 0.
    cout<<"\nRepeated Numbers with their frequency:";
    for(i=0; i<n; i++)
    {
      count=0;
      if(flag[i]!=1)       // if element set[i] is not considered for counting the frequency of a repeated number
      {
         for(j=0; j<n; j++)
         {
            if(set[i]==set[j])
            {
              count++;        
              flag[j]=1;     // set flag[j] to 1, to avoid more than 1 entry of repeated number in the output
            }
         }
         if(count>1)      // if no. of occurrences of element set[i] > 1 (or if the element set[i] is repeated number)
         {
           cout<<"\n"<<set[i]<<" -> "<<count;
         }
      }
    }
return 0;
}