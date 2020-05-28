#include<bits/stdc++.h>
using namespace std;
 
int main()
{
      int total_frames, total_pages, hit = 0,l=-1;
      int pages[25], frame[25], arr[25], time[25];
      int m, n, page, flag, k, minimum_time, temp;
      cout<<"Enter Total Number of Pages:\t";
      cin>>total_pages; 
      cout<<"Enter Total Number of Frames:\t";
      cin>>total_frames;
      for(m = 0; m < 25; m++)
      {
            arr[m] = 0;
            frame[m] = -1;
      }
      cout<<"Enter Values of Reference String\n";
      for(m = 0; m < total_pages; m++)
      {
            cin>>pages[m];
      }
      cout<<"\n";
      for(m = 0; m < total_pages; m++)
      {
            arr[pages[m]]++;
            time[pages[m]] = m;
            flag = 1;
            k = frame[0];
            for(n = 0; n < total_frames; n++)
            {
                  if(frame[n] == -1 || frame[n] == pages[m])
                  {
                        if(frame[n] != -1)
                        {
                              hit++;
                               l=0;
                        }
                        flag = 0;
                        frame[n] = pages[m];
                        break;
                  }
                  if(arr[k] > arr[frame[n]])
                  {
                        k = frame[n];
                  }
            }
            if(flag)
            {
                  minimum_time = 25;
                  for(n = 0; n < total_frames; n++)
                  {
                        if(arr[frame[n]] == arr[k] && time[frame[n]] < minimum_time)
                        {
                              temp = n;
                              minimum_time = time[frame[n]];
                        }
                  }
                  arr[frame[temp]] = 0;
                  frame[temp] = pages[m];
            }
            cout<<"For page "<<pages[m]<<" : ";
            if(flag==0&&l==0)
                  {
                  cout<<" No Page fault occured  ";
                  }
            for(n = 0; n < total_frames; n++)
            {

                  if(frame[n]!=-1)
                  cout<<frame[n]<<" ";
            }
            cout<<"\n";
      }
      cout<<"Number of page fault: "<<total_pages-hit;
      return 0;
}