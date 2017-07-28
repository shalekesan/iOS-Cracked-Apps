//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSessionMemberSummaryInfo.h"

@class NSArray<PMember>, NSString;

@interface PSessionMemberSummaryInfo : NSObject <PSessionMemberSummaryInfo>
{
    unsigned long long _sessionId;
    unsigned long long _totalCount;
    NSArray<PMember> *_members;
}

@property(retain, nonatomic) NSArray<PMember> *members; // @synthesize members=_members;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

