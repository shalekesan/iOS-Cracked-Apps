//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface TBPopLayerConfigModel : TBJSONModel
{
    _Bool _appear;
    _Bool _showCloseBtn;
    _Bool _embed;
    NSString *_jsonString;
    NSString *_uri;
    NSArray *_uris;
    NSString *_url;
    double _modalThreshold;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_uuid;
    long long _times;
    NSString *_paramContains;
    NSString *_mustAppearIn;
    double _timeoutWhenNext;
    long long _orient;
    NSDictionary *_extra;
    NSString *_sourceType;
}

@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) _Bool embed; // @synthesize embed=_embed;
@property(nonatomic) long long orient; // @synthesize orient=_orient;
@property(nonatomic) double timeoutWhenNext; // @synthesize timeoutWhenNext=_timeoutWhenNext;
@property(copy, nonatomic) NSString *mustAppearIn; // @synthesize mustAppearIn=_mustAppearIn;
@property(copy, nonatomic) NSString *paramContains; // @synthesize paramContains=_paramContains;
@property(nonatomic) _Bool showCloseBtn; // @synthesize showCloseBtn=_showCloseBtn;
@property(nonatomic) long long times; // @synthesize times=_times;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool appear; // @synthesize appear=_appear;
@property(nonatomic) double modalThreshold; // @synthesize modalThreshold=_modalThreshold;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSArray *uris; // @synthesize uris=_uris;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(copy, nonatomic) NSString *jsonString; // @synthesize jsonString=_jsonString;
- (void).cxx_destruct;
- (id)analyseDate:(id)arg1;

@end

