/*
int main()
{
    int n;
    cin >> n;

    vector <int> a;

    // считывание
    for (int i = 0; i < n; i += 1)
    {
        int temp;
        cin >> temp;
        if (temp > 0)
        {
            a.push_back(temp);
        }
    }

    // обработка и вывод
    for (int i = a.size() - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}
*/

/*
#include <iostream>
#include <string>

using namespace std;

int main() {
    int document_count;
    cin >> document_count;
    string message = to_string(document_count) + " documents found"s;

    if (document_count == 0) {
        cout << "No documents found" << endl;
    }
    else if (document_count == 1) {
        cout << "One document found" << endl;
    }
    else {
        cout << message;
    }
}
*/

/*
#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;

    if (x < y) {
        for (int i = x; i <= y; ++i) {
            std::cout << i << std::endl;
        }
    }
    else if (x > y) {
        for (int i = x; i >= y; --i) {
            std::cout << i << std::endl;
        }
    }
    else {
        std::cout << x << std::endl;
    }
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, word = ""s;
    getline(cin, s);

    for (int i = 0; i <= s.length(); ++i) {

        if (s[i] == '\0') {
            cout << "[" << word << "]" << endl;
            break;
        }

        else if (s[i] != ' ') {
            word += s[i];
        }

        else if (s[i] == ' ') {
            cout << "[" << word << "]" << endl;
            cout << "[]" << endl;
            word = ""s;
        }
    }
}
*/

/*
#include <iostream>
#include <string>

using namespace std;

int main() {
    string query, word = "";

    getline(cin, query);

    for (int i = 0; i < query.size(); ++i) {

        if (query[i] == ' ') {
            cout << "[" << word << "]" << endl;
            word = ""s;
        }

        else {
            word += query[i];
        }
    }

    cout << "[" << word << "]" << endl;
}
*/

/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string query, word = ""s;;
    vector <string> words;
    getline(cin, query);

    for (int i = 0; i < query.size(); ++i) {

        if (query[i] == ' ') {
            words.push_back(word);
            word = ""s;
        } else {
            word = word + query[i];
        }
    }

    words.push_back(word);

    for (string word : words) {
        cout << "[" << word << "]" << endl;
    }
}
*/

/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int q;
    cin >> q;
    vector <bool> is_nervous;

    for (int i = 0; i < q; ++i) {
        string operation_code;
        cin >> operation_code;

        if (operation_code == "WORRY_COUNT"s) {
            int worry_count = 0;
            for (auto id : is_nervous) {
                if (id == true) {
                    worry_count += 1;
                }
            }
            cout << worry_count << endl;
        }

        else {

            if (operation_code == "COME"s) {
                int k;
                cin >> k;
                if (k >= 0) {
                    is_nervous.resize(is_nervous.size() + k, false);
                }
                else {
                    // Сомнительно. Изначально: (int i = 0; i >= number; --i)
                    for (int i = 0; i > k; --i) {
                        is_nervous.resize(is_nervous.size() - 1);
                    }
                }
            }

            else if (operation_code == "WORRY"s) {
                int person_index;
                cin >> person_index;
                if (is_nervous[person_index] == false) {
                    is_nervous[person_index] = true;
                }
            }

            else if (operation_code == "QUIET"s) {
                int person_index;
                cin >> person_index;
                if (is_nervous[person_index] == true) {
                    is_nervous[person_index] = false;
                }
            }
        }
    }
}
*/

/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> SplitIntoWords(string text) {
    vector<string> words;
    string word;

    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            words.push_back(word);
            word = ""s;
        }
        else { word += text[i]; }
    }
    words.push_back(word);
    return words;
}

int main() {
    string query;
    getline(cin, query);

    for (string word : SplitIntoWords(query)) {
        cout << '[' << word << ']' << endl;
    }
}
*/

