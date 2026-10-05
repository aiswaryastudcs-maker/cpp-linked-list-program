#include <iostream>
using namespace std;

class Coach {
public:
    int coachNo;
    Coach* next;

    Coach(int n) {
        coachNo = n;
        next = NULL;
    }
};

int main() {
    Coach* head = NULL;
    Coach* temp = NULL;

    int n, coachNo;

    cout << "Enter number of coaches: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter coach number: ";
        cin >> coachNo;

        Coach* newCoach = new Coach(coachNo);

        if (head == NULL) {
            head = newCoach;
            temp = newCoach;
        } else {
            temp->next = newCoach;
            temp = newCoach;
        }
    }

    cout << "\nTrain Coaches:\n";

    temp = head;
    while (temp != NULL) {
        cout << "Coach " << temp->coachNo << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}
