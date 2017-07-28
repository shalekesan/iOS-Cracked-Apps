//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMessageSyncRes.h"

@class NSArray<PMessage>, NSString, PResult;

@interface PMessageSyncRes : NSObject <PMessageSyncRes>
{
    _Bool _hasMore;
    int _type;
    int _fetchs;
    PResult *_result;
    unsigned long long _sessionId;
    unsigned long long _start;
    NSArray<PMessage> *_messages;
}

@property(retain, nonatomic) NSArray<PMessage> *messages; // @synthesize messages=_messages;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) int fetchs; // @synthesize fetchs=_fetchs;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) PResult *result; // @synthesize result=_result;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

