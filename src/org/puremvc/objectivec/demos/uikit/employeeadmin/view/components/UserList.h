//
//  UserList.h
//  PureMVC_ObjectiveC
//
//  PureMVC Port to ObjectiveC by Brian Knorr <brian.knorr@puremvc.org>
//  PureMVC - Copyright(c) 2006-2008 Futurescale, Inc., Some rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserVO.h"

@protocol UserListViewControllerDelegate

-(void)onSelect:(UserVO *)userVO;
-(void)onDelete:(UserVO *)userVO;
-(void)onNew;
-(void)onUserListDidAppear;

@end

@interface UserList : UITableViewController {
	NSMutableArray *users;
	id<UserListViewControllerDelegate> delegate;
}

@property(nonatomic, retain) NSMutableArray *users;
@property(nonatomic, retain) id<UserListViewControllerDelegate> delegate;

-(void)reloadUsers:(NSMutableArray *)users;

@end
