#include <iostream>
#include <vector>
using namespace std;

void linear_search(vector<string> container){
    for(int i = 0; i < container.size(); i++){
        cout << container;
    }
}

void binary_search(vector<string> container){
    int max_index = container.size() -1;
    int min_index = 0;
}

int main(){
    vector<string> ok = {"Helpppp", "ok"};
    linear_search(ok);
}