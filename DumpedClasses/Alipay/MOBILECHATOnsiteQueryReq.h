//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECHATToString.h"

@class NSString;

@interface MOBILECHATOnsiteQueryReq : MOBILECHATToString
{
    int _number;
    double _lat;
    double _lng;
    NSString *_bizType;
}

@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) int number; // @synthesize number=_number;
- (void).cxx_destruct;

@end
