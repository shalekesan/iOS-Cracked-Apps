//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIMSessionAMP.h"

@class NSString, YWConversation;

@interface TBIMSessionWangxin : TBIMSessionAMP
{
    NSString *_TmpSessionId;
    YWConversation *_conversation;
}

@property(retain, nonatomic) YWConversation *conversation; // @synthesize conversation=_conversation;
@property(copy, nonatomic) NSString *TmpSessionId; // @synthesize TmpSessionId=_TmpSessionId;
- (void).cxx_destruct;
- (id)gType;
- (id)gTag;
- (_Bool)SetLastMessage:(id)arg1;
- (int)getSessionType;
- (id)lastAitaMessageDate;
- (id)lastAitaMessageCode;
- (id)getLastMessage;
- (long long)getShareItemUnreadedCount;
- (long long)getRealUnreadCount;
- (long long)getUnreadCount;
- (id)typeImageName;
- (id)getSessionID;
- (id)getInerUser;
- (id)initWithSessionId:(id)arg1;
- (id)initWithAMPSession:(id)arg1;

@end
