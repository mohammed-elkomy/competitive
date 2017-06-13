

//Trees on the level
#include <iostream>
#include <cstring>
#include <queue>

using  namespace std;
string chunk;
int sep,val,i;
vector<int > print;
struct node{
    int val =-1;node *left= NULL, *right= NULL;
};

bool solve(node root){
    queue<node> bfs;
    bfs.push(root);
    node cur;
    while(!bfs.empty()){
        cur=bfs.front();
        print.push_back(cur.val);
        bfs.pop();
        if(cur.left)
            bfs.push(*(cur.left));

        if(cur.right)
            bfs.push(*(cur.right));

        if(cur.val == -1) return false;
    }
    return true;
}

int main(){
    //freopen("t.txt", "r", stdin);
    //freopen("tt.txt", "w", stdout);
    while(cin>>chunk){
        node root,* cur;
        do {
            sep=chunk.find(',');
            val=  atol(chunk.substr(1,sep-1).c_str());
            cur = &root ;

            for(i=sep+1 ; i<chunk.length()-1 ;i++){
                    if(chunk[i]=='L') {
                        if(cur->left == NULL)
                            cur->left=new node;
                        cur=cur->left;
                    }else {
                        if(cur->right == NULL)
                            cur->right=new node;
                        cur=cur->right;
                    }
                }

            cur->val=val;
            }
        while(cin>>chunk && strcmp(chunk.c_str(),"()"));

        if(solve(root))
            for(i=1,printf("%d",print[0]) ; i < print.size()  ;i++)
                printf(" %d",print[i]);
        else
             printf("not complete");
        printf("\n");
        print.clear();
    }
    return  0;
}

