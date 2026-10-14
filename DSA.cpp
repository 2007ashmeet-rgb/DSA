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




//    LAB SHEET 2 - SEARCHING & SORTING
 


// EXERCISE 1: Linear Search

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main1() {
    int a[100], n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter key: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            cout << "Element found at position " << i + 1 << endl;
            return 0;
        }
    }

    cout << "Element not found." << endl;
    return 0;
}

/*
EXERCISE 2: Binary Search
*/
int main2() {
    int a[100], n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter key: ";
    cin >> key;

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == key) {
            cout << "Element found at position " << mid + 1 << endl;
            return 0;
        }
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "Element not found." << endl;
    return 0;
}

/*
EXERCISE 3: Compare Linear Search and Binary Search
*/
int main3() {
    int a[100], n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter key: ";
    cin >> key;

    int linearPosition = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            linearPosition = i;
            break;
        }
    }

    int low = 0, high = n - 1;
    int binaryPosition = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == key) {
            binaryPosition = mid;
            break;
        }
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (linearPosition != -1)
        cout << "Linear Search: Found at position " << linearPosition + 1 << endl;
    else
        cout << "Linear Search: Not found" << endl;

    if (binaryPosition != -1)
        cout << "Binary Search: Found at position " << binaryPosition + 1 << endl;
    else
        cout << "Binary Search: Not found" << endl;

    return 0;
}

/*
EXERCISE 4: Bubble Sort Ascending - display after each pass
*/
int main4() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }

        cout << "After pass " << i + 1 << ": ";
        for (int j = 0; j < n; j++)
            cout << a[j] << " ";
        cout << endl;
    }

    return 0;
}

/*
EXERCISE 5: Bubble Sort Descending
*/
int main5() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] < a[j + 1])
                swap(a[j], a[j + 1]);

    cout << "Descending order: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

/*
EXERCISE 6: Insertion Sort Ascending - display after each pass
*/
int main6() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;

        cout << "After pass " << i << ": ";
        for (int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << endl;
    }

    return 0;
}

/*
EXERCISE 7: Selection Sort Ascending - display minimum each pass
*/
int main7() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minIndex])
                minIndex = j;

        cout << "Minimum selected = " << a[minIndex] << endl;
        swap(a[i], a[minIndex]);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

/*
EXERCISE 8: Merge Sort
*/
void mergeArray(int a[], int low, int mid, int high) {
    int temp[100];
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        mergeArray(a, low, mid, high);
    }
}

int main8() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

/*
EXERCISE 9: Quick Sort using last element as pivot
*/
int partitionArray(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partitionArray(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main9() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

/*
EXERCISE 10: Quick Sort - display array after each partition
*/
int partitionDisplay(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);

    cout << "After partition: ";
    for (int k = 0; k < high + 1; k++)
        cout << a[k] << " ";
    cout << endl;

    return i + 1;
}

void quickSortDisplay(int a[], int low, int high) {
    if (low < high) {
        int p = partitionDisplay(a, low, high);
        quickSortDisplay(a, low, p - 1);
        quickSortDisplay(a, p + 1, high);
    }
}

int main10() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSortDisplay(a, 0, n - 1);

    return 0;
}

/*
EXERCISE 11: Menu-driven Linear / Binary Search
*/
int main11() {
    int a[100], n, key, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "1. Linear Search\n2. Binary Search\nEnter choice: ";
    cin >> choice;

    cout << "Enter key: ";
    cin >> key;

    if (choice == 1) {
        for (int i = 0; i < n; i++) {
            if (a[i] == key) {
                cout << "Found at position " << i + 1 << endl;
                return 0;
            }
        }
        cout << "Not found" << endl;
    }
    else if (choice == 2) {
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (a[mid] == key) {
                cout << "Found at position " << mid + 1 << endl;
                return 0;
            }
            else if (key < a[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        cout << "Not found" << endl;
    }
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}

/*
EXERCISE 12: Menu-driven Bubble / Insertion / Selection Sort
*/
int main12() {
    int a[100], n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (a[j] > a[j + 1])
                    swap(a[j], a[j + 1]);
    }
    else if (choice == 2) {
        for (int i = 1; i < n; i++) {
            int key = a[i];
            int j = i - 1;

            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];
                j--;
            }

            a[j + 1] = key;
        }
    }
    else if (choice == 3) {
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;

            for (int j = i + 1; j < n; j++)
                if (a[j] < a[minIndex])
                    minIndex = j;

            swap(a[i], a[minIndex]);
        }
    }
    else {
        cout << "Invalid choice" << endl;
        return 0;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

/*
EXERCISE 13: Merge Sort then Binary Search
*/
int main13() {
    int a[100], n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == key) {
            cout << "Element found at position " << mid + 1 << endl;
            return 0;
        }
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "Element not found" << endl;
    return 0;
}

/*
EXERCISE 14: Compare two sorting algorithms by comparisons
*/
int main14() {
    int a[100], b[100], c[100], n;
    int bubbleComparisons = 0;
    int selectionComparisons = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            bubbleComparisons++;
            if (b[j] > b[j + 1])
                swap(b[j], b[j + 1]);
        }
    }

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            selectionComparisons++;
            if (c[j] < c[minIndex])
                minIndex = j;
        }

        swap(c[i], c[minIndex]);
    }

    cout << "Bubble Sort comparisons = " << bubbleComparisons << endl;
    cout << "Selection Sort comparisons = " << selectionComparisons << endl;

    return 0;
}

/*
EXERCISE 15: Three sorting algorithms with complexities
*/
int main15() {
    cout << "Bubble Sort: Best O(n), Average O(n^2), Worst O(n^2), Space O(1)\n";
    cout << "Insertion Sort: Best O(n), Average O(n^2), Worst O(n^2), Space O(1)\n";
    cout << "Selection Sort: Best O(n^2), Average O(n^2), Worst O(n^2), Space O(1)\n";

    return 0;
}



//    LAB SHEET 3 - SORTING
  
// EXERCISE 1: Bubble Sort Ascending - before and after each pass

int main16() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }

        cout << "After pass " << i + 1 << ": ";
        for (int j = 0; j < n; j++)
            cout << a[j] << " ";
        cout << endl;
    }

    return 0;
}

/*
EXERCISE 2: Bubble Sort Descending
*/
int main17() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] < a[j + 1])
                swap(a[j], a[j + 1]);

    cout << "Descending order: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

/*
EXERCISE 3: Insertion Sort Ascending
*/
int main18() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;

        cout << "After pass " << i << ": ";
        for (int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << endl;
    }

    return 0;
}

/*
EXERCISE 4: Selection Sort Ascending
*/
int main19() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minIndex])
                minIndex = j;

        cout << "Minimum in pass " << i + 1 << " = " << a[minIndex] << endl;
        swap(a[i], a[minIndex]);
    }

    return 0;
}

/*
EXERCISE 5: Merge Sort using separate functions
*/
int main20() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

/*
EXERCISE 6: Quick Sort using last element as pivot
*/
int main21() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

/*
EXERCISE 7: Quick Sort - display after every partition
*/
int main22() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSortDisplay(a, 0, n - 1);

    return 0;
}

/*
EXERCISE 8: All five sorting algorithms
*/
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minIndex])
                minIndex = j;

        swap(a[i], a[minIndex]);
    }
}

int main23() {
    int a[100], b[100], c[100], d[100], e[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = c[i] = d[i] = e[i] = a[i];
    }

    bubbleSort(a, n);
    insertionSort(b, n);
    selectionSort(c, n);
    mergeSort(d, 0, n - 1);
    quickSort(e, 0, n - 1);

    cout << "Bubble Sort: ";
    printArray(a, n);
    cout << "Insertion Sort: ";
    printArray(b, n);
    cout << "Selection Sort: ";
    printArray(c, n);
    cout << "Merge Sort: ";
    printArray(d, n);
    cout << "Quick Sort: ";
    printArray(e, n);

    return 0;
}

/*
EXERCISE 9: Compare comparisons and swaps
*/
int main24() {
    int a[100], b[100], c[100], n;
    int bc = 0, bs = 0;
    int ic = 0, is = 0;
    int sc = 0, ss = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = c[i] = a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            bc++;
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                bs++;
            }
        }
    }

    for (int i = 1; i < n; i++) {
        int key = b[i];
        int j = i - 1;

        while (j >= 0) {
            ic++;
            if (b[j] > key) {
                b[j + 1] = b[j];
                is++;
                j--;
            }
            else
                break;
        }

        b[j + 1] = key;
    }

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            sc++;
            if (c[j] < c[minIndex])
                minIndex = j;
        }

        if (minIndex != i) {
            swap(c[i], c[minIndex]);
            ss++;
        }
    }

    cout << "Bubble: comparisons = " << bc << ", swaps = " << bs << endl;
    cout << "Insertion: comparisons = " << ic << ", shifts = " << is << endl;
    cout << "Selection: comparisons = " << sc << ", swaps = " << ss << endl;

    return 0;
}

/*
EXERCISE 10: Merge Sort vs Quick Sort complexity
*/
int main25() {
    cout << "Merge Sort: Best O(n log n), Average O(n log n), Worst O(n log n), Space O(n)\n";
    cout << "Quick Sort: Best O(n log n), Average O(n log n), Worst O(n^2), Space O(log n) average\n";
    return 0;
}

/*
EXERCISE 11: Menu-driven five sorting algorithms
*/
int main26() {
    int a[100], n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "1. Bubble\n2. Insertion\n3. Selection\n4. Merge\n5. Quick\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
        bubbleSort(a, n);
    else if (choice == 2)
        insertionSort(a, n);
    else if (choice == 3)
        selectionSort(a, n);
    else if (choice == 4)
        mergeSort(a, 0, n - 1);
    else if (choice == 5)
        quickSort(a, 0, n - 1);
    else {
        cout << "Invalid choice";
        return 0;
    }

    cout << "Sorted array: ";
    printArray(a, n);

    return 0;
}

/*
EXERCISE 12: Ascending then descending using Bubble Sort
*/
int main27() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bubbleSort(a, n);

    cout << "Ascending: ";
    printArray(a, n);

    for (int i = 0; i < n / 2; i++)
        swap(a[i], a[n - 1 - i]);

    cout << "Descending: ";
    printArray(a, n);

    return 0;
}

/*
EXERCISE 13: Count comparisons
*/
int main28() {
    int a[100], b[100], c[100], n;
    int bc = 0, ic = 0, sc = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = c[i] = a[i];
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++) {
            bc++;
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }

    for (int i = 1; i < n; i++) {
        int key = b[i];
        int j = i - 1;

        while (j >= 0) {
            ic++;
            if (b[j] > key) {
                b[j + 1] = b[j];
                j--;
            }
            else
                break;
        }
        b[j + 1] = key;
    }

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            sc++;
            if (c[j] < c[minIndex])
                minIndex = j;
        }

        swap(c[i], c[minIndex]);
    }

    cout << "Bubble comparisons = " << bc << endl;
    cout << "Insertion comparisons = " << ic << endl;
    cout << "Selection comparisons = " << sc << endl;

    return 0;
}

/*
EXERCISE 14: Best-case behavior of Bubble and Insertion
*/
int main29() {
    int a[100], b[100], n;
    int bubbleComparisons = 0;
    int insertionComparisons = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter already sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            bubbleComparisons++;
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    for (int i = 1; i < n; i++) {
        int key = b[i];
        int j = i - 1;

        if (j >= 0) {
            insertionComparisons++;
        }

        while (j >= 0 && b[j] > key) {
            b[j + 1] = b[j];
            j--;
        }

        b[j + 1] = key;
    }

    cout << "Bubble comparisons = " << bubbleComparisons << endl;
    cout << "Insertion comparisons = " << insertionComparisons << endl;

    return 0;
}

/*
EXERCISE 15: Quick Sort on sorted, reverse-sorted and random arrays
*/
int main30() {
    int sorted[] = {1, 2, 3, 4, 5};
    int reverse[] = {5, 4, 3, 2, 1};
    int random[] = {3, 1, 5, 2, 4};

    cout << "Sorted array: ";
    quickSort(sorted, 0, 4);
    printArray(sorted, 5);

    cout << "Reverse-sorted array: ";
    quickSort(reverse, 0, 4);
    printArray(reverse, 5);

    cout << "Random array: ";
    quickSort(random, 0, 4);
    printArray(random, 5);

    cout << "Last-element pivot can give O(n^2) on sorted/reverse-sorted input.\n";

    return 0;
}


/* ============================================================
   LAB SHEET 4 - LINKED LIST
   ============================================================ */

struct LNode {
    int data;
    LNode* next;

    LNode(int value) {
        data = value;
        next = NULL;
    }
};

