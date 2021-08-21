                                   //in the name of god
                                   // mabani: mr godaz
                                   //producer: seyed hesammodin hossieni
                                   //the third chapter exercises


#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<ios>
#include<iosfwd>
#include <ostream>
#include<sstream>
#include<streambuf>
#include<exception>
#include<limits>
#include<new>
#include<typeinfo>
#include<thread>
#include<mutex>
#include<condition_variable>
#include<future>
#include<complex>
#include<random>
#include<valarray>
#include<numeric>
#include<regex>
#include<chrono>
#include<functional>
#include<iterator>
#include<locale>
#include<memory>
#include<stdexcept>
#include<tuple>
#include<utility>
#include<array>
#include<bitset>
#include<deque>
#include<forward_list>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<algorithm>
#include<cmath>
 using namespace std;



//1
void main(){
    const double pi=3.1415;
            double r,m,a;
    cin>>r;
    m=2*pi*r;
            a=pi*r*r;
                    cout<<m<<a;
    system("pause");
}



//2
  void main(){
    int n,s=0,i=1;
    cin>>n;
    for(;i<=n;i++){
        s=s+i;
        }
        cout<<s<<endl;
    system("pause");
    }

    //3
   void main(){
    long int s,x1,y1,x2,y2,x3,y3;
    double a,b,c,p;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a=sqrt((x2-x1)^2+(y2-y1)^2);
    b=sqrt((x3-x1)^2+(y3-y1)^2);
    c=sqrt((x3-x2)^2+(y3-y2)^2);
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<p<<s<<endl;
    system("pause");
}

//4
void main(){
    int n,r,p=1,s=0;
    cin>>n;
    while(n>0){
        r=n-n/10*10;
        s=s+r*p;
        p=p*2;
        n=n/10;
        }
        cout<<s<<endl;
    system ("pause");
    }

    //5
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

    //7
  void main(){
    string m,max;
    int max1=0,x,N;
    cin>>N;
    while(N>0){
        cin>>m>>x;
        if(x>max1){
            max=m;
            max1=x;
        }
        N--;
    }
    cout<<m<<max1<<endl;
    system("pause");
}

//8
void main(){
    int n,m;
    cin>>n>>m;
    int bmm=n*m;
    while(m>0){
        int t=n%m;
        n=m;
        m=t;
    }
    cout<<bmm<<endl;
    system("pause");
}

//9
 void main(){
    double x;
    cin>>x;
    double z=1/x,i=1,s=x,j=2,sign=-1;
    while(i<=10){
        s+=j*(x*x);
        j++;
        i++;
        z+=(1/s)*sign;
    }
    cout<<z<<endl;
    system("pause");
}

//10
void main(){
    double i=1,e,h,hp;
    string name;
    while(i<=200){
        cin>>name>>h;
        if(h>=250000){
            e=0.07*h;
            hp=h+e;
        }
        else if(h>190000 && h<250000){
            e=0.055*h;
            hp=h+e;
        }
        else if(h<=190000){
            e=0.04*h;
            hp=h+e;
        }
        cout<<name<<e<<hp<<endl;
        i++;
    }
    system("pause");
}

//11
void main(){
    int N,a,b,c;
    cin>>N>>a>>b;
    if(a>b){
        while(N-2>0){
            cin>>c;
            if(c<b){
                b=c;
                N--;
            }
            else{
                cout<<"adad moratab nist"<<endl;
                system("pause");
                exit(1);
            }
        }
        cout<<"nozuli ast"<<endl;
    }
    else{
        while(N-2>0){
            cin>>c;
            if(c>b){
                b=c;
                N--;
            }
            else{
                cout<<"adad moratab nist"<<endl;
                system("pause");
                exit(1);
            }
        }
        cout<<"soudi ast"<<endl;
    }
    system("pause");
}

//12
void main(){
    int s=0,i=1,p=1,n;
    cin>>n;
    while(i<=n){
        s+=p;
        p+=2;
        i++;
    }
    cout<<"tavan2 adad=:"<<s<<endl;
    system("pause");
}

//13
 void main(){
    int n,x,r,t;
    cin>>n;
    while(n>0){
        int s=0;
        cin>>x;
        t=x;
        while(x>0){
            r=x%10;
            s=s+r;
            x/=10;
        }
        if(s==9){
            cout<<t<<"bar 9 bakhsh pazir ast"<<endl;
        }
        else{
            cout<<t<<"bar9 bakhsh pazirnist"<<endl;
        }
        n--;
    }
    system("pause");
}

//14
 void main(){
    int x,r,t,s=0;
    cin>>x;
    t=x;
    while(x>0){
        r=x%10;
        s=r+s*10;
        x/=10;
    }
    if(s==t){
        cout<<t<<"motagharen ast"<<endl;
    }
    else{
        cout<<t<<"motagharen nist"<<endl;
    }
    system("pause");
}

