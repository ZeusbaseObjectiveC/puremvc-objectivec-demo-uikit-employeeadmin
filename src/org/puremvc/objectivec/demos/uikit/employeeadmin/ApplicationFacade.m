//
//  ApplicationFacade.m
//  PureMVC_ObjectiveC
//
//  PureMVC Port to ObjectiveC by Brian Knorr <brian.knorr@puremvc.org>
//  PureMVC - Copyright(c) 2006-2008 Futurescale, Inc., Some rights reserved.
//

#import "ApplicationFacade.h"
#import "StartupCommand.h"
#import "AddUserCommand.h"
#import "UpdateUserCommand.h"
#import "GetUsersCommand.h"

@implementation ApplicationFacade

-(void)startup:(id)app {
	[self sendNotification:Startup body:app];
}

+(ApplicationFacade *)getInstance {
	return (ApplicationFacade *)[super getInstance];
}

-(void)initializeController {
	[super initializeController];
	[self registerCommand:Startup commandClassRef:[StartupCommand class]];
	[self registerCommand:AddUser commandClassRef:[AddUserCommand class]];
	[self registerCommand:UpdateUser commandClassRef:[UpdateUserCommand class]];
	[self registerCommand:GetUsers commandClassRef:[GetUsersCommand class]];
}

@end
