//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ABAudio : NSObject
{
    NSString *_lastFileName;
}

@property(copy, nonatomic) NSString *lastFileName; // @synthesize lastFileName=_lastFileName;
- (void).cxx_destruct;
- (void)exit;
- (float)getDuration;
- (void)setVolume:(float)arg1;
- (void)playWithFileName:(id)arg1;
- (void)stop;

@end

