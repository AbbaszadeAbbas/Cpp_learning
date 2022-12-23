#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,sum = 0;
    cin>>a;
    string s = to_string(a);
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    if(to_string(a) == s){
        cout<<0;
        return 0;
    }
    else{
        sort(s.begin(),s.end());
        sum+=(int)s[s.size() - 1] - 48;
        for(long long i = 0;i<s.size()-1;i++){
            sum= sum*10 + s[i] - 48;
        }
        if(sum > a){
            cout<<sum;
        }else{
            sum = 0;
            sum+=((int)s[s.size() - 1] - 48)*10;
            sum+=(int)s[s.size() - 2] - 48;
            for(long long i = 0;i<s.size()-2;i++){
                sum= sum*10 + s[i] - 48;
            }
            if(sum > a){
                cout<<sum;
            }else{
                sum = 0;
                sum+=((int)s[s.size() - 1] - 48)*100;
                sum+=((int)s[s.size() - 2] - 48)*10;
                sum+=(int)s[s.size() - 3] - 48;
                for(long long i = 0;i<s.size()-3;i++){
                    sum= sum*10 + s[i] - 48;
                }
                if(sum > a){
                    cout<<sum;
                }else{
                    sum = 0;
                    sum+=((int)s[s.size() - 1] - 48)*1000;
                    sum+=((int)s[s.size() - 2] - 48)*100;
                    sum+=((int)s[s.size() - 3] - 48)*10;
                    sum+=(int)s[s.size() - 4] - 48;
                    for(long long i = 0;i<s.size()-4;i++){
                        sum= sum*10 + s[i] - 48;
                    }
                    if(sum > a){
                        cout<<sum;
                    }else{
                        sum = 0;
                        sum+=((int)s[s.size() - 1] - 48)*10000;
                        sum+=((int)s[s.size() - 2] - 48)*1000;
                        sum+=((int)s[s.size() - 3] - 48)*100;
                        sum+=((int)s[s.size() - 4] - 48)*10;
                        sum+=(int)s[s.size() - 5] - 48;
                        for(long long i = 0;i<s.size()-5;i++){
                            sum= sum*10 + s[i] - 48;
                        }
                        if(sum > a){
                            cout<<sum;
                        }else{
                            sum = 0;
                            sum+=((int)s[s.size() - 1] - 48)*100000;
                            sum+=((int)s[s.size() - 2] - 48)*10000;
                            sum+=((int)s[s.size() - 3] - 48)*1000;
                            sum+=((int)s[s.size() - 4] - 48)*100;
                            sum+=((int)s[s.size() - 5] - 48)*10;
                            sum+=(int)s[s.size() - 6] - 48;
                            for(long long i = 0;i<s.size()-6;i++){
                                sum= sum*10 + s[i] - 48;
                            }
                            if(sum > a){
                                cout<<sum;
                            }else{
                                sum = 0;
                                sum+=((int)s[s.size() - 1] - 48)*1000000;
                                sum+=((int)s[s.size() - 2] - 48)*100000;
                                sum+=((int)s[s.size() - 3] - 48)*10000;
                                sum+=((int)s[s.size() - 4] - 48)*1000;
                                sum+=((int)s[s.size() - 5] - 48)*100;
                                sum+=((int)s[s.size() - 6] - 48)*10;
                                sum+=(int)s[s.size() - 7] - 48;
                                for(long long i = 0;i<s.size()-7;i++){
                                    sum= sum*10 + s[i] - 48;
                                }
                                if(sum > a){
                                    cout<<sum;
                                }else{
                                    reverse(s.begin(),s.end());
                                    cout<<s;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
