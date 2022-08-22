#include <iostream>

using namespace std;

void insertElement(int arr[], int size, int element){
    
    int index;
    cout<<"enter index of array where new elemnt is to be inserted"<<endl;
    cin>>index;
    
    for(int i = size; i > index; i--){
        
        arr[i] = arr[i - 1];
    }
    
    arr[index] = element;
    
    //printing the array 
    
    for(int i = 0;i<size;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}

int main()
{
    int arr[] = {3,6,2,8,4};
    
    int size = 6;
    
    insertElement(arr,size,7);
    

    return 0;
}
