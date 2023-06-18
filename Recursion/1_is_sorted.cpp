#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int v[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(v[0] > v[1]){
        return false;
    }
    bool isSmallest = is_sorted(v+1, size-1);
    return isSmallest;
}


int main(){
    int a[] = {1, 2, 3, 4, 5};
    cout<<is_sorted(a, 5)<<endl;
}