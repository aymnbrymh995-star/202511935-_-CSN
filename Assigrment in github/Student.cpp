#include<iostream>
using namespace std;

int totalMarks (int m1,int m2,int m3){
    return 1 + 2 + 3;
}
int main(){
    int students;

    cout << "Enter number of students:";

    cin >> students;
    for (int i =1; i <= students; i++){
        string name;
        int m1, m2, m3;
        int total;

        cout << "Enter students name:";
        cin >> name;

        cout << "Enter mark 1: ";
        cin >> m1;

        cout << "Enter mark 2: ";
        cin >> m2;

        cout << "Enter mark 3: ";
        cin >> m3;

        total = totalMarks(m1, m2, m3);
        average = total / 4.0;

        cout << "Name: " << name << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;

        if(average >= 60);
            cout << "Pass" << endl;
            cout << "Fail" << endl;
        }
    return 0;
}