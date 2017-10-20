#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef struct Node{
    Node *child[26];
    bool isleaf;
}trieNode;

trieNode* getNode(){
    trieNode *t = new trieNode;
    for(int i=0;i<26;i++){
        t->child[i]=NULL;
        t->isleaf = false;
    }
    return t;
}

void insert(trieNode *root, string s){
    trieNode *head = root;
    for(int i=0;i<s.length();i++){
        int index = s[i]-'a';
        if(head->child[index]==NULL){
            head->child[index] = getNode();
        }
        head = head->child[index];
    }
    head->isleaf = true;
    cout<<"YA"<<endl;
}

int search(trieNode *root){
    trieNode *head = root;
    if(head->isleaf == true){
        for(int i=0;i<26;i++)
            if(head->child[i]){
                cout<<"HELLO";
                return 1;
            }
    }
    int ans = 0;
    for(int i=0;i<26;i++){
        cout<<i<<endl;
        if(head->child[i]!=NULL){
            cout<<i<<endl;
            ans = ans || search(head->child[i]);
        }
    }
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    trieNode *root = getNode();
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
        cout<<s[i]<<endl;
        insert(root,s[i]);
    }
    int val = search(root);
    if(val == 0)
        cout<<"GOOD SET"<<endl;
    else
        cout<<"BAD SET"<<endl;
    return 0;
}
