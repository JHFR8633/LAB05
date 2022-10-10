#include <iostream>
#include <string>
#include <vector>
#include "StringData.h"
using namespace std;

int linear_search(vector<string> container, string element);
int binary_search(vector<string> container, string element);

int linear_search(vector<string> container, string element){
    for(int i = 0; i < container.size(); i++){
        if(container[i] == element){return i;}}
    return -1;}

int binary_search(vector<string> container, string element){
    int max_index = container.size() -1; int min_index = 0;
    // While the middle and max haven't touched each other
    while(min_index <= max_index){ int middle_index = min_index + (max_index - min_index ) / 2;
        if(element == container[middle_index]){ return middle_index;}
        else if(element < container[middle_index]){max_index = middle_index - 1;}
        else if(element > container[middle_index]){min_index = middle_index + 1;}}
    return -1;}

int main(){
    int index; int start; int end;
    vector<string> element_list = {"not_here", "mzzzz", "aaaaa"}; vector<string> data_list = getStringData();

    for(string element : element_list){
        // Binary Search
        start = systemTimeNanoseconds();
        index = binary_search(data_list, element); end = systemTimeNanoseconds();
        cout << "Binary Search Time for " << element << " " << end - start << " resulting in: " << index << endl;
        // Linear Search
        start = systemTimeNanoseconds();
        index = linear_search(data_list, element); end = systemTimeNanoseconds();
        cout << "Linear Search Time for " << element << " " << end - start << " resulting in: " << index << endl;
    }
}