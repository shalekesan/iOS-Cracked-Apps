//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLiveVideoUrlModel : TBJSONModel
{
    NSString *_codeLevel;
    NSString *_name;
    NSString *_flvUrl;
    NSString *_hlsUrl;
}

@property(copy, nonatomic) NSString *hlsUrl; // @synthesize hlsUrl=_hlsUrl;
@property(copy, nonatomic) NSString *flvUrl; // @synthesize flvUrl=_flvUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *codeLevel; // @synthesize codeLevel=_codeLevel;
- (void).cxx_destruct;

@end

