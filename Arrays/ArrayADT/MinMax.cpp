#include<iostream>
using namespace std;
struct Array {
    int *A;
    int size;
    int length;
};
Array create(){
    Array arr;
    cout<<"Enter the size of the array : ";
    cin>>arr.size;
    cout<<"Enter the length of the array: ";
    cin>>arr.length;
    arr.A= new int[arr.size];
    for(int i = 0; i<arr.length;i++){
        cout<<"Enter the elements of the array: ";
        cin>>arr.A[i];
    }
    return arr;
}
int max(Array arr)
{
    int max = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (max < arr.A[i])
        {
            max = arr.A[i];
        }
    }
    return max;
}
int min(Array arr)
{
    int min = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (min > arr.A[i])
        {
            min = arr.A[i];
        }
    }
    return min;
}
int sum(Array arr)
{
    int total = 0;
    for (int i = 0; i < arr.length; i++)
    {
        total = total + arr.A[i];
    }
    return total;
}
float average(Array arr)
{
    return (float)sum(arr) / arr.length;
}
int main(){

return 0;
}