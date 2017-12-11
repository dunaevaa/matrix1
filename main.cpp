#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
 int k, i;
 cin >> k;
 if (k <= 0){
     cout << "An error has occurred while reading input data" << endl;
     return 0; 
 }
 int *n = new int[a];
 for (i = 0; i < k; i++) {
     cin >> n[i];
 }
 for (i = 0; i < k / 2; i++) {
     swap (n[i], n[k - i - 1]);
 }
 for (i = 0; i < k; i++) {
     cout << m[i] << " ";
 }
 delete [] m;
 return 0;
}
