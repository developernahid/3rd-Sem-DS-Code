#include <bits/stdc++.h>
using namespace std;
int binarySearch(int ar[], int left, int right, int x){
    int mid;
  while(left<=right){
    mid = (left + right)/2;

    if (ar[mid] == x)
      return mid;

    if (ar[mid] < x)
      left = mid + 1;

    else
      right = mid - 1;
  }
  return -1;
}

int main(){
int n;
cout<<"Enter size:";
cin>>n;
int ar[n];
cout<<"Enter elements:";
for (int i = 0; i <n; i++)
{
    cin>>ar[i];
}
int x;
cout<<"Enter value for search:";
cin>>x;
int index=binarySearch(ar,0,n-1,x);
if(index != -1)
cout<<"Index of "<<x<<" is "<<index<<endl;
else
cout<<"Not found"<<endl;

 return 0;
}