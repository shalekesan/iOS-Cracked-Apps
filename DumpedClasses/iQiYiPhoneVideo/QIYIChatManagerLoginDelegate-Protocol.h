//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QIYIChatManagerBaseDelegate-Protocol.h"

@class NSArray, NSDictionary, NSError;

@protocol QIYIChatManagerLoginDelegate <QIYIChatManagerBaseDelegate>

@optional
- (void)didLoginMessageServerSuccess:(NSDictionary *)arg1;
- (void)didLoginTickedOutError:(id)arg1;
- (void)didLoginWithFinishBlock:(void (^)(_Bool, NSError *))arg1;
- (void)didRefreshPaopaos:(NSArray *)arg1;
- (void)switchServerConnectStatus:(long long)arg1 error:(NSError *)arg2;
@end

