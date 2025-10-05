#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Friend {
    string name;
    int arabic, math, science, english;

    int total() const {
        return arabic + math + science + english;
    }
};

int main() {
    int N;
    cin >> N;

    vector<Friend> friends(N);


    for (int i = 0; i < N; ++i) {
        cin >> friends[i].name >> friends[i].arabic >> friends[i].math >> friends[i].science >> friends[i].english;
    }


    sort(friends.begin(), friends.end(), [](const Friend &a, const Friend &b) {
        if (a.total() != b.total())
            return a.total() > b.total();
        return a.name < b.name;
    });


    for (const auto &f : friends) {
        cout << f.name << " " << f.arabic << " " << f.math << " " << f.science << " " << f.english << endl;
    }

    return 0;
}
