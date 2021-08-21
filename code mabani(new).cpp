                                     //  in the name of god
                                      // mabani: mr godaz
                                      //producer:seyed hesammodin hossieni
/*
//1
#include <iostream>
using namespace std;
void main(){
    int a,b,s;
    cin>>a>>b;
    s=a+b;
            cout<<s<<endl;
    system("pause");
}
*/

//3
#include <iostream>
using namespace std;
void main(){
   int a,b,c,s;
   float avg;
   cin>>a>>b>>c;
   s=a+b+c;
   avg=float(s)/3;
   cout<<avg;
   system("pause");
}

//4
#include <iostream>
using namespace std;
void main(){
    const double pi=3.1415;
            double r,m,a;
    cin>>r;
    m=2*pi*r;
            a=pi*r*r;
                    cout<<m<<a;
    system("pause");
}

//5
#include <iostream>
using namespace std;
void main(){
    float c,f;
    cin>>c;
    f=float(9)/5*c+32;
            cout<<f<<endl;
    system("pause");
}

//6
#include <iostream>
using namespace std;
void main(){
    float x,y,m,s;
    cin>>x>>y;
    m=(x+y)*2;
            s=x*y;
                    cout<<m<<s;
    system("pause");
}

//7
#include <iostream>
using namespace std;
void main(){
    float b,h,s;
    cin>>b>>h;
    s=(b*h)/2;
            cout<<s;
    system("pause");
}

//8
#include <iostream>
using namespace std;
void main(){
    int x,y,t;
    cin>>x>>y;
    t=x;
            x=y;
                    y=t;
                    cout<<x<<y;
                    system("pause");
}

//9
#include <iostream>
using namespace std;
void main(){
    int x,y;
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<y;
    system("pause");
}

//10
#include <iostream>
using namespace std;
void main(){
    int x,y;
    cin>>x>>y;
    if(x>y){
        cout<<x<<endl;
    }
    else{
        cout<<y<<endl;
    }
    system("pause");
}

//11
#include <iostream>
using namespace std;
void main(){
    int x,y;
    cin>>x;
    if(x<0){
        y=3*x-5;
        cout<<y<<endl;
    }
    else if(x==0){
        y=2;
                cout<<y<<endl;
    }
    else if (x>0){
        y=2*x-5;
        cout<<y<<endl;
    }
    system("pause");
}

//12
#include <iostream>
using namespace std;
void main(){
    int x,y;
    cin>>x;
    if(x%2==0){
        y=2*x+5;
        cout<<y<<endl;
        return;
    }
    else {
        y = 2 * x - 5;
        cout << y << endl;
    }
system("pause");
}

//13
#include <iostream>
using namespace std;
void main(){
    int a,b,c,x;
    cin>>a>>b>>c;
    if(b>a){
        x=a;
        a=b;
        b=x;
    }
    if(c>a){
        x=a;
        a=c;
        c=x;
    }
    if(c>b){
        x=c;
        c=b;
        b=x;
    }
    cout<<a<<b<<c<<endl;
    system("pause");
}

//14
#include <iostream>
using namespace std;
void main (){
    int x;
    cin>>x;
    if(x>0){
        x=-x;
        cout<<x<<endl;
    }
    system("pause");
}

//15
#include <iostream>
using namespace std;
void main (){
    double a,b,c,d,x,x1,x2;
    cin>>a>>b>>c;
    d=b*b-(4*a*c);
    if(d<0){
        cout<<"x=reshe nadarad:)))"<<endl;
    }
    if(d==0){
        x=-b/2*a;
        cout<<x<<endl;
    }
    if(d>0){
       x1=(-b-sqrt(d)) /(2*a);
x2=(-b+sqrt(d)) /(2*a);
cout<<x1<<x2<<endl;
    }
    system("pause");
}

//17
#include <iostream>
using namespace std;
void main(){
    int x,i;
    for(i=0; i<5;i++) {
        cin >> x;
        if (x % 2 != 0)
            cout << "adad fard" << endl;
        if (x % 2 == 0)
            cout << "adad zoj" << endl;
    }
        system("pause");
}

//18
#include<iostream>
using namespace std;
void main(){
    int n,i,a,sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    cout<<sum<<endl;
    system("pause");
}

