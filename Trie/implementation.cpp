#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode* root;
    TrieNode(char ch)
    {
        data=ch;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isTerminal=false;
    }
    void insertWord(string word)
    {
        insertUtil(root,word);
    }
    void insertUtil(TrieNode* root,string word)
    {
        //base case 
        if(word.length() == 0)     //matlab sari string traverse krli hai
        {
            root->isTerminal=true;
            return;     //last node ka isTerminal true krdo
        }

        //assumption, word is in UPPERCASE
        int index=word[0] - 'A';        //jis character ko process krna h uska index nikal liya
        TrieNode* child;

        //present
        if(root->children[index] != NULL)
        {
            child=root->children[index];
        }
        //absent
        else{
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        //RECURSION
        insertUtil(child,word.substr(1));
    }


    void search(string word)
    {
        searchUtil(root,word);
    }
    bool searchUtil(TrieNode* root,string word)
    {
        //base case
        if(word.length()==0)
        {
            return root->isTerminal;
        }
        int index=word[0]-'A';
        
    }
};





int main()
{
    TrieNode a;
    a.insertWord("abc   d");
}