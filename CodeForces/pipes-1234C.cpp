#include<bits/stdc++.h>
using namespace std;
 
# define ll long long
 
int v[2][200000]= {0};
ll int n;
 
int flag = 0;
 
 
void start_traverse( ll int , ll int , char );
 
 
int main()
{
	ll int q;
	cin>>q;
	while(q--)
	{
		flag = 0;
		cin>>n;
 
		ll int i,j;
		char temp;
 
		for(i = 0;i <2;i++)
		{
			for(j = 0; j<n; j++)
			{
				cin>>temp;
				if ( temp > '2' )
				v[i][j] = 1;
				else v[i][j] = 0;
			}
		}
 
 
		start_traverse( 0 , 0 , 'L'   );
		if (flag==0)
		cout<<"NO"<<'\n';
 
	}
 
}
 
 
 
 
void start_traverse( ll int i, ll int j, char c)
{
	if ( i==1 && j == n  ) { cout<<"YES"<<'\n'; flag = 1; return; }
	if ( i >= 2 || i < 0 || j >= n || j < 0 ) return;
 
 
 
	switch ( c)
	{
		case 'L' : if ( v[i][j] ) { start_traverse( i+1, j, 'U' );
									start_traverse( i-1, j, 'B' ); }
					else start_traverse( i, j+1, 'L'  ); break;
 
		case 'U' : if ( v[i][j] )  start_traverse( i, j+1, 'L' );
					else start_traverse( i+1 , j, 'U'  );
					break;
 
		// case 'R' : if ( v[i][j] ) { start_traverse( i+1, j, 'U' );
		// 							start_traverse( i-1, j, 'B' ); }
		// 			else start_traverse( i, j+1, 'R'  ); break;
 
		case 'B' : if ( v[i][j] )  start_traverse( i, j+1, 'L'  );
					else start_traverse( i-1, j, 'B'  );
					break;
	}
 
}
