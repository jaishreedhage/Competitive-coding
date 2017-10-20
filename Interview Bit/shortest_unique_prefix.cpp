struct trieNode{
    trieNode *child[26];
    int freq;
};

trieNode* getNode(){
    trieNode *t = new trieNode;
    if(t){
        for(int i=0;i<26;i++){
            t->child[i] = NULL;
            t->freq = 0;
        }
    }
    return t;
}

void insert(trieNode *root, string s){
    trieNode *head = root;
    int len = s.length();
    for(int i=0;i<len;i++){
        int index = s[i]-'a';
        if(head->child[index] == NULL){
            head->child[index] = getNode();
        }
        head = head->child[index];
        head->freq ++;
    }
}

void search(trieNode *root, string s, vector<string> &v){
    trieNode *head = root;
    string pr = "";
    for(int i=0;i<s.length();i++){
        int index = s[i]-'a';
        pr.push_back(s[i]);
        head = head->child[index];
        if(head->freq == 1){
            v.push_back(pr);
            return;
        }
    }
}

vector<string> Solution::prefix(vector<string> &A) {
    vector<string> v;
    trieNode *root = getNode();
    for(int i=0;i<A.size();i++)
        insert(root,A[i]);
    for(int i=0;i<A.size();i++)
        search(root,A[i],v);
    return v;
}

//trie based qsn. In soln they used vector of vector to use trie concepts, i need to have a look at that
