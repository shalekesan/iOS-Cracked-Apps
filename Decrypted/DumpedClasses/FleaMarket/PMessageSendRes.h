//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMessageSendRes.h"

@class NSString, PMessage, PResult;

@interface PMessageSendRes : NSObject <PMessageSendRes>
{
    PResult *_result;
    unsigned long long _sessionId;
    PMessage *_message;
}

@property(retain, nonatomic) PMessage *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) PResult *result; // @synthesize result=_result;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

