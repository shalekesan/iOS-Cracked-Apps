//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMLocationDTO : NSObject
{
    NSString *_guideDesc;
    NSString *_distance;
    NSString *_itemGps;
    NSString *_searchGps;
    NSString *_itemGpsLocation;
    NSString *_userGps;
}

@property(copy, nonatomic) NSString *userGps; // @synthesize userGps=_userGps;
@property(copy, nonatomic) NSString *itemGpsLocation; // @synthesize itemGpsLocation=_itemGpsLocation;
@property(copy, nonatomic) NSString *searchGps; // @synthesize searchGps=_searchGps;
@property(copy, nonatomic) NSString *itemGps; // @synthesize itemGps=_itemGps;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *guideDesc; // @synthesize guideDesc=_guideDesc;
- (void).cxx_destruct;

@end

