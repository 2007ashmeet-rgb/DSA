#include <iostream>
using namespace std;

int main() {
    int arr[5]={2,3,4};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];  

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Q1.find the minimum and maximum element in an array
#include <iostream>
using namespace std;

int main(){
    int arr[]={1,5,8,4,9,7,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mn = arr[0], mx = arr[0];
    for(int i = 1; i < n; ++i){
        if(arr[i] < mn) mn = arr[i];
        if(arr[i] > mx) mx = arr[i];
    }
    cout << "Minimum: " << mn << "\n";
    cout << "Maximum: " << mx << "\n";
    return 0;
}

// Q2.find the sum of all elements in an array
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<'Enter the size of the array: ';
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cout<<"Enter elements of array : ";
        cin>>arr[i];
    }
    int sum=0;
    for(int i = 0; i < n; ++i){
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}

// Q3.Search the given elements X in the array.If present then return the index else return -1.        Input;arr[]={1,5,6,7,9,2,4,8}   X:6
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 6, 7, 9, 2, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 6;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == X) {
            index = i;
            break;
        }
    }

    cout << index;
    return 0;
}

// Q4. count the number of occurence of the particular element X. Input:arr[]={3,5,8,3,2,1,4,3,6,3,3,5,2,1,7,2}     X:3
#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,5,8,3,2,1,4,3,6,3,3,5,2,1,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int X = 3;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == X) {
            count++;
        }
    }

    cout << "Number of occurrences of " << X << " = " << count << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 40;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == X) {
            index = i;
            break;
        }
    }

    cout << index;
    return 0;
}

// Q.reverse the array. Input:arr[]={10,20,30,40,50,60}   Output:arr[]={60,50,40,30,20,10}
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i=0;
    int j= n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int k = 0; k < n; k++){
        cout << arr[k] << " ";
    }
    return 0;
}

// Q.Find the two elements whose sum is equal to the target=18.   arr=[2,7,11,15,18]
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 18;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Indices: " << i << ", " << j << endl;
                cout << "Elements: " << arr[i] << ", " << arr[j] << endl;
            }
        }
    }

    return 0;
}

// Q.find the duplicate elements in an array. Input:arr[]={1,2,3,4,5,2,1,6,1,5,3} 
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,2,1,6,1,5,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_set<int> printed;

    cout << "Duplicate elements are: ";
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                if(printed.find(arr[i]) == printed.end()) {
                    cout << arr[i] << " ";
                    printed.insert(arr[i]);
                }
                break;
            }
        }
    }
    return 0;
}
