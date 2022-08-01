#include<bits/stdc++.h>
using namespace std;
bool
check_prime (int n)
{
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1 || n == 2)
    {
      is_prime = false;
    }

  for (int i = 2; i <= n / 2; ++i)
    {
      if (n % i == 0)
	{
	  is_prime = false;
	  break;
	}
    }

  return is_prime;
}

// reverse function
int
rev (int n)
{
  int rem, res = 0;
  while (n != 0)
    {
      rem = n % 10;
      res = (res * 10) + rem;
      n = n / 10;
    }
  return res;
}

//fun end

int
main ()
{
  int n, count = 0;
  cin >> n;
  int arr[n];
  for (int k = 0; k < n; k++)
    {
      cin >> arr[k];
    }
  for (int i = 0; i < n; i++)
    {
      int a = arr[i];
      //cout<<check_prime(a);
      if (check_prime (a))
	{
	  //cout<<rev(a);
	  int r = rev (a);
	  if (check_prime (r))
	    {
	      ++count;
	    }
	  //cout<<count;
	}
    }
  cout << count;
  return 0;
}