/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Factorial(int x) {

    if (x < 0) {
        return 1;
    }

    else {
        int factorial = 1;
        for (int i = 1; i <= x; ++i) {
            factorial = factorial * i;
        }
        return factorial;
    }
}

int main() {
    cout << Factorial(3) << endl;
}
*/

/*
#include <iostream>
#include <string>
#include <vector>

bool IsPalindrom(std::string s) {

    for (size_t i = 0; i < s.size() / 2; ++i) {
        // s[s.size() - i - 1] — символ симметричный  s[i]

        if (s[i] != s[s.size() - i - 1]) {
            return false;  // если они не совпадают, строка — не палиндром
        }
    }
    return true;
}

std::vector<std::string> PalindromFilter(std::vector<std::string> words, int min_length) {
    std::vector<std::string> result;
    // перебираем все элементы вектора

    for (std::string s : words) {
        if (s.size() >= min_length && IsPalindrom(s)) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::vector<std::string> words = { "weew", "nun", "level", "deed", "sagas", "peep" };
    int n;
    std::cin >> n;
    std::vector<std::string> palindroms = PalindromFilter(words, n);

    for (auto el : palindroms) { std::cout << "Вывод: " << el << "..." << std::endl; }
    return 0;
}

*/

/*
#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int CalculateSimilarity(vector<string> first, vector<string> second) {
    set <string> st;
    for (int i = 0; i < first.size(); i++) {
        st.insert(first[i]);
    }
    for (int i = 0; i < second.size(); i++) {
        st.insert(second[i]);
    }
    return first.size() + second.size() - st.size();
}

vector<string> SplitIntoWords(string text) {
    vector<string> words;
    string word;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            words.push_back(word);
            word = "";
        }
        else { word += text[i]; }
    }
    words.push_back(word);
    return words;
}

int main() {
    string query, description;
    getline(cin, query);
    getline(cin, description);

    cout << CalculateSimilarity(SplitIntoWords(query), SplitIntoWords(description)) << endl;
    return 0;
}
*/

/*
#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

vector<string> SplitIntoWords(string text) {
    vector<string> words;
    string word;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            words.push_back(word);
            word = "";
        }
        else {
            word += text[i];
        }
    }
    words.push_back(word);
    return words;
}

int main() {
    string query;
    getline(cin, query);
    set <string> stop_words;
    for (string word : SplitIntoWords(query)) {
        stop_words.insert(word);
    }

    getline(cin, query);
    vector<string> query_words;
    for (string word : SplitIntoWords(query)) {
        if (stop_words.count(word) == 0) {
            query_words.push_back(word);
        }
    }

    for (string word : query_words) {
        cout << '[' << word << ']' << endl;
    }
}
*/

/*
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

vector<string> SplitIntoWords(const string& text) {
    vector<string> words;
    string word;
    for (char c : text) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        }
        else { word += c; }
    }
    words.push_back(word);
    return words;
}

set<string> ParseStopWords(const string& text) {
    set<string> stop_words;
    for (string& word : SplitIntoWords(text)) {
        stop_words.insert(word);
    }
    return stop_words;
}

vector<string> ParseQuery(const string& text, const set<string>& stop_words) {
    vector<string> words;
    for (const string& word : SplitIntoWords(text)) {
        if (stop_words.count(word) == 0) {
            words.push_back(word);
        }
    }
    return words;
}

string ReadSearchQuery() {
    string query;
    getline(cin, query);
    return query;
}

int main() {
    string stop_words_joined;
    getline(cin, stop_words_joined);
    set<string> stop_words = ParseStopWords(stop_words_joined);

    string query;
    getline(cin, query);
    vector<string> query_words = ParseQuery(query, stop_words);

    for (string& word : query_words) {
        cout << '[' << word << ']' << endl;
    }

    vector<string> words1 = {};
    words1 = SplitIntoWords(ReadSearchQuery());
    for (string c1 : words1) {
        cout << "[" << c1 << "] ";
    }
}
*/