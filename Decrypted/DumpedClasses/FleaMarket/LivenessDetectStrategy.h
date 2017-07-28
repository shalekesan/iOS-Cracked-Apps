//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface LivenessDetectStrategy : NSObject
{
    NSMutableDictionary *_faceFrontDict;
    NSMutableDictionary *_shakeHeadDict;
}

+ (id)sharedStrategy;
+ (id)getStrategy;
@property(retain, nonatomic) NSMutableDictionary *shakeHeadDict; // @synthesize shakeHeadDict=_shakeHeadDict;
@property(retain, nonatomic) NSMutableDictionary *faceFrontDict; // @synthesize faceFrontDict=_faceFrontDict;
- (void).cxx_destruct;
- (void)setValueForStrategy;

@end

