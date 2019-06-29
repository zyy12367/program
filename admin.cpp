#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

class Admin
{
	string id;
	double money;
	public:
		void login();
		bool check();
		void dispose the loss();
		void dispose the logout();
		void Deposit(double);
		void GetMoney();
		void DrawMoney(double);
		void transfer accounts(Admin&,double);	
		void logout();
};

void Admin::login()
{
	printf("Please enter the manager accout:\n");
	IdenError:
	cin >> ManagerId;
	printf("Please enter the manager password:\n");
	MaPassError:
	cin >> Managerpwd;
	if(exists(SELECT b_id FROM User)){
		if(exists(SELECT b_password FROM User WHERE b_id=ManagerId))
			printf("Hello manager"\n);
		else{
			printf("password input error\n"); 
			printf("try again:\n");
			goto MapassError;
		}
	}
	else{
		printf("Your account not exists\n");
		printf("Please enter the correct accout:");
		goto IdenError;
	}
}
void Admin::dispose the logout()
{
	if(exists(SELECT b_id FROM User))
	{
		b_MFA_Onlogin=false;
		printf("Finished!\n");
	}
	else	printf("Your account has been logouted!\n");	
}
void Admin::dispose the loss()
{
	if(b_MFA_Onlogin){
		b_MFA_Onlogin=false;
		printf("Finished!\n");
	}
	else	printf("Your account has been blocked\n");
}
bool Admin::check()
{
	if(exists(SELECT b_id FROM User))
	{
		if(exists(SELECT b_password FROM User WHERE b_id=UserId))
		{
			printf("All right\n");
			return true;#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

class Admin
{
	string id;
	double money;
	public:
		void login();
		bool check();
		void dispose the loss();
		void dispose the logout();
		void Deposit(double);
		void GetMoney();
		void DrawMoney(double);
		void transfer accounts(Admin&,double);	
		void logout();
};

void Admin::login()
{
	printf("Please enter the manager accout:\n");
	IdenError:
	cin >> ManagerId;
	printf("Please enter the manager password:\n");
	MaPassError:
	cin >> Managerpwd;
	if(exists(SELECT b_id FROM User)){
		if(exists(SELECT b_password FROM User WHERE b_id=ManagerId))
			printf("Hello manager"\n);
		else{
			printf("password input error\n"); 
			printf("try again:\n");
			goto MapassError;
		}
	}
	else{
		printf("Your account not exists\n");
		printf("Please enter the correct accout:");
		goto IdenError;
	}
}
void Admin::dispose the logout()
{
	if(exists(SELECT b_id FROM User))
	{
		b_MFA_Onlogin=false;
		printf("Finished!\n");
	}
	else	printf("Your account has been logouted!\n");	
}
void Admin::dispose the loss()
{
	if(b_MFA_Onlogin){
		b_MFA_Onlogin=false;
		printf("Finished!\n");
	}
	else	printf("Your account has been blocked\n");
}
bool Admin::check()
{
	if(exists(SELECT b_id FROM User))
	{
		if(exists(SELECT b_password FROM User WHERE b_id=UserId))
		{
			printf("All right\n");
			return true;
		}
		else
			printf("The password is wrong\n");
	}
	else
		printf("Your account not exist\n");
	return false;
}

void Admin::Deposit(double money)
{
	if(b_MFA_Onlogin)	b_balance+=money;
	else				printf("Your account is blocked\n");
}

void Admin::GetMoney()
{
	if(b_MFA_Onlogin)	
		printf("The balance of your account is %lf\n",b_balance);
	else		printf("Your account is blocked\n");
}

void Admin::DrawMoney(double money)
{
	if(b_MFA_Onlogin)	b_balance-=money;
	else				printf("Your account is blocked\n");
}

void transfer accounts(Admin& user,double money);
{
	if(b_MFA_Onlogin)
	{
		if(b_balance<money)
			printf("Your balance is not sufficient\n");
		else{
			b_balance-=money;
			user.money+=money;
		}
	}
	else		printf("Your account is blocked\n");
}
void Admin::logout()
{
	b_MFA_Onlogin=false;
}

		}
		else
			printf("The password is wrong\n");
	}
	else
		printf("Your account not exist\n");
	return false;
}

void Admin::Deposit(double money)
{
	if(b_MFA_Onlogin)	b_balance+=money;
	else				printf("Your account is blocked\n");
}

void Admin::GetMoney()
{
	if(b_MFA_Onlogin)	
		printf("The balance of your account is %lf\n",b_balance);
	else		printf("Your account is blocked\n");
}

void Admin::DrawMoney(double money)
{
	if(b_MFA_Onlogin)	b_balance-=money;
	else				printf("Your account is blocked\n");
}

void transfer accounts(Admin& user,double money);
{
	if(b_MFA_Onlogin)
	{
		if(b_balance<money)
			printf("Your balance is not sufficient\n");
		else{
			b_balance-=money;
			user.money+=money;
		}
	}
	else		printf("Your account is blocked\n");
}
void Admin::logout()
{
	b_MFA_Onlogin=false;
}
