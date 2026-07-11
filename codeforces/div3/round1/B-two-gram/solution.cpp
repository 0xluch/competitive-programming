#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main() {
    // Optimize standard input/output speeds
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    do {
        cin >> n;
    } while (n < 2 || n > 100);
    
    string s;
    do {
        cin >> s;
    } while (s.length() != n);
    
    map<string, int> counts;
    string max_gram = "";
    int max_count = 0;

    for (int i = 0; i < n - 1; i++) {
        string gram = s.substr(i, 2);
        counts[gram]++;
        
        if (counts[gram] > max_count) {
            max_count = counts[gram];
            max_gram = gram;
        }
    }

    for (char &c : max_gram) {
        c = toupper(c);
    }
    
    cout << max_gram << "\n";
    return 0;
}
