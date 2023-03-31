#include<bits/stdc++.h>

using namespace std;
struct process{

int  AT;
int BT;
int CT;
int TAT;
int WT;
int RT;
int ReT;
int priority;
};
struct comp{

bool operator()(process const& p1,process const& p2){

return p1.ReT <p2.ReT;


}



};


void SRTF(process a[],int n){

priority_queue<process,vector<process>,comp> PQ;

for(int i=0;i<n;i++){




}
 printf("SRTF AT = %d\n",a[0].AT);
   a[0].AT=10;


}

void Priority(process a){


}





int main(){
    int p;
    int compTime;
    struct process pro[100];
scanf("%d",&p);
for(int i=0;i<p;i++){

    scanf("%d",&pro[i].AT);
    scanf("%d",&pro[i].BT);
    scanf("%d",&pro[i].priority);
    pro[i].ReT = pro[i].BT ;
}
for(int i=0;i<p;i++){

    printf("AT = %d\n",pro[i].AT);
    printf("BT = %d\n",pro[i].BT);
    printf("BT = %d\n",pro[i].CT);
    printf("TAT = %d\n",pro[i].TAT);
    printf("WT = %d\n",pro[i].WT);
    printf("RT = %d\n",pro[i].RT);



}
SRTF(pro,p);
 printf("after SRTF AT = %d\n",pro[0].AT);
return 0;
}
