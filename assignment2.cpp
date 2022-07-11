#include<iostream>
#include<vector>
using namespace std;

long long MaxPairWise(const vector<int>&a){
    long long result=0;
    int n=a.size();
    int max_index1=-1;
    int max_index2=-1;
    for(int i=0; i<n; i++){
        if(max_index1==-1 || a[i]>a[max_index1]){
            max_index1=i;
        }
    }

    for(int j=0; j<n; j++){
        if((max_index1!=j) && (max_index2==-1 || a[j]>a[max_index2])){
            max_index2=j;
        }
    }
    return ((long long)a[max_index1])*(long long)a[max_index2];
    
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    long long result = MaxPairWise(a);
    cout<<result<<endl;
    return 0;
}