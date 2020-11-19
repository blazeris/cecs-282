//
// Created by Nathan
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> //for accumulator operations
#include <list>

using namespace std;

int main() {
    cout << "------------ PROBLEM 1 ------------" << endl;

    // an array of doubles
    double arr[] = { 1.1, 2.2, 3.3, 2.2, 4.4 };

    // Determine the array size
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    // initialize vector v1 to array arr
    vector<double> v1(arr, arr + arrSize);


    // Display the contents of vector v1
    cout << "v1: ";
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    // Sorting the Vector in Ascending order
    sort(v1.begin(), v1.end());

    // Display the content of vector v1 after sorting
    cout << "v1: ";
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    // Reversing the Vector v1
    reverse(v1.begin(), v1.end());

    // Display the content of vector v1
    cout << "v1: ";
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    // Display the maximum element of vector v1
    cout << "Max: " << *max_element(v1.begin(), v1.end()) << endl;

    // Display the minimum element of vector v1
    cout << "Min: " << *min_element(v1.begin(), v1.end()) << endl;

    // Display the accumulation of all elements in vector v1
    // Starting the summation from 0
    cout << "Sum: ";
    double sum = accumulate(v1.begin(), v1.end(), 0.0);
    cout << sum << endl;

    // Counts the occurrences of 2.2 from 1st to last element
    const int occurences = count(v1.begin(), v1.end(), 2.2);

    // Display the counts
    cout << "Count of 2.2: " << occurences << endl;

    // Delete second element of vector
    v1.erase(v1.begin() + 1);

    // Display the v1 after erasing the element
    cout << "v1: ";
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    // Remove the duplicate occurrences
    vector<double>::iterator u = unique(v1.begin(), v1.end());
    v1.resize(distance(v1.begin(), u));

    // Display the v1 after duplicates removed
    cout << "v1: ";
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "------------ PROBLEM 2 ------------" << endl;

    //Create 2 lists called list1 and list2. Store integer numbers.
    int arr1[] = { 40, 30, 20, 10 };
    int arr2[] = { 15, 20, 25, 30, 35 };

    list<int> list1;
    list<int> list2;

    //Determine the array size of arr1 and arr2
    int arr1size = sizeof(arr1)/sizeof(arr1[0]);
    int arr2size = sizeof(arr2)/sizeof(arr2[0]);
    cout << "arr1 size: " << arr1size << endl;
    cout << "arr2 size: " << arr2size << endl;

    //Push elements of array arr1 into list1
    list1.insert(list1.begin(), begin(arr1), end(arr1));


    //Push elements of array arr2 into list2
    list2.insert(list2.begin(), begin(arr2), end(arr2));

    // reverse list1: 10 20 30 40
    list2.reverse();

    // merge list2 into list1
    list1.merge(list2);

    // remove duplicate 20 and 30 from list 1
    list1.sort();
    list1.unique();

    //Diplay the content of list1 using iterator
    list<int>::iterator i;
    for(i = list1.begin(); i != list1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    list<int>::reverse_iterator j;
    //Display the list1 in reverse
    for(j = list1.rbegin(); j != list1.rend(); j++){
        cout << *j << " ";
    }
    cout << endl;

    //Find 25 in the list. If it's found, display "Found 25";otherwise, display "Not found 25"
    if(find(list1.begin(), list1.end(), 25) != list1.end()){
        cout << "Found 25" << endl;
    }
    else {
        cout << "Not found 25" << endl;
    }

    return 0;
}
