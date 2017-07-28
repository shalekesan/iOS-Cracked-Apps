//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSError, TBIULocationDetail, TBIUPlace;

@interface TBIULocationInfo : NSObject
{
    CLLocation *_oldLocation;
    CLLocation *_location;
    TBIUPlace *_place;
    TBIULocationDetail *_locationDetail;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TBIULocationDetail *locationDetail; // @synthesize locationDetail=_locationDetail;
@property(retain, nonatomic) TBIUPlace *place; // @synthesize place=_place;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLLocation *oldLocation; // @synthesize oldLocation=_oldLocation;
- (void).cxx_destruct;
- (id)description;

@end

