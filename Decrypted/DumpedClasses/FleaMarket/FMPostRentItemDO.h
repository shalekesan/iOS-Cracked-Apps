//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FMPostRentItemDO : NSObject
{
    NSString *_itemId;
    NSString *_title;
    NSArray *_imageUrls;
    NSString *_videoFilePath;
    NSString *_desc;
    NSString *_videoId;
    NSString *_videoCoverUrl;
    NSString *_province;
    NSString *_area;
    NSString *_city;
    NSString *_gps;
}

@property(copy, nonatomic) NSString *gps; // @synthesize gps=_gps;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *videoCoverUrl; // @synthesize videoCoverUrl=_videoCoverUrl;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *videoFilePath; // @synthesize videoFilePath=_videoFilePath;
@property(copy, nonatomic) NSArray *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

