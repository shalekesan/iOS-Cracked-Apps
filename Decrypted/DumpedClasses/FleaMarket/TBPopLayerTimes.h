//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface TBPopLayerTimes : NSObject
{
    NSString *_filePath;
    NSMutableDictionary *_dict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)clearCount;
- (long long)incrWithId:(id)arg1;
- (long long)timesWithId:(id)arg1;
- (void)dealloc;
- (id)getTimesFilePath;
- (id)init;

@end

