#include<iostream> 
#include<algorithm> 
#include<map> 
using namespace std; 

bool ondo(int ele,int frame[],int size){ 
        for(int i=0;i<size;i++){ 
                if(ele==frame[i]) 
                        return true; 

        } 
        return false; 

} 

bool isempty(int frame[],int size){ 
        for(int i=0;i<size;i++) 
                if(frame[i]==-1) 
                        return true;             
return false; 
} 




int main(){ 
map <int,int> lru; 
int n,a; 
cout<<" enter the no of elements"; 
cin>>n; 
int arr[n]; 
cout<<"enter the string"; 
for(int i=0;i<n;i++){ 
        cin>>a; 
        arr[i]=a;        
} 

cout<<"enter the size of the frames"; 
int size; 
cin>>size; 
int faults=0; 
int fram[size]; 
for(int k=0;k<size;k++) 
        fram[k]=-1; 
int head=-1; 
for(int j=0;j<n;j++){ 

        if(ondo(arr[j],fram,size)&&isempty(fram,size)){ 
                cout<<"hit\t\t"<<arr[j]<<"\t\t"; 
                lru[arr[j]]=j; 
} 
        else if(ondo(arr[j],fram,size)&&!isempty(fram,size)){ 
                cout<<"hit\t\t"<<arr[j]; 
                lru[arr[j]]=j; 
} 
        else if(!ondo(arr[j],fram,size)&&isempty(fram,size)){ 
                        head++; 
                fram[head]=arr[j]; 
                lru.insert(pair<int,int>(fram[head],j+1)); 
                faults++; 
        } 

        else if(!ondo(arr[j],fram,size)&&!isempty(fram,size)){ 

                int index=-1; 
                int min[size]; 
                for(int l=0;l<size;l++) 
                        min[l]=lru[fram[l]]; 

                sort(min,min+size); 
                for(int h=0;h<size;h++){ 
                        if(lru[fram[h]]==min[0]) {
                                index=h; 
                                break;
                        }
} 
                lru.erase(fram[index]);
                lru.insert(pair<int,int>(arr[j],j+1));
                fram[index]=arr[j]; 

                faults++; 
                } 


} 







cout<<"\n\nFaults\t"; 
cout<<faults; 

cout<<"\n"; 
for(int m=0;m<size;m++) 
        cout<<fram[m]<<"\t"; 








return 0; 
} 