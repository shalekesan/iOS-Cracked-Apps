//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRMAHarvestableProtocol-Protocol.h"
#import "NRMAJSONABLE-Protocol.h"

@class NSString;

@interface NRMAHarvestable : NSObject <NRMAHarvestableProtocol, NRMAJSONABLE>
{
    int _type;
}

@property(readonly) int type; // @synthesize type=_type;
- (id)optional:(id)arg1;
- (void)notNull:(id)arg1;
- (void)notEmpty:(id)arg1;
- (id)JSONObject;
- (id)initWithType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

