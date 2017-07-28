//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, NSURL, UIImage;

@interface FMMediaDataObject : NSObject
{
    _Bool _beautified;
    AVAsset *_editAsset;
    NSURL *_outputUrl;
    UIImage *_snapShotImage;
    long long _filterIndex;
}

@property(nonatomic) long long filterIndex; // @synthesize filterIndex=_filterIndex;
@property(nonatomic) _Bool beautified; // @synthesize beautified=_beautified;
@property(retain, nonatomic) UIImage *snapShotImage; // @synthesize snapShotImage=_snapShotImage;
@property(copy, nonatomic) NSURL *outputUrl; // @synthesize outputUrl=_outputUrl;
@property(retain, nonatomic) AVAsset *editAsset; // @synthesize editAsset=_editAsset;
- (void).cxx_destruct;

@end

