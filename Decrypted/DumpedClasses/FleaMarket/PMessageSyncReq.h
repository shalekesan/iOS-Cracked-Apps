//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMessageSyncReq.h"

@class NSString;

@interface PMessageSyncReq : NSObject <PMessageSyncReq>
{
    int _type;
    int _fetchs;
    unsigned long long _sessionId;
    unsigned long long _start;
    unsigned long long _version;
}

@property(nonatomic) int fetchs; // @synthesize fetchs=_fetchs;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

