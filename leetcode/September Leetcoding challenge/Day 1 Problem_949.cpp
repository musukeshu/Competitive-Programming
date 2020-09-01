class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        int h1=-1,h2=-1,m1=-1,m2=-1;
        int max=-1;
        int i,j,k,l;
        for(int i=0;i<4;i++)
        {
            if(A[i]>2)
                continue;
            for(int j=0;j<4;j++)
            {
                if(i==j)continue;
                if(A[i]==2&&A[j]>3)
                {
                    continue;
                }
                for(k=0;k<4;k++)
                {
                    if(k==j||k==i)
                        continue;
                    if(A[k]>5)
                        continue;
                    for(l=0;l<4;l++)
                    {
                        if(l==i||l==j||l==k)
                            continue;
                        int val=(A[j]+(A[i]*10))*60 + (A[l]+(A[k]*10));
                        if(max<val)
                        {
                            max=val;
                            h1=A[i];
                            h2=A[j];
                            m1=A[k];
                            m2=A[l];
                        }
                    }
                }
            }
        }
        if(h1==-1&&h2==-1&&m1==-1&&m2==-1)
        {
            return "";
        }
    
            return (to_string(h1)+to_string(h2)+":"+to_string(m1)+to_string(m2));
    }
};
