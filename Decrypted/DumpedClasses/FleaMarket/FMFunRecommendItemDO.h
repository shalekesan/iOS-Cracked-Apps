//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMFunRecommendItemDO : NSObject
{
    NSString *_itemId;
    NSString *_linkUrl;
    NSString *_picUrl;
    long long _type;
    NSString *_note;
    long long _count;
    NSString *_price;
}

@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

