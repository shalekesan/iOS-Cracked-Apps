//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface TFETimeProfiler : NSObject
{
    NSString *_name;
    NSDate *_start;
    NSDate *_end;
}

+ (id)profilerWithName:(id)arg1 start:(id)arg2 anEnd:(id)arg3;
@property(retain, nonatomic) NSDate *end; // @synthesize end=_end;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)interval;
- (id)initWithName:(id)arg1 start:(id)arg2 anEnd:(id)arg3;

@end

