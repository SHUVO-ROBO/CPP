#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

pair<int,int>MaxMin(int arr[],int l,int h){

   if(l==h){
    return {arr[l],arr[l]}; 
   }

   int mid = (l+h)/2;

   pair<int,int> l_side = MaxMin(arr,l,mid); 
   pair<int ,int> r_side = MaxMin(arr,mid+1,h);

   pair<int ,int>res;
   res.first = max(l_side.first,r_side.first);
   res.second = min(l_side.second,r_side.second);
   return res;
}

pair<int,int>largestPair(int arr[],int l,int h){
    if(l==h){
    return {arr[l],INT_MIN}; 
   }
    if(l+1==h){
        int a =arr[l];
        int b =arr[h];
        return {max(a,b),min(a,b)};
    }

    int mid =(l+h)/2;
    pair<int,int>l_s,r_s;

    l_s = largestPair(arr,l,mid);
    r_s = largestPair(arr,mid+1,h);

    int mx = max(l_s.first,r_s.first);
    int sec_max = INT_MIN;

    if(mx!=l_s.first){
     sec_max=max(sec_max,l_s.first);
    }
    sec_max = max(sec_max,l_s.second);

    if(mx!=r_s.first){
     sec_max=max(sec_max,r_s.first);
    }
    sec_max = max(sec_max,r_s.second);


   return {mx,sec_max};

}

pair<int ,int>SecondMaxMin(int arr[],int l,int h){
   
if(l==h)return {INT_MIN,INT_MAX};

if(l+1==h){
    int a = arr[l];
    int b = arr[h];

    int mx = max(a,b);
    int mn = min(a,b);

    int second_max = mn;
    int second_min = mx;

    return {second_max,second_min};
}

int mid = (l+h)/2;
pair<int,int>Sleft,Sright,Fleft,Fright;

Sleft = SecondMaxMin(arr,l,mid);//second max min both side
Sright = SecondMaxMin(arr,mid+1,h);

Fleft = MaxMin(arr,l,mid);//Main max min both side
Fright = MaxMin(arr,mid+1,h);

int O_Max = max(Fleft.first,Fright.first);//Find real max min for avoid if stment
int O_Min = min(Fleft.second,Fright.second);


//find second max
int SecondMax = INT_MIN;

int m1 = Sleft.first;
int m2 = Sright.first;
int m3 = Fleft.first;
int m4 = Fright.first;

  SecondMax=max(SecondMax,m1);
  SecondMax=max(SecondMax,m2);
if(O_Max!=m3) {
    SecondMax=max(SecondMax,m3); 
}if(O_Max!=m4){
    SecondMax=max(SecondMax,m4);
}

//find second min
  int SecondMin = INT_MAX;

  int M1 = Sleft.second;
  int M2 = Sright.second;
  int M3 = Fleft.second;
  int M4 = Fright.second;

  SecondMin = min(SecondMin,M1);
  SecondMin = min(SecondMin,M2);


if(O_Min!=M3){
    SecondMin = min(SecondMin,M3);
}if(O_Min!=M4){
    SecondMin = min(SecondMin,M4);
}

return {SecondMax,SecondMin};
}

//Vowel count
bool isVowel(char c){
    c = tolower(c);
    return(c=='a'|| c=='e'|| c=='i' || c=='o' ||  c =='u');
}

int countVowel(string str ,int l,int h)
{
    if(l==h){
        return isVowel(str[l]);
    }

    int mid =(l+h)/2;
    int left = countVowel(str,l,mid);
    int right = countVowel(str,mid+1,h);

    return left+right;
}


//Max sum Sub array
int CrossSum(int arr[],int l,int mid ,int h){

    int sum = 0;   
    int lMax = INT_MIN;
  for(int i = mid;i>=l; i-- ){
    sum+=arr[i];
    if(sum>lMax){
        lMax=sum;
    }
   }

   int rsum = 0;
   int rMax =INT_MIN;
   for(int i=mid+1;i<=h;i++){
    rsum+=arr[i];
    if(rsum>rMax){
        rMax=rsum;
    }

   }
  return lMax+rMax;
 }

int SumSubArrMAx(int arr[],int l,int h){

    if(l==h){
        return arr[l];
    }

    int mid = (l+h)/2;

    int leftSide= SumSubArrMAx(arr,l,mid);
    int rightSide= SumSubArrMAx(arr,mid+1,h);
    int crSum = CrossSum(arr,l,mid,h);

    return max({leftSide,rightSide,crSum});
}




int main(){

     int arr[]={1,2,3,4,5,6,7,8,9};
     int n = sizeof(arr)/sizeof(arr[0])-1;
     pair<int,int>result = SecondMaxMin(arr,0,n);
     cout<<"Maximun element : "<<result.first<<endl;
     cout<<"Minimun element : "<<result.second<<endl;

     pair<int,int>res=largestPair(arr,0,n);
      cout<<"first Maximun element : "<<res.first<<endl;
     cout<<"second Maximun element : "<<res.second<<endl;




     string st = "Md Borhan Uddin Shuvo";
     int l = st.size()-1;
     cout<<"Total number of Vowel : "<<countVowel(st,0,l)<<endl;

     int arr1[] = {-2,1,-3,4,-1,2,1,-5,4};
     int len = sizeof(arr1)/sizeof(arr1[0]);
     cout<<"Maximun Sum of Array : "<<SumSubArrMAx(arr1,0,len-1)<<endl;;

    return 0;
}




#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int id;
    float cgpa;
};

Student bestCGPA(Student s[], int l, int h)
{
    if(l == h)
        return s[l];

    int mid = (l + h) / 2;

    Student left  = bestCGPA(s, l, mid);
    Student right = bestCGPA(s, mid+1, h);

    if(left.cgpa > right.cgpa)
        return left;
    else
        return right;
}

int main()
{
    Student s[] = {
        {"Shuvo", 101, 3.90},
        {"Rahim", 102, 3.85},
        {"Karim", 103, 3.95},
        {"Sajib", 104, 3.70}
    };

    int n = 4;

    Student best = bestCGPA(s, 0, n-1);

    cout << "Best Student: " << best.name 
         << " | ID: " << best.id 
         << " | CGPA: " << best.cgpa << endl;
}


//here copy code

#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int l, int h) 
{
    // Base case: only one element
    if(l == h) 
        return arr[l];

    int mid = (l + h) / 2;

    // solve left and right
    int leftMajor  = majorityElement(arr, l, mid);
    int rightMajor = majorityElement(arr, mid + 1, h);

    // যদি দুইটাই same, সে-ই majority
    if(leftMajor == rightMajor)
        return leftMajor;

    // তা না হলে frequency count করতে হবে
    int leftCount = 0, rightCount = 0;

    for(int i = l; i <= h; i++)
    {
        if(arr[i] == leftMajor)  leftCount++;
        if(arr[i] == rightMajor) rightCount++;
    }

    // বড় কাউন্ট যার, সে majority
    return (leftCount > rightCount) ? leftMajor : rightMajor;
}
