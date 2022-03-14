class Solution(object):
    def simplifyPath(self, path):
        st=[]
        for p in path.split('/'):
            if(p==".."):
                if st:
                    st.pop()
            elif p and p!='.':
                st.append(p)
        
        return '/'+'/'.join(st)
        