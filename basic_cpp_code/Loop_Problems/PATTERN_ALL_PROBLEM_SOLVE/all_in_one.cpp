#include <iostream>
using namespace std;

void triangle(int n){
    /*  
    5
* 
* * 
* * *       
* * * *
* * * * *
    */

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void reverse_triangle(int n){

/*
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    5
* * * * * 
* * * * 
* * *               
* * 
*
    */

    for(int i=n ; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void space_first_triangle(int n){

    /* 

    5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

    */

    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void reverse_space_first_triangle(int n){

    /*
    5
* * * * * 
 * * * * 
  * * * 
   * * 
    *   
    * 
    */


    for(int i=0;i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern_1(int n){

    /*
    5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    
    */

    for(int i=1; i<=n; i++){

        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){

        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*n-1-2*i;j++){
            cout<<"*";
        } 
        cout<<endl;
    }
}

void pattern_2(int n){
    /*
    5
    *
   * *
  *   *
 *     *
*       *
    */

    for(int i=1; i<=n ;i++){
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
        cout<<"*";

        for(int j=1; j<=2*i-3;j++){
            cout<<" ";
        }
        if(i!=1)cout<<"*";
        cout<<endl;

    }

}

void pattern_3(int n){
    /*
    5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

    */

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}

void pattern_4(int n){

    /*
    5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
    */
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern_5(int n){

    /*
    5
*********
 *******
  *****
   ***
    *
    */
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1; j<=2*n+1-2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern_6(int n){

    /*
    5
*
**
***
****
*****
****
***
**
*
    */

    for(int i=1; i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i; 

        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}


void pattern_7(int n){

    /*
    5
1
01
101
0101
10101
    */
    for(int i=1;i<=n;i++){
        int stars =  1;
        if(i % 2 == 1) stars = 1;
        else stars = 0;
        for(int j=1;j<=i;j++){
            cout<<stars;
            stars=1-stars;
        }
        cout<<endl;
    }
}

void pattern_8(int n){

    /*
5
1        1
12      21
123    321
1234  4321
1234554321
    */
    for(int i = 1; i<=n; i++){

        for(int j=1; j<=i; j++){
            cout<<j;
        }

        for(int j=1; j<=2*n-2*i; j++){
            cout<<" ";
        }

        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern_9(int n){
/*
5
A 
A B 
A B C 
A B C D 
A B C D E 
*/

    for(int i=0;i<n; i++){
        for(char ch = 'A';ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern_10(int n){
/*
5
A B C D E 
A B C D 
A B C 
A B 
A 
*/

    for(int i=n;i>0; i--){
        for(char ch = 'A';ch<='A'+i-1; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern_11(int n){

    /*
    5
A 
B B 
C C C 
D D D D 
E E E E E 
    */

    for(int i = 0 ; i<n; i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern_12(int n){
    /*
    5
    A   
   ABA  
  ABCBA 
 ABCDCBA
ABCDEDCBA
    */

    for(int i=0; i<n ; i++){
        char ch = 'A';
        int breakpoint =(2*i/2)+1;

        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        for(int j=1; j<=2*i+1; j++){
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;
        }

        for(int j=1; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern_13(int n){

    /*
    5
E 
D E 
C D E 
B C D E 
A B C D E 
*/
    for(int i=0 ;i<n;i++){
        for(char ch = 'E'-i; ch<='E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern_14(int n){

/*
5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
    //first half
    int space = 0;
    for(int i=0;i<n;i++){
        for(int j=1; j<=n-i;j++){
            cout<<"*";
        }
        for(int j = 0; j<space ; j++){
            cout<<" ";
        }
        for(int j=1; j<=n-i;j++){
            cout<<"*";
        }
        space+=2;
        cout<<endl;
    }
    //second half 
    space = 2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        for(int j = 0; j<space ; j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        space-=2;
        cout<<endl;
    }
}

void pattern_15(int n){

    /*
5
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
    */
    int space=2*n-2;
    for(int i=1; i<=2*n-1;i++){

        int stars=i;
        if(i>n) stars=2*n-i; 

        for(int j=1; j<=stars; j++){
            cout<<"*";
        }

        for(int j =1; j<=space; j++){
            cout<<" ";
        }

        for(int j=stars; j>=1; j--){
            cout<<"*";
        }

        cout<<endl;
        if(i<n) space-=2;
        else space+=2;
        
    }
}

void pattern_16(int n){

    /*
    5
*****
*   *
*   *
*   *
*****
    */
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==(n-1) || j==(n-1)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}

void pattern_17(int n){

    /*
    4
4444444
4333334
4322234
4321234
4322234
4333334
4444444
    */
    
    for(int i=0; i<2*n-1;i++){
        for(int j=0; j<2*n-1; j++){

            //distance feom every side mattrix

            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;

            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }

}

int main (){

    int n;
    cin>>n;   
    //triangle(n);
    //reverse_triangle(n);
    //space_first_triangle(n);
    //reverse_space_first_triangle(n); 
    //pattern_1(n);
    //pattern_2(n);
    //pattern_3(n);
    //pattern_4(n);
    //pattern_5(n);
    //pattern_6(n);
    //pattern_7(n);
    //pattern_8(n);
    //pattern_9(n);
    //pattern_10(n);
    //pattern_11(n);
    //pattern_12(n);
    //pattern_13(n);
    //pattern_14(n);
    //pattern_15 (n);
    //pattern_16(n);
    pattern_17(n);


    return 0;
}