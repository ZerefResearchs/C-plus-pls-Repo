#include <iostream>
using namespace std;

int main() {
    
int i=1,n;

cin>>n;

while(i<=n) {
    
// First Triangle
    int count1 = n-i+1;
    
    int j=1;
    while(j<=count1) {
        cout<<j<<" ";
        j++;
    }

// Second Triangle
    int star = 2*(i-1);
    
    while(star>0) {
        cout<<"* ";
        star--;
    }
    
// Third Triangle
 
    j=1;
    while(j<=count1) {
        cout<<n-i-j+2<<" ";
        j++;
    }
        
    cout<<endl;
    i++;
}

}