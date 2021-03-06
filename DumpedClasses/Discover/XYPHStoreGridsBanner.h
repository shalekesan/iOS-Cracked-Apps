//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSArray, NSString, XYPHStoreBannerDivider;

@interface XYPHStoreGridsBanner : XYRKModel
{
    NSString *_bannerId;
    NSArray *_items;
    long long _itemHeight;
    long long _itemWidth;
    XYPHStoreBannerDivider *_horizontalDivider;
    XYPHStoreBannerDivider *_verticalDivider;
}

+ (id)verticalDividerJSONTransformer;
+ (id)horizontalDividerJSONTransformer;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) XYPHStoreBannerDivider *verticalDivider; // @synthesize verticalDivider=_verticalDivider;
@property(retain, nonatomic) XYPHStoreBannerDivider *horizontalDivider; // @synthesize horizontalDivider=_horizontalDivider;
@property(nonatomic) long long itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) long long itemHeight; // @synthesize itemHeight=_itemHeight;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *bannerId; // @synthesize bannerId=_bannerId;
- (void).cxx_destruct;

@end

