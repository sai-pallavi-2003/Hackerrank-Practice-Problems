/* Right Triangle Pattern:

*
**
***
****

*/

#include<iostream>
using namespace std;
void RightTrianglePattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"rows: ";
    cin>>n;
    RightTrianglePattern(n);
}

