#include<iostream>
#include<array>
using namespace std;
int main(){
    int count=1;
    array<int,5> a={3,7,4,2,7};
    int size=a.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++){
        if(a[i]==7){
            cout<<a[i]<<endl;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
    }
    cout<<"Number of times element repeated: "<<count;
}
