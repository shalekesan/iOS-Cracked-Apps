//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface UTExecutorFactory : NSObject
{
    NSMutableDictionary *_executorDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *executorDict; // @synthesize executorDict=_executorDict;
- (void).cxx_destruct;
- (id)findExecutor:(int)arg1;

@end

