//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FXSMvComment, NSString;

@protocol FXMvCommentListVllDelegate <NSObject>

@optional
- (void)commentListUpdateTotal:(long long)arg1;
- (void)commentListNeedTips:(NSString *)arg1;
- (void)commentListToLogin;
- (void)commentListClickUser:(long long)arg1;
- (void)commentListClickReply:(FXSMvComment *)arg1;
@end
