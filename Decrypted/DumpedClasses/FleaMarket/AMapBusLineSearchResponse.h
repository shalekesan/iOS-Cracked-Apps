//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapSuggestion, NSArray;

@interface AMapBusLineSearchResponse : AMapSearchObject
{
    long long _count;
    AMapSuggestion *_suggestion;
    NSArray *_buslines;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(retain, nonatomic) NSArray *buslines; // @synthesize buslines=_buslines;
@property(retain, nonatomic) AMapSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;

@end