void displayList(LNode* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

/*
EXERCISE 1: Create and display singly linked list
*/
int main31() {
    LNode* head = new LNode(10);
    head->next = new LNode(20);
    head->next->next = new LNode(30);

    displayList(head);

    return 0;
}

/*
EXERCISE 2: Insert at beginning
*/
int main32() {
    LNode* head = new LNode(20);
    head->next = new LNode(30);

    LNode* newNode = new LNode(10);
    newNode->next = head;
    head = newNode;

    displayList(head);

    return 0;
}

/*
EXERCISE 3: Insert at end
*/
int main33() {
    LNode* head = new LNode(10);
    head->next = new LNode(20);

    LNode* newNode = new LNode(30);
    LNode* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

    displayList(head);

    return 0;
}

/*
EXERCISE 4: Insert at a given position
*/
int main34() {
    LNode* head = new LNode(10);
    head->next = new LNode(20);
    head->next->next = new LNode(30);

    int value, position;
    cout << "Enter value: ";
    cin >> value;
    cout << "Enter position: ";
    cin >> position;

    if (position == 1) {
        LNode* newNode = new LNode(value);
        newNode->next = head;
        head = newNode;
    }
    else {
        LNode* temp = head;

        for (int i = 1; i < position - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            cout << "Invalid position";
            return 0;
        }

        LNode* newNode = new LNode(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    displayList(head);

    return 0;
}

/*
EXERCISE 5: Delete from beginning
*/
int main35() {
    LNode* head = new LNode(10);
    head->next = new LNode(20);

    if (head == NULL) {
        cout << "List is Empty";
        return 0;
    }

    LNode* temp = head;
    head = head->next;
    delete temp;

    displayList(head);

    return 0;
}

/*
EXERCISE 6: Delete from end
*/
int main36() {
    LNode* head = new LNode(10);
    head->next = new LNode(20);
    head->next->next = new LNode(30);

    if (head == NULL) {
        cout << "List is Empty";
        return 0;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
    }
    else {
        LNode* temp = head;

        while (temp->next->next != NULL)
            temp = temp->next;

        delete temp->next;
        temp->next = NULL;
    }

    displayList(head);

    return 0;
}

/*
EXERCISE 7: Delete from a given position
*/
int main37() {
    LNode* head = new LNode(10);
    head->next = new LNode(20);
    head->next->next = new LNode(30);

    int position;
    cout << "Enter position to delete: ";
    cin >> position;

    if (head == NULL) {
        cout << "List is Empty";
        return 0;
    }

    if (position == 1) {
        LNode* temp = head;
        head = head->next;
        delete temp;
    }
    else {
        LNode* temp = head;

        for (int i = 1; i < position - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL || temp->next == NULL) {
            cout << "Invalid position";
            return 0;
        }

        LNode* deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;
    }

    displayList(head);

    return 0;
}

/*
EXERCISE 8: Search in linked list
*/
int main38() {
    LNode* head = new LNode(10);
    head->next = new LNode(20);
    head->next->next = new LNode(30);

    int key;
    cout << "Enter key: ";
    cin >> key;

    LNode* temp = head;
    int position = 1;

    while (temp != NULL) {
        if (temp->data == key) {
            cout << "Found at position " << position;
            return 0;
        }

        temp = temp->next;
        position++;
    }

    cout << "Not found";

    return 0;
}

/*
EXERCISE 9: Count nodes
*/
int main39() {
    LNode* head = new LNode(10);
    head->next = new LNode(20);
    head->next->next = new LNode(30);

    int count = 0;
    LNode* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    cout << "Total nodes = " << count;

    return 0;
}

/*
EXERCISE 10: Maximum and minimum
*/
int main40() {
    LNode* head = new LNode(10);
    head->next = new LNode(30);
    head->next->next = new LNode(20);

    int maximum = head->data;
    int minimum = head->data;

    LNode* temp = head->next;

    while (temp != NULL) {
        if (temp->data > maximum)
            maximum = temp->data;

        if (temp->data < minimum)
            minimum = temp->data;

        temp = temp->next;
    }

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum << endl;

    return 0;
}

/*
EXERCISE 11: Reverse singly linked list
*/
int main41() {
    LNode* head = new LNode(10);
    head->next = new LNode(20);
    head->next->next = new LNode(30);

    LNode* previous = NULL;
    LNode* current = head;

    while (current != NULL) {
        LNode* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    head = previous;

    displayList(head);

    return 0;
}

/*
EXERCISE 12: Sort linked list ascending
*/
int main42() {
    LNode* head = new LNode(30);
    head->next = new LNode(10);
    head->next->next = new LNode(20);

    for (LNode* i = head; i != NULL; i = i->next) {
        for (LNode* j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data)
                swap(i->data, j->data);
        }
    }

    displayList(head);

    return 0;
}

/*
EXERCISE 13: Menu-driven linked list
*/
int main43() {
    LNode* head = NULL;
    int choice, value;

    do {
        cout << "\n1.Insert Beginning\n2.Insert End\n3.Delete Beginning\n";
        cout << "4.Delete End\n5.Search\n6.Display\n7.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;

            LNode* newNode = new LNode(value);
            newNode->next = head;
            head = newNode;
        }
        else if (choice == 2) {
            cout << "Enter value: ";
            cin >> value;

            LNode* newNode = new LNode(value);

            if (head == NULL)
                head = newNode;
            else {
                LNode* temp = head;

                while (temp->next != NULL)
                    temp = temp->next;

                temp->next = newNode;
            }
        }
        else if (choice == 3) {
            if (head == NULL)
                cout << "List is Empty";
            else {
                LNode* temp = head;
                head = head->next;
                delete temp;
            }
        }
        else if (choice == 4) {
            if (head == NULL)
                cout << "List is Empty";
            else if (head->next == NULL) {
                delete head;
                head = NULL;
            }
            else {
                LNode* temp = head;

                while (temp->next->next != NULL)
                    temp = temp->next;

                delete temp->next;
                temp->next = NULL;
            }
        }
        else if (choice == 5) {
            cout << "Enter value: ";
            cin >> value;

            LNode* temp = head;
            int position = 1;
            bool found = false;

            while (temp != NULL) {
                if (temp->data == value) {
                    cout << "Found at position " << position;
                    found = true;
                    break;
                }

                temp = temp->next;
                position++;
            }

            if (!found)
                cout << "Not found";
        }
        else if (choice == 6) {
            displayList(head);
        }
        else if (choice != 7) {
            cout << "Invalid choice";
        }

    } while (choice != 7);

    return 0;
}

/*
EXERCISE 14: Doubly Linked List insertion and deletion
*/
struct DNode {
    int data;
    DNode* prev;
    DNode* next;

    DNode(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

int main44() {
    DNode* first = new DNode(10);
    DNode* second = new DNode(20);

    first->next = second;
    second->prev = first;

    cout << "Doubly Linked List: ";
    cout << first->data << " <-> " << second->data << endl;

    // Delete second node
    first->next = NULL;
    delete second;

    cout << "After deletion: " << first->data << endl;

    return 0;
}

/*
EXERCISE 15: Circular Linked List traversal and insertion
*/
int main45() {
    LNode* first = new LNode(10);
    LNode* second = new LNode(20);
    LNode* third = new LNode(30);

    first->next = second;
    second->next = third;
    third->next = first;

    LNode* newNode = new LNode(40);
    newNode->next = first;
    third->next = newNode;

    cout << "Circular List: ";

    LNode* temp = first;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != first);

    return 0;
}


/* ============================================================
   LAB SHEET 5 - STACK
   ============================================================ */

#define MAX 5

/*
EXERCISE 1: Stack using array - Push, Pop, Peek, Display
*/
int stackArr[MAX];
int top = -1;

void pushStack(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }

    top++;
    stackArr[top] = value;
}

void popStack() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return;
    }

    cout << stackArr[top] << " popped\n";
    top--;
}

void peekStack() {
    if (top == -1) {
        cout << "Stack is Empty\n";
        return;
    }

    cout << "Top element = " << stackArr[top] << endl;
}

void displayStack() {
    if (top == -1) {
        cout << "Stack is Empty\n";
        return;
    }

    for (int i = top; i >= 0; i--)
        cout << stackArr[i] << " ";

    cout << endl;
}

int main46() {
    pushStack(10);
    pushStack(20);
    pushStack(30);

    displayStack();
    peekStack();
    popStack();
    displayStack();

    return 0;
}

/*
EXERCISE 2: Demonstrate Stack Overflow
*/
int main47() {
    top = -1;

    for (int i = 1; i <= 6; i++)
        pushStack(i * 10);

    return 0;
}

/*
EXERCISE 3: Demonstrate Stack Underflow
*/
int main48() {
    top = -1;
    popStack();
    return 0;
}

/*
EXERCISE 4: Peek operation
*/
int main49() {
    top = -1;

    pushStack(10);
    pushStack(20);

    peekStack();

    return 0;
}

