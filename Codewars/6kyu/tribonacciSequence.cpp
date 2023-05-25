#include <iostream>
#include <vector>
using namespace std;

void print_vec(vector <int> vec) {for (auto num: vec) cout << num << " ";}

std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result {};     // result vector

    // fulfil condition if the 'n' is equal to 0
    if (n == 0) {
        return result;
    }

    // if 'n' is equal 1
    if (n == 1) {
        result.push_back(signature[0]);
        return result;
    }

    // if 'n' is equal 2
    if (n == 2) {
        result.push_back(signature[0]);
        result.push_back(signature[1]);
        return result;
    }

    // push back signature numbers
    result.push_back(signature[0]);
    result.push_back(signature[1]);
    result.push_back(signature[2]);

    // fill in the array/vector
    for (int i {}; i < n-3; i++) {
        int temp_num = result[i]+result[i+1]+result[i+2];
        result.push_back(temp_num);
    }

    return result;
}

int main() {
    // vector <int> signature_numbers {1, 1, 1};
    vector <int> signature_numbers {};
    int position {0};
    vector <int> result_vector = tribonacci(signature_numbers, position);
    print_vec(result_vector);
    cout << endl;

    return 0;
}

/////////////////////////////////////////////////////
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    if(n<3){
       signature.resize(n);
    }
    for(unsigned int i = 3; i<n;i++){
      signature.push_back(signature[i-3]+signature[i-2]+signature[i-1]);
    }
    return signature;
}