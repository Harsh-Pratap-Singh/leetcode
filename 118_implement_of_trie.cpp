struct Node{
    Node*links[26];

    bool fl = false;

    bool containk(char c){
        return links[c - 'a'] != NULL;
    }

    void put(char a,Node* node){
        links[a - 'a'] = node;
    }

    Node*get(char ch){
        return links[ch - 'a'];
    }

    void setEnd(){
        fl = true;
    }
    bool isEnd(){
        return fl;
    }
};
class Trie {
private:
    Node*root;

public:
    Trie() {
       root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for(auto i : word){
            if(!node->containk(i)){
                node->put(i,new Node());
            }
            node = node ->get(i);

        }
        node->setEnd();

    }
    
    bool search(string word) {
        Node*node = root;
        for(auto i: word){
            if(!node->containk(i)){
                return false;
            }
            node = node->get(i);
        }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node*node = root;
        for(auto i:prefix){
            if(!node->containk(i)){
                return false;
            }
            node = node->get(i);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */