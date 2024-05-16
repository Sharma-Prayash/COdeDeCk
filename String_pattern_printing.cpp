#include<iostream>
#include<iomanip>
#include<string>
#include<cctype>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int ctr=0,j;
    char alp[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char cap_alp[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cout<<"================================="<<endl;
    cout<<" Enter the string: "<<endl;
    getline(cin,name);
    cout<<"================================="<<endl;
    int l=name.length();
//    transform(name.begin(), name.end(), name.begin(), tolower);
    for(int i=1;i<=5;i++)
    {
        ctr=0;
        do
        {
            for(j=0;j<26;j++)
            {
                if(name[ctr]==alp[j]||name[ctr]==cap_alp[j])
                    break;
            }
            ctr++;
            switch(j)
            {
                case 0:
                    {
                        for(int t=1;t<=4;t++)
                            {
                                if(t==1&&i!=1||t==2&&(i==1||i==3)||t==3&&(i==1||i==3)||t==4&&i!=1)
                                    cout<<"* ";
                                else cout<<"  ";
                            }
                            cout<<"  ";
                    }
                    break;
                case 1:
                    {
                        for(int t=1;t<=4;t++)
                        {
                            if(t==1||(i==1||i==3||i==5)&&t!=4||t==4&&(i==2||i==4))
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 2:
                    {
                        for(int t=1;t<=4;t++)
                        {
                            if((i==1||i==5)&&t!=1||t==1&&i!=1&&i!=5)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 3:
                    {
                        for(int t=1;t<=4;t++)
                        {
                            if(t==1||t==2&&(i==1||i==5)||t==3&&(i==1||i==5)||t==4&&(i==2||i==3||i==4))
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 4:
                    {
                        for(int t=1;t<=4;t++)
                        {
                            if(i==1||i==3||i==5||t==1&&(i==2||i==4))
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 5:
                    {
                        for(int t=1;t<=4;t++)
                        {
                            if(i==1||i==3||t==1)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 6:
                    {
                        for(int t=1;t<=5;t++)
                        {
                            if(i==1&&t!=1||t==1&&i!=1&&i!=5||i==5&&t!=1&&t!=5||i==3&&t>2||i==4&&t==5)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 7:
                    {
                        for(int t=1;t<=4;t++)
                        {
                            if(t==1||t==4||i==3)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 8:
                    {
                        for(int t=1;t<=3;t++)
                        {
                            if(i==1||i==5||t==2)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 9:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if(i==1||j==4&&i!=5||i==5&&(j==2||j==3)||i==4&&j==1)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 10:
                    {
                        for(int j=1;j<=4;j++)
                        {
                            if(j==1||j==2&&i==3||j==3&&(i==2||i==4)||j==4&&(i==1||i==5))
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 11:
                    {
                        for(int j=1;j<=4;j++)
                        {
                            if(j==1||i==5)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 12:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if(j==1||j==5||i==j&&i<4||i==2&&j==4)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 13:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if(j==1||j==5||i==j)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 14:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if(i==1&&(j!=1&&j!=5)||i==5&&j!=1&&j!=5||j==1&&i!=1&&i!=5||j==5&&i!=1&&i!=5)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 15:
                    {
                        for(int j=1;j<=4;j++)
                        {
                            if(j==1||j!=4&&(i==1||i==3)||i==2&&j==4)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 16:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if(i==1&&(j!=1&&j!=5)||i==5&&j!=1&&j!=5||j==1&&i!=1&&i!=5||j==5&&i!=1&&i!=5||i==4&&j==3)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 17:
                    {
                        for(int j=1;j<=4;j++)
                        {
                            if(j==1||j==2&&(i==1||i==3)||j==3&&(i==1||i==3||i==4)||j==4&&(i==2||i==3||i==5))
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 18:
                    {
                        for(int j=1;j<=4;j++)
                        {
                            if(i==1&&j!=1||i==3&&j!=1&&j!=4||i==5&&j!=4||i==2&&j==1||i==4&&j==4)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 19:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if(i==1||j==3)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 20:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if((j==1||j==5)&&i!=5||i==5&&(j!=1&&j!=5))
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 21:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if((j==1||j==5)&&i<=3||i==4&&(j==2||j==4)||i==5&&j==3)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 22:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if(j==1||j==5||i==4&&(j==2||j==4)||i==3&&j==3)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 23:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if(i==j||i==1&&j==5||i==2&&j==4||i==4&&j==2||i==5&&j==1)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 24:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if(i==j&&i<=3||i==2&&j==4||i==1&&j==5||j==3&&i>3)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 25:
                    {
                        for(int j=1;j<=5;j++)
                        {
                            if(i==1||i==5||i==2&&j==4||i==3&&j==3||i==4&&j==2)
                                cout<<"* ";
                            else cout<<"  ";
                        }
                        cout<<"  ";
                    }
                    break;
                case 26:
                    cout<<"  ";
            }
        }while(ctr<l);
        cout<<endl;
    }
}