//19
#include<iostream>
using namespace std;
void main(){
    int i=0,n=0,z=0,p=0,N,a;
    cin>>N;
    while(N>i){
        cin>>a;
        if(a>0){
            p=p+1;
        }
        else if(a==0){
            z=z+1;
        }
        else{
            n=n+1;
        }
        i++;
    }
    cout<<n<<endl;
    cout<<z<<endl;
    cout<<p<<endl;
    system("pause");
}

//20
#include <iostream>
using namespace std;
void main(){
    int N,i=1,max,a;
    cin>>N>>max;
    while(i<N){
        cin>>a;
        if(a>max){
            max=a;
        }
        i++;
    }
    cout<<max<<endl;
    system("pause");
}

//21
#include <iostream>
using namespace std;
void main(){
    long long int n,i,fact=1;
    cin>>n;
    for(i=1;i<=n;i++){
        fact *=i;
    }
    cout<<fact<<endl;
    system("pause");
}

//22
#include <iostream>
using namespace std;
void main(){
    string name;
    int N,h,hP,i=0;
    double sal;
    cin>>N;
    while(i<N){
        cin>>name>>h>>hp;
        if(h<=40){
            sal=h*hp;
        }
        else{
            sal=float(40*hp)+(float(h)-40)*float(hp)*1.5;
        }
        cout<<name<<sal<<endl;
        i++;
    }
    system("pause");
}

//23
#include <iostream>
using namespace std;
void main(){
    int n,r,p=1,s=0;
    cin>>n;
    while(n>0){
        r=n%2;
        s+=r*p;
        p*=10;
        n/=2;
    }
    cout<<s<<endl;
    system ("pause");
}

//25
#include <iostream>
using namespace std;
void main(){
    long long int a,i,fn,f1=1,f2=1,f3=0;
    cin>>a;
    if(a==1){
        cout<<"1";
    }
    else if(a==2){
        cout<<"1,1";
    }
    else{
        cout<<f1<<f2<<endl;
    }
    for(i=2;i<a;i++){
        f3=f1+f2;
        f1=f2;
        f2=f3;
        cout<<f3<<endl;
    }
    system("pause");
}

//26
#include<iostream>
using namespace std;
void main(){
    int n,i=1,fact=1;
    double e=1;
    cin>>n;
    for(;i<=n;i++){
        fact*=1;
        e+=1/double(fact);
    }
    cout<<e<<endl;
    system("pause");
}

//27
#include<iostream>
using namespace std;
void main(){
int n,s=0,i=1;
cin>>n;
for(;i<=n;i++){
    s+=i;
}
cout<<s<<endl;
system("pause");
}

//28
#include<iostream>
using namespace std;
void main(){
    int n,s=0,i=1;
    int sign=1;
    cin>>n;
    for(;i<=n;i++){
        s+=i*sign;
        sign*=-1;
    }
    cout<<s<<endl;
    system("pause");
}

//29
#include<iostream>
using namespace std;
void main(){
    int n,i,p,r,a;
    cin>>n;
    while(i<n){
        cin>>a;
        r=a%3;
        if(r==0){
p+=1;
i++;
        }
    }
    cout<<p<<endl;
    system("pause");
}

//30
#include<iostream>
using namespace std;
void main(){
    int n,a,r;
    cin>>n;
    while(n-->0) {
        cin >> a;
        if (a % 10 == 5)
            cout << a << endl;
    }
    system("pause");
}

//31
#include <iostream>
using namespace std;
void main(){
    int L,H;
    cin>>H>>L;
    while(++L<H)
        if(L%2==0)
        cout<<L<<endl;
    system("pause");
}

//32
#include <iostream>
using namespace std;
void main(){
    int n,sum=0,z,i,m;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>m;
        sum+=m;
        z=sum/2;
        cout<<z<<endl;
    }
    system("pause");
}

//33
#include<iostream>
using namespace std;
void main(){
    int n;
    string name;
    cin>>n;
    float m,h,f,final;
    while(n-->0){
        cin>>name>>m>>h>>f;
        final=f*0.5+m*0.3+h*0.2;
        cout<<name<<final<<endl;
    }
    system("pause");
}

//34
#include <iostream>
using namespace std;
void main(){
  int a,b,sum=0;
  while(a>0){
      sum+=b;
      a=a-1;
      cout<<sum<<endl;
  }
  system("pause");
}

//35
#include <iostream>
using namespace std;
void main(){
    int a, b, k=0;
    while(a>=b){
        a=a-b;
        k=k+1;
        cout<<k<<a<<endl;
    }
    system("pause");
}

