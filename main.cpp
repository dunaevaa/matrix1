#include <iostream>
using namespace std;
int main (int argc, char* argv[]){
 int k, i;
 cin >> k;
 if (k <= 0){
     cout << "An error has occurred while reading input data" << endl;
     return 0; 
 }
 int *matrix = new int[k];
 for (i = 0; i < k; i++) {
     cin >> matrix[i];
 }
 for (i = 0; i < k / 2; i++) {
     swap (matrix[i], matrix[k-i-1]);
 }
 for (i = 0; i < k; i++) {
     cout << matrix[i] << " ";
 }
 delete [] matrix;
 return 0;
}
