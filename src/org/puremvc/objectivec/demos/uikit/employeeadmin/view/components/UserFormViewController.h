//
//  UserFormViewController.h
//  PureMVC_ObjectiveC
//
//  PureMVC Port to ObjectiveC by Brian Knorr <brian.knorr@puremvc.org>
//  PureMVC - Copyright(c) 2006-2008 Futurescale, Inc., Some rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserVO.h"

@protocol UserFormViewControllerDelegate

-(void)onAdd:(UserVO *)userVO;
-(void)onUpdate:(UserVO *)userVO;

@end


typedef enum {
	ADD, EDIT
} Mode;

@interface UserFormViewController : UITableViewController {
	UserVO *userVO;
	UITextField *firstNameTextField, *lastNameTextField, *emailTextField, *usernameTextField, *passwordTextField, *confirmPasswordTextField;
	Mode mode;
	id<UserFormViewControllerDelegate> delegate;
}

@property(nonatomic, retain) UserVO *userVO;
@property(nonatomic, retain) UITextField *firstNameTextField, *lastNameTextField, *emailTextField, *usernameTextField, *passwordTextField, *confirmPasswordTextField;
@property Mode mode;
@property(nonatomic, retain) id<UserFormViewControllerDelegate> delegate;

@end