/*
EXERCISE 5: Menu-driven Stack
*/
int main50() {
    top = -1;

    int choice, value;

    do {
        cout << "\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                pushStack(value);
                break;

            case 2:
                popStack();
                break;

            case 3:
                peekStack();
                break;

            case 4:
                displayStack();
                break;

            case 5:
                cout << "Program terminated\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}

/*
EXERCISE 6: Stack of integers using array
*/
int main51() {
    top = -1;

    pushStack(5);
    pushStack(10);
    pushStack(15);

    cout << "Stack: ";
    displayStack();

    return 0;
}

/*
EXERCISE 7: Reverse a string using Stack
*/
int main52() {
    char stack[100];
    int topString = -1;
    string text;

    cout << "Enter string: ";
    cin >> text;

    for (char ch : text)
        stack[++topString] = ch;

    cout << "Reversed string: ";

    while (topString >= 0)
        cout << stack[topString--];

    return 0;
}

/*
EXERCISE 8: Balanced parentheses
*/
int main53() {
    char stack[100];
    int topBracket = -1;
    string text;

    cout << "Enter expression: ";
    cin >> text;

    for (char ch : text) {
        if (ch == '(' || ch == '[' || ch == '{') {
            stack[++topBracket] = ch;
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (topBracket == -1) {
                cout << "Not Balanced";
                return 0;
            }

            char open = stack[topBracket--];

            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{')) {
                cout << "Not Balanced";
                return 0;
            }
        }
    }

    if (topBracket == -1)
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}

/*
EXERCISE 9: Infix to Postfix
*/
int precedence(char ch) {
    if (ch == '+' || ch == '-')
        return 1;

    if (ch == '*' || ch == '/')
        return 2;

    if (ch == '^')
        return 3;

    return 0;
}

int main54() {
    char stack[100];
    int topOperator = -1;
    string infix;

    cout << "Enter infix expression: ";
    cin >> infix;

    cout << "Postfix: ";

    for (char ch : infix) {
        if (isalnum(ch)) {
            cout << ch;
        }
        else if (ch == '(') {
            stack[++topOperator] = ch;
        }
        else if (ch == ')') {
            while (topOperator != -1 && stack[topOperator] != '(')
                cout << stack[topOperator--];

            topOperator--;
        }
        else {
            while (topOperator != -1 &&
                   precedence(stack[topOperator]) >= precedence(ch))
                cout << stack[topOperator--];

            stack[++topOperator] = ch;
        }
    }

    while (topOperator != -1)
        cout << stack[topOperator--];

    return 0;
}

/*
EXERCISE 10: Evaluate Postfix expression
*/
int main55() {
    int stack[100];
    int topValue = -1;
    string postfix;

    cout << "Enter postfix expression using single-digit operands: ";
    cin >> postfix;

    for (char ch : postfix) {
        if (isdigit(ch)) {
            stack[++topValue] = ch - '0';
        }
        else {
            int b = stack[topValue--];
            int a = stack[topValue--];

            if (ch == '+')
                stack[++topValue] = a + b;
            else if (ch == '-')
                stack[++topValue] = a - b;
            else if (ch == '*')
                stack[++topValue] = a * b;
            else if (ch == '/')
                stack[++topValue] = a / b;
        }
    }

    cout << "Result = " << stack[topValue];

    return 0;
}

/*
EXERCISE 11: Infix to Prefix
*/
int main56() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    // Simple method for expressions with +,-,*,/,^ and brackets.
    string reversed = "";

    for (int i = infix.length() - 1; i >= 0; i--) {
        if (infix[i] == '(')
            reversed += ')';
        else if (infix[i] == ')')
            reversed += '(';
        else
            reversed += infix[i];
    }

    char stack[100];
    int topOperator = -1;
    string postfix = "";

    for (char ch : reversed) {
        if (isalnum(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            stack[++topOperator] = ch;
        }
        else if (ch == ')') {
            while (topOperator != -1 && stack[topOperator] != '(')
                postfix += stack[topOperator--];

            topOperator--;
        }
        else {
            while (topOperator != -1 &&
                   precedence(stack[topOperator]) > precedence(ch))
                postfix += stack[topOperator--];

            stack[++topOperator] = ch;
        }
    }

    while (topOperator != -1)
        postfix += stack[topOperator--];

    cout << "Prefix: ";

    for (int i = postfix.length() - 1; i >= 0; i--)
        cout << postfix[i];

    return 0;
}

/*
EXERCISE 12: Two stacks in one array
*/
int main57() {
    int a[10];
    int top1 = -1;
    int top2 = 10;

    // Stack 1
    a[++top1] = 10;
    a[++top1] = 20;

    // Stack 2
    a[--top2] = 90;
    a[--top2] = 80;

    cout << "Stack 1: ";
    for (int i = top1; i >= 0; i--)
        cout << a[i] << " ";

    cout << "\nStack 2: ";
    for (int i = top2; i < 10; i++)
        cout << a[i] << " ";

    return 0;
}

/*
EXERCISE 13: Stack using class
*/
class StackClass {
    int a[5];
    int top;

public:
    StackClass() {
        top = -1;
    }

    void push(int value) {
        if (top == 4)
            cout << "Overflow\n";
        else
            a[++top] = value;
    }

    void pop() {
        if (top == -1)
            cout << "Underflow\n";
        else
            cout << a[top--] << " popped\n";
    }

    void display() {
        for (int i = top; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main58() {
    StackClass s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    s.pop();
    s.display();

    return 0;
}

/*
EXERCISE 14: Stack use in recursion
*/
void recursiveFunction(int n) {
    if (n == 0)
        return;

    cout << n << " ";
    recursiveFunction(n - 1);
}

int main59() {
    recursiveFunction(5);
    return 0;
}

/*
EXERCISE 15: Time complexity of stack operations
*/
int main60() {
    cout << "Push = O(1)\n";
    cout << "Pop = O(1)\n";
    cout << "Peek = O(1)\n";
    cout << "Display = O(n)\n";
    cout << "Array space = O(n)\n";

    return 0;
}


/* ============================================================
   LAB SHEET 6 - QUEUE
   ============================================================ */

class SimpleQueue {
    int q[5];
    int front;
    int rear;

public:
    SimpleQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == 4) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1)
            front = 0;

        q[++rear] = value;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << q[front] << " deleted\n";
        front++;

        if (front > rear)
            front = rear = -1;
    }

    void peek() {
        if (front == -1)
            cout << "Queue is Empty\n";
        else
            cout << "Front = " << q[front] << endl;
    }

    void display() {
        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";

        cout << endl;
    }

    int count() {
        if (front == -1)
            return 0;

        return rear - front + 1;
    }

    void search(int value) {
        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        for (int i = front; i <= rear; i++) {
            if (q[i] == value) {
                cout << "Found\n";
                return;
            }
        }

        cout << "Not found\n";
    }

    void maxMin() {
        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        int maximum = q[front];
        int minimum = q[front];

        for (int i = front + 1; i <= rear; i++) {
            if (q[i] > maximum)
                maximum = q[i];

            if (q[i] < minimum)
                minimum = q[i];
        }

        cout << "Maximum = " << maximum << endl;
        cout << "Minimum = " << minimum << endl;
    }
};

/*
EXERCISE 1: Queue using array
*/
int main61() {
    SimpleQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
    q.dequeue();
    q.peek();

    return 0;
}

/*
EXERCISE 2: Enqueue at Rear
*/
int main62() {
    SimpleQueue q;

    q.enqueue(10);
    q.enqueue(20);

    cout << "Queue after insertion: ";
    q.display();

    return 0;
}

/*
EXERCISE 3: Dequeue from Front
*/
int main63() {
    SimpleQueue q;

    q.enqueue(10);
    q.enqueue(20);

    q.dequeue();
    q.display();

    return 0;
}

/*
EXERCISE 4: Peek
*/
int main64() {
    SimpleQueue q;

    q.enqueue(10);
    q.enqueue(20);

    q.peek();

    return 0;
}

/*
EXERCISE 5: Display Queue
*/
int main65() {
    SimpleQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    return 0;
}

/*
EXERCISE 6: Queue Overflow
*/
int main66() {
    SimpleQueue q;

    for (int i = 1; i <= 6; i++)
        q.enqueue(i * 10);

    return 0;
}

/*
EXERCISE 7: Queue Underflow
*/
int main67() {
    SimpleQueue q;

    q.dequeue();

    return 0;
}

/*
EXERCISE 8: Menu-driven Queue
*/
int main68() {
    SimpleQueue q;
    int choice, value;

    do {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.peek();
                break;

            case 4:
                q.display();
                break;

            case 5:
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}

/*
EXERCISE 9: Count queue elements
*/
int main69() {
    SimpleQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Number of elements = " << q.count();

    return 0;
}

/*
EXERCISE 10: Search queue
*/
int main70() {
    SimpleQueue q;
    int key;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Enter key: ";
    cin >> key;

    q.search(key);

    return 0;
}

/*
EXERCISE 11: Maximum and minimum in Queue
*/
int main71() {
    SimpleQueue q;

    q.enqueue(30);
    q.enqueue(10);
    q.enqueue(50);
    q.enqueue(20);

    q.maxMin();

    return 0;
}

/*
EXERCISE 12: Reverse Queue
*/
int main72() {
    int q[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> q[i];

    for (int i = 0; i < n / 2; i++)
        swap(q[i], q[n - 1 - i]);

    cout << "Reversed queue: ";
    for (int i = 0; i < n; i++)
        cout << q[i] << " ";

    return 0;
}

/*
EXERCISE 13: Circular Queue using array
*/
class CircularQueue {
    int q[5];
    int front;
    int rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if ((rear + 1) % 5 == front) {
            cout << "Circular Queue Overflow\n";
            return;
        }

        if (front == -1)
            front = 0;

        rear = (rear + 1) % 5;
        q[rear] = value;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Circular Queue Underflow\n";
            return;
        }

        cout << q[front] << " deleted\n";

        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % 5;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Empty\n";
            return;
        }

        int i = front;

        while (true) {
            cout << q[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % 5;
        }

        cout << endl;
    }
};

int main73() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
    q.dequeue();
    q.enqueue(40);

    q.display();

    return 0;
}

/*
EXERCISE 14: Queue using Linked List
*/
struct QNode {
    int data;
    QNode* next;

    QNode(int value) {
        data = value;
        next = NULL;
    }
};

int main74() {
    QNode* frontQ = NULL;
    QNode* rearQ = NULL;

    QNode* newNode = new QNode(10);
    frontQ = rearQ = newNode;

    newNode = new QNode(20);
    rearQ->next = newNode;
    rearQ = newNode;

    cout << "Queue: ";
    QNode* temp = frontQ;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

/*
EXERCISE 15: Linear Queue vs Circular Queue
*/
int main75() {
    cout << "Linear Queue: simple implementation, but unused front spaces may be wasted.\n";
    cout << "Circular Queue: reuses empty spaces using circular indexing.\n";
    cout << "Enqueue: O(1)\n";
    cout << "Dequeue: O(1)\n";
    cout << "Display: O(n)\n";

    return 0;
}


/* ============================================================
   LAB SHEET 7 - TREES / BST
   ============================================================ */

struct TNode {
    int data;
    TNode* left;
    TNode* right;

    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void inorder(TNode* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(TNode* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(TNode* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

TNode* insertBST(TNode* root, int value) {
    if (root == NULL)
        return new TNode(value);

    if (value < root->data)
        root->left = insertBST(root->left, value);
    else if (value > root->data)
        root->right = insertBST(root->right, value);

    return root;
}

bool searchBST(TNode* root, int key) {
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return searchBST(root->left, key);

    return searchBST(root->right, key);
}

TNode* minNode(TNode* root) {
    TNode* temp = root;

    while (temp != NULL && temp->left != NULL)
        temp = temp->left;

    return temp;
}

TNode* deleteBST(TNode* root, int key) {
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteBST(root->left, key);
    else if (key > root->data)
        root->right = deleteBST(root->right, key);
    else {
        if (root->left == NULL) {
            TNode* temp = root->right;
            delete root;
            return temp;
        }

        if (root->right == NULL) {
            TNode* temp = root->left;
            delete root;
            return temp;
        }

        TNode* temp = minNode(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }

    return root;
}

int treeHeight(TNode* root) {
    if (root == NULL)
        return 0;

    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);

    return 1 + max(leftHeight, rightHeight);
}

int countNodes(TNode* root) {
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int countLeaves(TNode* root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return countLeaves(root->left) + countLeaves(root->right);
}

/*
EXERCISE 8: Create Binary Tree and display structure
*/
int main76() {
    TNode* root = new TNode(1);
    root->left = new TNode(2);
    root->right = new TNode(3);

    cout << "Root = " << root->data << endl;
    cout << "Left child = " << root->left->data << endl;
    cout << "Right child = " << root->right->data << endl;

    return 0;
}

/*
EXERCISE 9: Inorder Traversal
*/
int main77() {
    TNode* root = new TNode(1);
    root->left = new TNode(2);
    root->right = new TNode(3);

    inorder(root);

    return 0;
}

/*
EXERCISE 10: Preorder Traversal
*/
int main78() {
    TNode* root = new TNode(1);
    root->left = new TNode(2);
    root->right = new TNode(3);

    preorder(root);

    return 0;
}

/*
EXERCISE 11: Postorder Traversal
*/
int main79() {
    TNode* root = new TNode(1);
    root->left = new TNode(2);
    root->right = new TNode(3);

    postorder(root);

    return 0;
}

/*
EXERCISE 12: All three traversals
*/
int main80() {
    TNode* root = new TNode(1);
    root->left = new TNode(2);
    root->right = new TNode(3);

    cout << "Inorder: ";
    inorder(root);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    return 0;
}

/*
EXERCISE 13: Create BST by inserting n elements
*/
int main81() {
    TNode* root = NULL;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insertBST(root, value);
    }

    cout << "BST Inorder: ";
    inorder(root);

    return 0;
}

/*
EXERCISE 14: Search in BST
*/
int main82() {
    TNode* root = NULL;

    root = insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 70);
    insertBST(root, 20);
    insertBST(root, 40);

    int key;
    cout << "Enter key: ";
    cin >> key;

    if (searchBST(root, key))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}

/*
EXERCISE 15: BST insertion and inorder
*/
int main83() {
    TNode* root = NULL;

    root = insertBST(root, 50);
    root = insertBST(root, 30);
    root = insertBST(root, 70);
    root = insertBST(root, 20);
    root = insertBST(root, 40);

    cout << "Inorder: ";
    inorder(root);

    return 0;
}

/*
EXERCISE 16: Delete leaf node
*/
int main84() {
    TNode* root = NULL;

    root = insertBST(root, 50);
    root = insertBST(root, 30);
    root = insertBST(root, 70);

    root = deleteBST(root, 30);

    cout << "After deleting leaf: ";
    inorder(root);

    return 0;
}

/*
EXERCISE 17: Delete node having one child
*/
int main85() {
    TNode* root = NULL;

    root = insertBST(root, 50);
    root = insertBST(root, 30);
    root = insertBST(root, 20);

    root = deleteBST(root, 30);

    cout << "After deletion: ";
    inorder(root);

    return 0;
}

/*
EXERCISE 18: Delete node having two children using inorder successor
*/
int main86() {
    TNode* root = NULL;

    root = insertBST(root, 50);
    root = insertBST(root, 30);
    root = insertBST(root, 70);
    root = insertBST(root, 20);
    root = insertBST(root, 40);
    root = insertBST(root, 60);
    root = insertBST(root, 80);

    root = deleteBST(root, 50);

    cout << "After deleting 50: ";
    inorder(root);

    return 0;
}

/*
EXERCISE 19: Height of Binary Tree
*/
int main87() {
    TNode* root = NULL;

    root = insertBST(root, 50);
    root = insertBST(root, 30);
    root = insertBST(root, 70);
    root = insertBST(root, 20);
    root = insertBST(root, 40);

    cout << "Height = " << treeHeight(root);

    return 0;
}

/*
EXERCISE 20: Count total nodes
*/
int main88() {
    TNode* root = NULL;

    root = insertBST(root, 50);
    root = insertBST(root, 30);
    root = insertBST(root, 70);

    cout << "Total nodes = " << countNodes(root);

    return 0;
}

/*
EXERCISE 21: Count leaf nodes
*/
int main89() {
    TNode* root = NULL;

    root = insertBST(root, 50);
    root = insertBST(root, 30);
    root = insertBST(root, 70);
    root = insertBST(root, 20);
    root = insertBST(root, 40);

    cout << "Leaf nodes = " << countLeaves(root);

    return 0;
}

/*
EXERCISE 22: Menu-driven BST
*/
int main90() {
    TNode* root = NULL;
    int choice, value;

    do {
        cout << "\n--- BST MENU ---\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Inorder\n";
        cout << "4. Preorder\n";
        cout << "5. Postorder\n";
        cout << "6. Delete\n";
        cout << "7. Height\n";
        cout << "8. Count Nodes\n";
        cout << "9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                root = insertBST(root, value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;

                if (searchBST(root, value))
                    cout << "Found\n";
                else
                    cout << "Not found\n";
                break;

            case 3:
                cout << "Inorder: ";
                inorder(root);
                cout << endl;
                break;

            case 4:
                cout << "Preorder: ";
                preorder(root);
                cout << endl;
                break;

            case 5:
                cout << "Postorder: ";
                postorder(root);
                cout << endl;
                break;

            case 6:
                cout << "Enter value: ";
                cin >> value;
                root = deleteBST(root, value);
                break;

            case 7:
                cout << "Height = " << treeHeight(root) << endl;
                break;

            case 8:
                cout << "Total nodes = " << countNodes(root) << endl;
                break;

            case 9:
                cout << "Program terminated\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 9);

    return 0;
}


/*
============================================================
QUICK COMPLEXITY CHEAT SHEET
============================================================

Searching:
Linear Search   Best O(1), Average O(n), Worst O(n), Space O(1)
Binary Search   Best O(1), Average/Worst O(log n), Space O(1)

Sorting:
Bubble Sort     Best O(n), Average/Worst O(n^2), Space O(1)
Insertion Sort  Best O(n), Average/Worst O(n^2), Space O(1)
Selection Sort  Best/Average/Worst O(n^2), Space O(1)
Merge Sort      Best/Average/Worst O(n log n), Space O(n)
Quick Sort      Best/Average O(n log n), Worst O(n^2), Space O(log n) average

Linked List:
Insert Beginning O(1)
Insert End       O(n)
Delete Beginning O(1)
Delete End       O(n)
Search           O(n)
Display          O(n)

Stack:
Push    O(1)
Pop     O(1)
Peek    O(1)
Display O(n)

Queue:
Enqueue O(1)
Dequeue O(1)
Peek    O(1)
Display O(n)

BST:
Search   Average O(log n), Worst O(n)
Insert   Average O(log n), Worst O(n)
Delete   Average O(log n), Worst O(n)
Height   O(n)
Count    O(n)

============================================================
*/


/* ============================================================
   MASTER MENU - RUN ANY EXERCISE FROM THIS SINGLE FILE
   ============================================================ */
int main() {
    int lab, exercise;

    cout << "\n==============================================\n";
    cout << " DSA LABSHEETS 2 TO 7 - MASTER MENU\n";
    cout << "==============================================\n";
    cout << "2. Lab Sheet 2 - Searching & Sorting\n";
    cout << "3. Lab Sheet 3 - Sorting\n";
    cout << "4. Lab Sheet 4 - Linked List\n";
    cout << "5. Lab Sheet 5 - Stack\n";
    cout << "6. Lab Sheet 6 - Queue\n";
    cout << "7. Lab Sheet 7 - Trees / BST\n";
    cout << "Enter lab sheet number: ";
    cin >> lab;
    cout << "Enter exercise number: ";
    cin >> exercise;

    if (lab == 2) {
        switch (exercise) {
            case 1: return main1();
            case 2: return main2();
            case 3: return main3();
            case 4: return main4();
            case 5: return main5();
            case 6: return main6();
            case 7: return main7();
            case 8: return main8();
            case 9: return main9();
            case 10: return main10();
            case 11: return main11();
            case 12: return main12();
            case 13: return main13();
            case 14: return main14();
            case 15: return main15();
        }
    }
    else if (lab == 3) {
        switch (exercise) {
            case 1: return main16();
            case 2: return main17();
            case 3: return main18();
            case 4: return main19();
            case 5: return main20();
            case 6: return main21();
            case 7: return main22();
            case 8: return main23();
            case 9: return main24();
            case 10: return main25();
            case 11: return main26();
            case 12: return main27();
            case 13: return main28();
            case 14: return main29();
            case 15: return main30();
        }
    }
    else if (lab == 4) {
        switch (exercise) {
            case 1: return main31();
            case 2: return main32();
            case 3: return main33();
            case 4: return main34();
            case 5: return main35();
            case 6: return main36();
            case 7: return main37();
            case 8: return main38();
            case 9: return main39();
            case 10: return main40();
            case 11: return main41();
            case 12: return main42();
            case 13: return main43();
            case 14: return main44();
            case 15: return main45();
        }
    }
    else if (lab == 5) {
        switch (exercise) {
            case 1: return main46();
            case 2: return main47();
            case 3: return main48();
            case 4: return main49();
            case 5: return main50();
            case 6: return main51();
            case 7: return main52();
            case 8: return main53();
            case 9: return main54();
            case 10: return main55();
            case 11: return main56();
            case 12: return main57();
            case 13: return main58();
            case 14: return main59();
            case 15: return main60();
        }
    }
    else if (lab == 6) {
        switch (exercise) {
            case 1: return main61();
            case 2: return main62();
            case 3: return main63();
            case 4: return main64();
            case 5: return main65();
            case 6: return main66();
            case 7: return main67();
            case 8: return main68();
            case 9: return main69();
            case 10: return main70();
            case 11: return main71();
            case 12: return main72();
            case 13: return main73();
            case 14: return main74();
            case 15: return main75();
        }
    }
    else if (lab == 7) {
        switch (exercise) {
            case 8: return main76();
            case 9: return main77();
            case 10: return main78();
            case 11: return main79();
            case 12: return main80();
            case 13: return main81();
            case 14: return main82();
            case 15: return main83();
            case 16: return main84();
            case 17: return main85();
            case 18: return main86();
            case 19: return main87();
            case 20: return main88();
            case 21: return main89();
            case 22: return main90();
        }
    }

    cout << "Invalid lab sheet or exercise number." << endl;
    return 0;
}
