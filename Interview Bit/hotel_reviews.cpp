struct trieNode{
    trieNode *child[26];
    bool isleaf;
    int val;
};

trieNode* getNode(){
    trieNode *t = new trieNode;
    if(t){
        for(int i=0;i<26;i++){
            t->child[i] = NULL;
            t->isleaf = false;
            t->val = 0;
        }
    }
    return t;
}

void insert(trieNode *root, string s){
    trieNode *head = root;
    int len = s.length();
    int va = 1;
    for(int i=0;i<len;i++){
        if(s[i] == '_' || i == len-1){
            if(!head->isleaf){
                head->isleaf = true;
            }
            head = root;
            continue;
        }
        int index = s[i]-'a';

        if(head->child[index] == NULL){
            head->child[index] = getNode();
            head->val = va++;
            cout<<va<<"** ";
        }
        head = head->child[index];

    }
}

int search(string s, trieNode *root){
    trieNode *head = root;
    int count = 0;
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
        if(s[i] == '_' || i == s.length()-1){
            if(head->isleaf == true){
                cout<<" *** "<<s[i-1]<<" ";
                count++;
            }
            head = root;
            continue;
        }
        int index = s[i]-'a';
        if(head->child[index] == NULL){
            int j = i;
            while(s[j]!='_' && j<s.length())
                j++;
            i = j;
            head = root;
        }
        else
            head = head->child[index];
    }
    cout<<s<<" "<<count<<endl;
    return count;
}
bool func(pair<int,int> i,pair<int,int>j){
    if(i.second>j.second)
        return true;
    return false;
}

void print(trieNode *root){
    trieNode *head = root;
    for(int i=0;i<26;i++){
        if(head->child[i]){
            cout<<i<<" "<<head->val<<endl;
            // head = head->child[i];
            print(head->child[i]);
        }
    }
}
vector<int> Solution::solve(string A, vector<string> &B) {
    trieNode *root = getNode();
    cout<<A<<endl;
    insert(root,A);
    print(root);
    vector<pair<int,int> > v(B.size());
    for(int i=0;i<B.size();i++){
        v[i].first = i;
        v[i].second = search(B[i],root);
    }
    sort(v.begin(),v.end(),func);
    vector<int> ans;
    for(int i=0;i<B.size();i++){
        // cout<<v[i].second<<" ";
        ans.push_back(v[i].first);
    }
    return ans;
}
