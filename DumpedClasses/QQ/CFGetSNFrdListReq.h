//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class CFPushBannerMsgBox, NSMutableDictionary;

@interface CFGetSNFrdListReq : SAMRequestItem
{
    _Bool _over;
    int _sequence;
    int _currentIndex;
    NSMutableDictionary *_onefriendList;
    NSMutableDictionary *_reasonsDict;
    CFPushBannerMsgBox *_msgBox;
}

- (void).cxx_destruct;
- (_Bool)updateData:(void *)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;
- (id)init;

// Remaining properties
@property(nonatomic) int currentIndex; // @dynamic currentIndex;
@property(retain, nonatomic) CFPushBannerMsgBox *msgBox; // @dynamic msgBox;
@property(retain, nonatomic) NSMutableDictionary *onefriendList; // @dynamic onefriendList;
@property(nonatomic) _Bool over; // @dynamic over;
@property(retain, nonatomic) NSMutableDictionary *reasonsDict; // @dynamic reasonsDict;
@property(nonatomic) int sequence; // @dynamic sequence;

@end
