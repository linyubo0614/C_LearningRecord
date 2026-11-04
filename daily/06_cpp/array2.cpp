#include <iostream>
using namespace std;

double avg(int arr[],int size);

int main()
{
    int arr[3]={1,2,3};

    int avg1=avg(arr,3);
    cout << avg1 << endl;
    return 0;
}

double avg(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }

    return sum/size;
}