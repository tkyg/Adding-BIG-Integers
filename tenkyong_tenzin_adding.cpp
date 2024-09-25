#include <iostream>
#include <string>
using namespace std;

string add(string a, string b){

  string result = "";
  int lengthA = a.length();
  int lengthB = b.length();
  int carry = 0;

  while (lengthA > 0 || lengthB > 0 || carry > 0){

    int digitA;
    if (lengthA > 0){
      digitA = a[lengthA - 1] - '0';
      lengthA--;
    } else {
      digitA = 0;
    }

    int digitB;
    if (lengthB > 0){
      digitB = b[lengthB - 1] - '0';
      lengthB--;
    } else {
      digitB = 0;
    }

    int sum = digitA + digitB + carry;
    carry = sum / 10;
    result = char(sum % 10 + '0') + result;
  }

  return result;
}

int main(){

  char num_1[100];
  char num_2[100];

  cout << "Enter two integers (up to 100 digits): ";
  cin >> num_1 >> num_2;
  cout << "Sum equals to: " << add(num_1, num_2) << endl;

  return 0;
}
