//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAuthenticationHandlerResponse, FBAuthenticationManager, NSError;

@protocol FBAuthenticationManagerDelegate <NSObject>
- (void)authenticationManager:(FBAuthenticationManager *)arg1 didAuthenticateWithResponse:(FBAuthenticationHandlerResponse *)arg2;
- (void)authenticationManager:(FBAuthenticationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)authenticationManager:(FBAuthenticationManager *)arg1 ready:(_Bool)arg2;

@optional
- (_Bool)authenticationManager:(FBAuthenticationManager *)arg1 shouldAttemptMethod:(unsigned long long)arg2;
- (void)authenticationManagerDidReceiveOAuthToken:(FBAuthenticationManager *)arg1;
- (_Bool)authenticationManagerShouldSkipRestartOnForeground:(FBAuthenticationManager *)arg1;
@end
