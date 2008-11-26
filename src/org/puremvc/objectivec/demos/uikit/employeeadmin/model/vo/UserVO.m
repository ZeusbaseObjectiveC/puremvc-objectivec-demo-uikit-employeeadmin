//
//  UserVO.m
//  PureMVC_ObjectiveC
//
//  PureMVC Port to ObjectiveC by Brian Knorr <brian.knorr@puremvc.org>
//  PureMVC - Copyright(c) 2006-2008 Futurescale, Inc., Some rights reserved.
//

#import "UserVO.h"


@implementation UserVO

@synthesize username, firstName, lastName, email, password, department;

+(id)withUserName:(NSString *)username firstName:(NSString *)firstName lastName:(NSString *)lastName email:(NSString *)email password:(NSString *)password department:(NSString *)department {
	UserVO *userVO = [[[UserVO alloc] init] autorelease];
	userVO.username = username;
	userVO.firstName = firstName;
	userVO.lastName = lastName;
	userVO.email = email;
	userVO.password = password;
	userVO.department = department;
	return userVO;
}

-(NSString *)givenName {
	return [NSString stringWithFormat:@"%@ %@", firstName, lastName];
}

-(void)dealloc {
	self.username = nil;
	self.firstName = nil;
	self.lastName = nil;
	self.email = nil;
	self.password = nil;
	self.department = nil;
	[super dealloc];
}

@end
