//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface TBLiveGlobalContext : NSObject
{
    NSMutableDictionary *_roomMap;
    NSString *_curRoomContext;
    NSRecursiveLock *_moduleLock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSRecursiveLock *moduleLock; // @synthesize moduleLock=_moduleLock;
@property(retain, nonatomic) NSString *curRoomContext; // @synthesize curRoomContext=_curRoomContext;
@property(retain, nonatomic) NSMutableDictionary *roomMap; // @synthesize roomMap=_roomMap;
- (void).cxx_destruct;
- (void)delRoomContent:(id)arg1;
- (id)getCurrentRoomContent:(id)arg1;
- (void)createNewRoomContext:(id)arg1;

@end

