// For finding sum inside a dynamically given array through code with test cases


// BRUTE FORCE SOLUTION


#include <iostream>
#include<vector>
using namespace std;

int main(){
    int t,found=0,check=0;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        vector<int> arr(N);
        for(int i =0; i < N ; i++){
            cin >> arr[i];
        }
        for(int j=0;j<N-1;j++){
            check++;
            for(int k=j+1;k<N;k++){
                check++;
                if(arr[j]+arr[k] == 10){
                    cout << "YES (" << arr[j] << " & " << arr[k] << ") & Checked time : " << check << endl;
                    found =1;
                }
                if(found){
                    break;
                }
            }
            if(found){break;}
        }
        if(found == 0){cout << "NO" << " & Checked time : " << check << endl;}
    }
    return 0;
}