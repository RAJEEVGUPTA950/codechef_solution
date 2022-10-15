 if(l1)
         l1=l1->next;
     
     if(l2)
         l2=l2->next;
 }
 if(carry)
     curr->next= new ListNode(1);   //if carry>0 then put carry at new created last node.
 
 return res->next;
