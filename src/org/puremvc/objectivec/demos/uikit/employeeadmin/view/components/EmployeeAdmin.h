//
//  EmployeeAdmin.h
//  PureMVC_ObjectiveC
//
//  PureMVC Port to ObjectiveC by Brian Knorr <brian.knorr@puremvc.org>
//  PureMVC - Copyright(c) 2006-2008 Futurescale, Inc., Some rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserList.h"
#import "UserForm.h"

@interface EmployeeAdmin : UIView {
	UINavigationController *navigation;
	UserList *userList;
	UserForm *userForm;
}

@property(nonatomic, retain) UINavigationController *navigation;
@property(nonatomic, retain) UserList *userList;
@property(nonatomic, retain) UserForm *userForm;

-(void)showUserForm;
-(void)showUserList;
-(void)showError:(NSString *)message;

@end
