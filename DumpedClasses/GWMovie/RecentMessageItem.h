//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RecentMessageItem : NSObject
{
    NSString *messageId;
    NSString *messageSender;
}

@property(copy, nonatomic) NSString *messageSender; // @synthesize messageSender;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end
