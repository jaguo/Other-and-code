#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
int main() {
	char s[10];
	int i,ans;
	while(cin>>s) {
		ans=0;
		priority_queue<int ,vector<int>, greater<int> > que;
		int len=strlen(s);
		//cout<<s<<endl;
		while(len) {
			int val=0;
			for(i=0; i<len; i++) {
					if(s[i]!='0') {
						val=val*10+1;
						s[i]='0'+(s[i]-'1');
					}
					else {
						val=val*10+0;
						s[i]='0'+(s[i]-'0');
					}
			}
			que.push(val);
			ans++;
			if(s[0]!='0') continue;
			else {
				i=0;
			 	while(s[i]=='0') i++;
			 	int index=0;
			 	while(i<len) {
			 		s[index++] = s[i++];
				 }
			 	s[index]='\0';
			 	//cout<<s<<endl;
			 	len=strlen(s);
			}
		}
		
		cout<<ans<<endl;
		cout<<que.top();
		que.pop();
		while(!que.empty()) {
			cout<<' '<<que.top();
			que.pop();
		}
	}
	return 0;
}

