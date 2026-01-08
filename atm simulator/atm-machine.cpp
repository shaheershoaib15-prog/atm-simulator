#include <iostream>
#include <string>
using namespace std;

int main(){

  cout<< "-----------------------------" << endl;
  cout<< "  welcome to the atm"<< endl;
  cout<< "-----------------------------" << endl;

  cout<< "1. admin login"<< endl;
  cout<< "2. user login"<< endl; 
  cout<< "3. exit"<< endl;
  cout<< "\n enter your choice: admin/user/exit \n"<< endl;

  string login_choice;                                                                     // declare and initialize
  int admin_id=1001, admin_pass=5678;
  int entered_admin_id, entered_admin_pass, entered_user_id, entered_user_pass;

  cin>> login_choice;

  if(login_choice == "admin"){                                                                     //Admin login
    cout<< "enter admin id: "<< endl;
    cin>> entered_admin_id;
    cout<< "enter admin password: "<< endl;
    cin>> entered_admin_pass;

     if(entered_admin_id == admin_id && entered_admin_pass == admin_pass){                    //checking credentials
        cout<< "\n admin login successful! \n"<< endl;

        bool keep_running = true;                                                                      //loop
        while(keep_running){
          cout<< "\n 1. view account number and balance"<< endl;                                   //admin sub menu
          cout<< " 2. register a new member"<< endl;
          cout<< " 3. check total bank balance"<<endl;
          cout<< " 4. reset user password"<< endl;
          cout<< " 5. logout"<< endl;

          cout<< "\n enter your choice: 1/2/3/4/5 \n"<< endl;
          cin>> login_choice;

          int user1_account=3003, user1_balance=1500, user_pass1=1234;                                       //user data
          int user2_account=4004, user2_balance=2500, user_pass2=1234;
          int user3_account=5005, user3_balance=3500, user_pass3=1234;
          int entered_user_id, entered_user_pass;
          int new_account1, new_acount1_balance, new_account2, new_account2_balance;
          int total_balance;

          total_balance = user1_balance + user2_balance + user3_balance;

            if(login_choice == "1"){

              cout<< "\n displaying account number and balance... \n "<< endl;                            //account details
              cout<< " Account No: " << user1_account << " - Balance: $" << user1_balance << endl;  
              cout<< " Account No: " << user2_account << " - Balance: $" << user2_balance << endl;
              cout<< " Account No: " << user3_account << " - Balance: $" << user3_balance << endl;
            }
            else if (login_choice == "2"){

              cout<< "\n registering a new member... \n "<< endl;                                        //register new member
              cout<< " enter new account number: "<< endl;
              cin>> new_account1;
              cout<< " enter initial balance: "<< endl;
              cin>> new_acount1_balance;
              cout<< "\n new member registered successfully! \n"<< endl;

              total_balance = total_balance + new_acount1_balance;
            }
            else if(login_choice == "3"){

              cout<< "\n checking total bank balance... \n "<< endl;                                     //total bank balance
              cout<< " total bank balance is: $" << total_balance << endl;
            }
            else if(login_choice == "4"){

              cout<< "\n resetting user password... \n "<< endl;                                         //reset user password
              cout<< " enter user acc no. "<< endl;
              int user_no;
              cin>> user_no;
               if(user_no == user1_account){
                 cout<< " enter new password for user 1: "<< endl;
                 cin>> user_pass1;
                 cout<< "\n password reset successfully! \n"<< endl;
               }
               else if(user_no == user2_account){
                 cout<< " enter new password for user 2: "<< endl;
                 cin>> user_pass2;
                 cout<< "\n password reset successfully! \n"<< endl;
               }
               else if(user_no == user3_account){
                 cout<< " enter new password for user 3: "<< endl;
                 cin>> user_pass3;
                 cout<< "\n password reset successfully! \n"<< endl;
               }
               else{
                 cout<< "\n invalid account number. returning to admin menu. \n"<< endl;
               }
            }
            else if(login_choice == "5"){
              cout<< "\n logging out... goodbye! "<< endl;

              keep_running = false;                                                                     //loop exit condition
            }
          
        }
      } else{
        cout<< "\n invalid id or password. please try again. "<< endl;
      }
  }
  else if(login_choice == "user"){                                                                        //user login
    cout<< "enter user id: "<< endl;
    cin>> entered_user_id;
    cout<< "enter user password: "<< endl;
    cin>> entered_user_pass;

    int user1_account=3003, user1_balance=1500, user_pass1=1234;                                       //user data again
    int user2_account=4004, user2_balance=2500, user_pass2=1234;
    int user3_account=5005, user3_balance=3500, user_pass3=1234;

    if(entered_user_id == user1_account && entered_user_pass == user_pass1){                          //checking credentials
        cout<< "\n user login successful! "<< endl; 

        bool keep_running = true;                                                                      //loop
        while(keep_running){

          cout<< "\n 1. check balance"<< endl;                                                       //user sub menu
          cout<< " 2. withdraw money"<< endl;  
          cout<< " 3. deposit money"<< endl;
          cout<< " 4. logout"<< endl;
          cout<< "\n enter your choice: 1/2/3/4 \n"<< endl;

          cin>> login_choice;
          if(login_choice == "1"){

            cout<< "\n checking balance... \n "<< endl;                                               //check balance
            cout<< " your current balance is: $" << user1_balance << endl;
          }
          else if(login_choice == "2"){

            int withdraw_amount;
            cout<< "\n enter amount to withdraw: "<< endl;                                            //withdraw money
            cin>> withdraw_amount;
            if(withdraw_amount <= user1_balance){
              user1_balance -= withdraw_amount;
              cout<< "\n please collect your cash. \n"<< endl;
            } else{
              cout<< "\n insufficient balance. \n"<< endl;
            }
          }
          else if(login_choice == "3"){

            int deposit_amount;
            cout<< "\n enter amount to deposit: "<< endl;                                              //deposit money
            cin>> deposit_amount;
            user1_balance += deposit_amount;
            cout<< "\n amount deposited successfully! \n"<< endl;
          }
          else{
            cout<< "\n logging out... goodbye! "<< endl;
          }

          if(login_choice == "4"){                                                                //loop exit condition
            keep_running = false;
          }
        }

      }
      else{
        cout<< "\n invalid id or password. please try again. "<< endl;
  }

   }
 }
