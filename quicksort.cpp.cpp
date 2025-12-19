#include<iostream>

using namespace std;

int partisen( vector<int> &vec, int st, int end){
    
    int idx = st - 1, pivod = vec[end];
    
    for(int j=st;j<end;j++){
        
        if(vec[j]<= pivod){
            idx++;
            swap(vec[idx],vec[j]);
        }
    }
    
    swap(vec[idx + 1],vec[end]);
    return idx + 1;
    
}


void quicksort(vector<int> &vec, int st, int end){
    
    if(st<end){
        
        int pi = partisen(vec,st,end);
        
        quicksort(vec,st,pi - 1);
        quicksort(vec,pi + 1,end);
    }
}


int main(){
    
    vector<int>  vec = { 3,5,7,1,2,9,4};
    int n = vec.size();
    
    quicksort(vec , 0 , n - 1);
    
    for (auto i : vec) {
        cout << i << " ";
    
    }
    return 0;
}
























