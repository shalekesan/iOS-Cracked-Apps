//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface FXSRoomMoreItem : FXBaseJSONModel
{
    NSString *_icon;
    long long _id;
    NSString *_link;
    NSString *_name;
    NSString *_period;
    NSString *_tag;
    NSString *_tagImg;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *tagImg; // @synthesize tagImg=_tagImg;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *period; // @synthesize period=_period;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end
