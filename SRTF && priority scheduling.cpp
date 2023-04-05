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
int id;
int first;
int flag =0;
};
struct comp{

bool operator()(process const& p1,process const& p2){

return p1.ReT > p2.ReT;


}



};
struct comp2{

bool operator()(process const& p1,process const& p2){

return p1.priority < p2.priority;


}



};
 int compTime=0;

void SRTF(process a[],int n){

priority_queue<process,vector<process>,comp> PQ;


bool h = true;
int y = 0;
int C=0;
while(h){

for(int i=0;i<n;i++){
if(a[i].AT <= y && a[i].flag==0){
PQ.push(a[i]);
a[i].flag=1;
C++;

}

}
y++;

process d;



d=PQ.top();
PQ.pop();

if(d.ReT != 0 ){
if(d.ReT == d.BT){
a[d.id].first = compTime;
}
compTime++;
a[d.id].ReT--;
if(a[d.id].ReT!=0){
PQ.push(a[d.id]);


}else{

a[d.id].CT=compTime;
a[d.id].TAT=a[d.id].CT-a[d.id].AT;
a[d.id].WT=a[d.id].TAT-a[d.id].BT;
a[d.id].RT=a[d.id].first-a[d.id].AT;








}

}

if(PQ.empty())
h = false;

}




}

void Priority(process a[],int n){

   priority_queue<process,vector<process>,comp2> PQ;





bool h = true;
int y = 0;
while(h){

for(int i=0;i<n;i++){
if(a[i].AT <= y && a[i].flag==0){
PQ.push(a[i]);
a[i].flag=1;

}

}
y++;
 process d;



d=PQ.top();
PQ.pop();
if(d.ReT != 0 ){
if(d.ReT == d.BT){
a[d.id].first = compTime;
}
compTime++;
a[d.id].ReT--;
if(a[d.id].ReT!=0){
PQ.push(a[d.id]);


}else{

a[d.id].CT=compTime;
a[d.id].TAT=a[d.id].CT-a[d.id].AT;
a[d.id].WT=a[d.id].TAT-a[d.id].BT;
a[d.id].RT=a[d.id].first-a[d.id].AT;








}

}

if(PQ.empty())
h = false;

}




}






int main(){
    int p;

    struct process pro[100];
scanf("%d",&p);
for(int i=0;i<p;i++){

    scanf("%d",&pro[i].AT);
    scanf("%d",&pro[i].BT);
    scanf("%d",&pro[i].priority);
    pro[i].ReT = pro[i].BT ;
    pro[i].id=i;
}
Priority(pro,p);
for(int i=0;i<p;i++){

    printf("AT = %d\n",pro[i].AT);
    printf("BT = %d\n",pro[i].BT);
    printf("CT = %d\n",pro[i].CT);
    printf("TAT = %d\n",pro[i].TAT);
    printf("WT = %d\n",pro[i].WT);
    printf("RT = %d\n",pro[i].RT);
     printf("\n");



}


return 0;
}
