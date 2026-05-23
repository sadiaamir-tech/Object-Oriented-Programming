#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Stack {
    vector<char> v;
public:
    void push(char ch) {
        v.push_back(ch);
    }
    void pop() {
        if (!v.empty()) {
            v.pop_back();
        }
    }
    char peek() {
        return v.back();
    }
    bool isEmpty() {
        return v.empty();
    }
    void reverse(string sentence) {
        for (int i = 0; i <= sentence.length(); i++) {
            if (sentence[i] != ' ' && sentence[i] != '\0') {
                push(sentence[i]);
            }
            else {
                while (!isEmpty()) {
                    cout << peek();
                    pop();
                }
                cout << " ";
            }
        }
    }
};

int main() {
    Stack s;
    string sentence = "Hello World Programming";
    cout << "Original Sentence: " << sentence << endl;
    cout << "Reversed Words: ";
    s.reverse(sentence);
    return 0;
}
