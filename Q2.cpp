/*Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
Grade Criteria:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59

Sample Input:- Enter the score: 85
Sample Output:- Grade: B"*/

#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the score: "<< endl;
    cin >> a;

    if(a>=90 && a<=100){
        cout << "Grade: A"<<endl;
    }
     else if(a>=80 && a<=89){
        cout << "Grade: B"<<endl;
    }
     else if(a>=70 && a<=79){
        cout << "Grade: C"<<endl;
    }
     else if(a>=60 && a<=69){
        cout << "Grade: D"<<endl;
    }
    else{
        cout << "Grade: F"<<endl;
    }
     
}