//36
#include<iostream>
using namespace std;
void main(){
    int n,i,p,m;
    string name;
    cin>>n;
    for(;n>=i,i=1;i++){
        cin>>p>>name;
      if(p<=1000){
          m=10*p;
      }
      else{
          m=10*1000+(p-1000)*12;
      }
      cout<<name<<m<<endl;
    }
    system("pause");
}

//37
#include<iostream>
using namespace std;
void main(){
    int a,s=0,r,n;
    cin>>n;
    while(n-->0){
        cin>>a;
        while(a>0){
        r=a%10;
        s=s*10+r;
        a/=10;
        }
        cout<<s<<endl;
    }
    system("pause");
}

//38
#include<iostream>
using namespace std;
void main(){
    int n,i,j,fact=1,sign=1,d;
    double sin=0,x,y;
    cin>>n>>d;
    x=d*3.1415/180;
    y=x*x;
    sin=x;
    j=2;
    for(i=1;i<n;i++){
        x*=y;
        sign*=-1;
        fact*=j*(j+1);
        j+=2;
        sin+=sign*x/double(fact);
    }
    cout<<sin<<endl;
system("pause");
}

//39
#include<iostream>
using namespace std;
void main(){
    int n,no,no1,no2,max;
    double avg,max1,max2;
    max1=max2=0;
    no1=no2=0;
    cin>>n;
    while(n>1){
        cin>>no>>avg;
        if(avg>max1){
            max2=max1;
            no2=no1;
            max1=avg;
            no1=no;
        }
         if(avg>max2){
            max2=avg;
            no2=no;
        }
        n--;
    }
    cout<<max1<<no1<<max2<<no2<<endl;
    system("pause");
}

//40
#include<iostream>
using namespace std;
void main(){
    int a,i=0;
    cin>>a;
    while(a>0){
        a/=10;
        i++;
    }
    cout<<i<<endl;
    system("pause");
}

//41
#include <iostream>
using namespace std;
void main(){
    int n,i;
   cin>>n;
   for(i=2;i<=n/2;i++)
   if(n%i==0){
       cout<<"adad aval nist";
       break;
   }
   if(i==n/2+1)
       cout<<"adad aval ast"<<endl;
    system("pause");
}

//43
#include <iostream>
using namespace std;
void main(){
    int a,i,s=0;
    cin>>a;
    for(i=1;i<=a/2;i++){
        if(a%i==0){
            s+=i;
        }
    }
    if(s==a){
        cout<<"adad kamel ast";
    }
    else{
        cout<<"adad kame nist";
    }
    system("pause");
}

//44
#include <iostream>
using namespace std;
void main(){
    int a,b,r,m;
    cin>>a>>b;
    m=a*b;
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    bmm=a;
    kmm=m/a;
    cout<<kmm<<bmm<<endl;
    system("pause");
}

//45
#include <iostream>
using namespace std;
void main(){
    int N,n,su,u,no;
    double avg,s,m;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>n>>no;
        s=0;
        su=0;
    }
    for(int j=0;j<n;j++) {
        cin >> u >> m;
        s = s + m * double(u);
        su = su + u;
    }
    avg=s/double(su);
    cout<<no<<avg<<endl;
    system("pause");
}

//46
#include<iostream>
using namespace std;
void main(){
    int N,c50,c20,c10,c5,c2,c1;
    cin>>N;
    c50=N/50;
    N=N%50;
    c20=N/20;
    N=N%20;
    c10=N/10;
    N=N%10;
    c5=N/5;
    N=N%5;
    c2=N/2;
    N=N%2;
    c1=N/1;
    N=N%1;
    cout<<c50<<c20<<c10<<c5<<c2<<c1<<endl;
    system("pause");
}

//47
#include<iostream>
using namespace std;
void main(){
    int c50=1,c20=1,c10=1,c5=1,c2=1,s=0;
    while(c50<=2){
        while(c20<=5){
            while(c10<=10){
                while(c5<=20){
                    while(c2<=50){
                        s=c50*50+c20*20+c10*10+c5*5+c2*2;
                        while(s<=100){
                            s+=2;
                            c2+=1;
                        }
                        cout<<c50<<c20<<c10<<c5<<c2<<endl;
                    }
                    c5+=1;
                }
                c10+=1;
            }
            c20+=1;
        }
        c50+=1;
    }
    system("pause");
}
