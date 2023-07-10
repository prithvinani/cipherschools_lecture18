#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i;
    cout<<"enter 10 elements: ";
    for ( i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    int j;
    for ( j = 0; j < 9; j++)
    {
        int temp;
    for ( i = 0; i < 10-j; i++)
    {
    if(a[i+1]<a[i]){
        temp = a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    };
}
}
cout<<"the elements after sorting are : ";
for ( i = 0; i < 10; i++)
{
    cout<<a[i]<<" ";
}
    return 0;
}