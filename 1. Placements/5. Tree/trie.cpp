#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node* children[26];
    bool eow; // end of word flag
    
    Node() {
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
        eow = false;
    }
};

class Trie {
public:
    Node* root;

    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node* curr = root;
        for (char c : word) {
            int index = c - 'a';
            if (curr->children[index] == nullptr) {
                curr->children[index] = new Node(); // ✅ fixed here
            }
            curr = curr->children[index];
        }
        curr->eow = true;
    }

    bool search(string word) {
        Node* curr = root;
        for (char c : word) {
            int idx = c - 'a';
            if (curr->children[idx] == nullptr)
                return false;
            curr = curr->children[idx];
        }
        return curr->eow;
    }
};

int main() {
    Trie t; // ✅ use Trie instead of Node

    t.insert("apple");
    t.insert("app");
    t.insert("bat");

    cout << boolalpha; // print true/false instead of 1/0
    cout << "Search 'app': " << t.search("app") << endl;
    cout << "Search 'apple': " << t.search("apple") << endl;
    cout << "Search 'bat': " << t.search("bat") << endl;
    cout << "Search 'ball': " << t.search("ball") << endl;

    return 0;
}
