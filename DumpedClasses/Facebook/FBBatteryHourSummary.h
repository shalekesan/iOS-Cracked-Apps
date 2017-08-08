//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FBBatteryHourSummary : NSObject
{
    NSMutableDictionary *_energyMap;
    NSMutableDictionary *_attributeMap;
    double _totalEnergy;
    double _onScreenTime;
    double _backgroundTime;
}

@property(nonatomic) double backgroundTime; // @synthesize backgroundTime=_backgroundTime;
@property(nonatomic) double onScreenTime; // @synthesize onScreenTime=_onScreenTime;
- (void).cxx_destruct;
@property(readonly, nonatomic) double totalEnergy;
- (id)allProperties;
- (id)energyMap;
- (void)setDouble:(double)arg1 forAttribute:(id)arg2;
- (void)setInteger:(long long)arg1 forAttribute:(id)arg2;
- (void)addEnergy:(double)arg1 forNode:(id)arg2;
- (id)init;

@end
