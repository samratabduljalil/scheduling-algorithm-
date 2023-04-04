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
 priority_queue<process,vector<process>,comp2> PQ2;

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

process d,k,j,l;


if(PQ.size()>=2){
d = PQ.top();
PQ.pop();
k = PQ.top();
PQ.pop();
    if(k.ReT==d.ReT){
        PQ2.push(k);
        PQ2.push(d);
        j=PQ2.top();
        PQ2.pop();
        l=PQ2.top();
          PQ2.pop();


if(j.ReT != 0 ){
if(j.ReT == j.BT){
a[j.id].first = compTime;
}
compTime++;
a[j.id].ReT--;
if(a[j.id].ReT!=0){
PQ.push(a[j.id]);
PQ.push(a[l.id]);


}else{

a[j.id].CT=compTime;
a[j.id].TAT=a[j.id].CT-a[j.id].AT;
a[j.id].WT=a[j.id].TAT-a[j.id].BT;
a[j.id].RT=a[j.id].first-a[j.id].AT;








}

}
    }else{
PQ.push(a[k.id]);
PQ.push(a[d.id]);

}





}
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
   priority_queue<process,vector<process>,comp> PQ2;




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
 process d,k,j,l;


if(PQ.size()>=2){
d = PQ.top();
PQ.pop();
k = PQ.top();
PQ.pop();
    if(k.ReT==d.ReT){
        PQ2.push(k);
        PQ2.push(d);
        j=PQ2.top();
        PQ2.pop();
        l=PQ2.top();
          PQ2.pop();


if(j.ReT != 0 ){
if(j.ReT == j.BT){
a[j.id].first = compTime;
}
compTime++;
a[j.id].ReT--;
if(a[j.id].ReT!=0){
PQ.push(a[j.id]);
PQ.push(a[l.id]);


}else{

a[j.id].CT=compTime;
a[j.id].TAT=a[j.id].CT-a[j.id].AT;
a[j.id].WT=a[j.id].TAT-a[j.id].BT;
a[j.id].RT=a[j.id].first-a[j.id].AT;








}

}
    }else{
PQ.push(a[k.id]);
PQ.push(a[d.id]);

}





}
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
