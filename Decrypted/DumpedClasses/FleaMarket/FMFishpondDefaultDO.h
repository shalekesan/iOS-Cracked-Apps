//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMFishpondDO, NSString;

@interface FMFishpondDefaultDO : NSObject
{
    FMFishpondDO *_defaultFishPool;
    NSString *_serverTime;
}

@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) FMFishpondDO *defaultFishPool; // @synthesize defaultFishPool=_defaultFishPool;
- (void).cxx_destruct;

@end

