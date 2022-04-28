// For finding sum inside a dynamically given array through code with test cases


// TWO POINTER APPROACH SOLUTION

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t,front=0,rear,found=0,check=0;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        rear = N-1;
        vector<int> arr(N);
        for(int i =0; i < N ; i++){
            cin >> arr[i];
        }

        sort(arr, arr + N);

        while(front < rear){

            if((arr[front] + arr[rear]) > 10){
                rear--;
                check++;
            } 

            else if(arr[front] + arr[rear] < 10){
                front++;
                check++;
            }

            if(arr[front] + arr[rear] == 10){found = 1;break;} 
        }


        if(!found){cout << "NO" << " & Checked time : " << check << endl;
        }
        else{
            cout << "YES (" << arr[front] << " & " << arr[rear] << ") & Checked time : " << check << endl;
        }


    }
    return 0;
}