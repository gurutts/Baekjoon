#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int N; cin >> N;

    while (N--) {
        string s; cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << '\n';
    }

    return 0;
}