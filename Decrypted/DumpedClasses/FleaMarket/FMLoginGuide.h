//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBSimpleStaticCommand.h"

@class TBMBDefaultMediator;

@interface FMLoginGuide : TBMBSimpleStaticCommand
{
    TBMBDefaultMediator *_mediator;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)$$loginFailed:(id)arg1;
- (void)$$loginSuccess:(id)arg1;
- (void)requestOneMsgForNewUserIfNeeded;
- (void)checkLoginStatus;
- (id)init;

@end

