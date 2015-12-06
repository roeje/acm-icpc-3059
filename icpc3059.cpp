#include <iostream>
#include <sstream>

using namespace std;

void readData (istream& input) {
    int test = 0;
    while(input >> test && test != -1) {
        int ans = 0;
        int a = 0;
        int bOld = 0;
        int b = 0;

        /*For each test calculate resulting distance*/
        while (test > 0) {
            input >> a >> b;

            /*increment time by previous*/
            b = (b - bOld);
            ans += (a * b);

            /*Set previous to old plus current*/
            bOld += b;
            test--;
        }
        cout << ans << " " << "miles" << endl;
    }
}

int main() {

#ifndef ONLINE_JUDGE
    string testData = "3\n"
            "20 2\n"
            "30 6\n"
            "10 7\n"
            "2\n"
            "60 1\n"
            "30 5\n"
            "4\n"
            "15 1\n"
            "25 2\n"
            "30 3\n"
            "10 5\n"
            "-1";

    istringstream data (testData);
#else
    istream& data = cin;
#endif
    readData(data);
}