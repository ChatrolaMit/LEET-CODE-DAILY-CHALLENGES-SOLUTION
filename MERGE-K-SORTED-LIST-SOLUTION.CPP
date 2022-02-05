
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define pb(x) push_back(x)
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        priority_queue<pii , vector<pii> , greater<pii>>pq;

        
        // vector<*ListNode>ind(k) ;
        
        
        for(int i = 0 ; i<n ; i++){
            if(lists[i]!=NULL)
            pq.push({lists[i]->val ,i });
            
        }
        ListNode *root = new ListNode(-1);
        ListNode *ne =  root; 
        while(!pq.empty()){
            pii temp = pq.top();
            pq.pop();
            ListNode *new_node= new ListNode(temp.first);
            ne->next = new_node;
            ne = ne->next ;
            
            
            if(lists[temp.second]->next !=NULL){
                pq.push({lists[temp.second]->next->val , temp.second});
                lists[temp.second] =lists[temp.second]->next ;
                
            }
            
        }
        ne = root;
        while(ne!=NULL){
            cout<<ne->val<<" ";
            ne= ne->next;
        }
        return root->next;
        
        
        
        
    }
};