//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TYPowerInfo;

@interface TYPowerCalculator : NSObject
{
    TYPowerInfo *_info;
}

+ (id)powerCalcWithStartingPoint;
@property(retain, nonatomic) TYPowerInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (long long)calcPower:(unsigned long long *)arg1 energy:(unsigned long long *)arg2;
- (id)init;

@end