//15
void main(){
    int n,d,hp,tv,tk;
    string name;
    double h;
    cin>>n;
    while(n>0){
        cin>>d>>hp>>name;
        int i=1,s=0,z=0;
        while(i<=d){
            cin>>tv>>tk;
            z=tk-tv;
            s+=z;
            i++;
        }
        if(s>40){
            h=(40*hp)+(s-40)*1.5*hp;
        }
        else{
            h=s*hp;
        }
        cout<<name<<h<<s-40<<endl;
        n--;
    }
    system("pause");
}

//16
void main(){
    float e=1,f=1,i=2;
    while(i<=10){
        f*=i;
        e=e+(1/f);
        i+=1;
    }
    cout<<e<<endl;
    system("pause");
}

//17
void main(){
    int n,x;
    int r,t;
    cin>>n;
    while(n>0){
        cin>>x;
        t=x;
        while(x>0){
           x =x%10;
            x=x/10;
            if(x==0){
                cout<<t<<endl;
            }
        }
        n--;
    }
    system("pause");
}

//18
void main(){
    int m,tb,ab,tv,av,p,s;
    string name;
    cin>>name>>m>>tb>>ab>>tv>>av;
    p=ab*tb;
    s=av*tv;
    m=s+m;
    m=m-p;
    cout<<name<<m<<endl;
    system("pause");
}

//19
void main(){
    int tdr,tdt,tde,af,am,tf,tm,d,a,r,g;
    tdr=tdt=tde=af=am=tf=tm=0;
    string name ,id;
    cin>>id>>d>>r>>g;
    if(d==1){
        tdt++;
    }
    else if (d==2){
        tde++;
    }
    else if(d==3){
        tdr++;
    }
    if(g==0){
        af+=a;
        tf++;
    }
    else if(g==1){
        am+= a;
        tm++;
    }
    cout<<tdr<<tdt<<tde<<af<<am<tm;
    system("pause");
}

//20
void main(){
    int i=50,s=0,k;
    cin>>k;
    for(;i<=140;i++){
        s+=(2*k*(i+1))^2;
    }
    cout<<s<endl;
    system("pause");
}

//21
  void amin(){
    double i=2,s=1,j=1;
    const double pi=3,14159;
    while((s-pi)*i=0){
        s=s*((i/j)*((j+1)/(i+1)));
        i++;
        j++;
        cout<<s<<endl;
    }
    system("pause");
}

//23
void main(){
   int n,x,r,t,c=0;
   cin>>n;
   while(n>0){
       long int s=0;
       cin>>x;
       t=x;
       for(;x>0;x/=10){
           r=x%10;
           s=s+r;
       }
       if(s>=45){
           c++;
       }
       n--;
   }
   cout<<c<<endl;
   system("pause");
}

//24
 void main(){
    double i=1,n,e,h,hp,max=0;
    string id,id1;
    cin>>n;
    while(i<=n){
        cin>>id>>h;
        if(h>=700000){
            e=0.1*h;
            hp=h+e;
        }
        else if(h>500000 && h<700000){
            e=0.1*h;
            hp=h+e;
        }
        else if(h<=500000){
            e=0.3*h;
            hp=h+e;
        }
        cout<<id<<h<<hp<<endl;
        if(h>max){
            max=h;
            id1=id;
        }
        i++;
    }
    cout<<id1<<endl;
    system("pause");
}

//25
void main (){
    int k, i=1,p;
    cin>>k;
    while(i<=10){
        p=k*i;
        i++;
        cout<<p<<endl;
    }
    system("pause");
}

//26
void main(){
int n,i,c=0;
cin>>n;
for(i=2;i<=n;i++){
    if(n%i==0){
        while(n%i==0){
            n/=i;
            c++;
        }
        cout<<i<<c<<endl;
    }
    c=0;
}
system("pause");
}

//27
void main(){
    int n,s=0,i,j;
    cin>>n;
    for(i=3;i<=n;i++){
        if(i%j==0){
            s+=j;
        }
    }
    if(i==s){
        cout<<i<<"adad kamel ast"<<endl;
    }
    s=0;
    system("pause");
}

//28
void main(){
    double s=1,f=1,sign=-1,t,q,p;
    int x,i=1;
    cin>>x;
    while(i<=4){
        s+=sign*((x^i)/(f*i));
        sign=-sign;
        f*=i;
        i++;
    }
    t=int(s);
    q=t-s;
    p=int(q);
    q=float(p/1000);
    if(t<0){
        t=t-q;
    }
    else{
        t=t+q;
    }
    cout<<t<<endl;
    system("pause");
}

//29
void main(){
    int N,c250,c100,c50,c20,c10,c5,c2,c1;
    cin>>N;
    c250=N/250;
            N=N%250;
            c100=N/100;
            N=N%100;
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
            cout<<c250<<c100<<c50<<c20<<c10<<c5<<c2<<c1<<endl;
            system("pause");
}

//30
void main(){
    int n;
    int i;
    double a,b,d,s=0;
    cin>>n>>a>>b;
  d=(b-a)/n;
  for(i=0;i<n;i++){
      s+=(pow(a+d*i/2)+pow(a+d*(i+2))*d/2);
    }
    cout<<s<<endl;
    system("pause");
}


