//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TBTradeCardTimeInfo : NSObject
{
    NSDictionary *_data;
    NSString *_child;
}

@property(readonly, nonatomic) NSString *child; // @synthesize child=_child;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *interval;
@property(readonly, nonatomic) NSString *format;
@property(readonly, nonatomic) NSString *endTime;
@property(readonly, nonatomic) NSString *beginTime;
- (id)initWithData:(id)arg1;

@end
