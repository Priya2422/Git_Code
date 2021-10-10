 #include <iostream>
 using namespace std;
    int main()
        {
        int a[50], size, i, large, small;
        cout<<"Enter the size of the array: ";
        cin>>size;
        cout<<"Enter the"<<size<<" elements of the array:\n";
        for(i = 0; i < size; i++)
        cin>>a[i];
        large = a[0];
        for(i = 1; i < size; i++)
        {
         if(large < a[i])  
        {
          large = a[i]; 
        }
        }
        cout<<"The largest element is: "<<large;
        small = a[0];  
        for(i = 1; i < size; i++) 
        { 
         if(small>a[i])  
        {
            small = a[i];
        }
        }
        cout<<"\nThe smallest element is: "<< small;
        return 0;
        }