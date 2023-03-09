#include<bits/stdc++.h>
using namespace std;
void printF(int ind,vector<int> &ds,int arr[],int n)
{
    if(ind==n)// vetor<int>::iterator it ; syntax for iterator (points to memory where element is present )
    {
       for(auto it : ds )
      {
        cout<<it<<" ";
      }
      cout<<endl;
      return ;
    }
    //take or pick the psrticular index into subsequence
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    ds.pop_back()

    // not pick,or not takeondition,this element is not added to your subsequence
    printF(ind+1,ds,arr,n);
}
int main()
{
    int arr[]={3,1,2};
    int n=3;

    vector<int>ds;
    printF(0,ds,arr,n);

}