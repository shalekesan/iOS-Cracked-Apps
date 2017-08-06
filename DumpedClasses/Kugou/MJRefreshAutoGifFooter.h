//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MJRefreshAutoStateFooter.h"

@class NSMutableDictionary, UIImageView;

@interface MJRefreshAutoGifFooter : MJRefreshAutoStateFooter
{
    UIImageView *_gifView;
    NSMutableDictionary *_stateImages;
    NSMutableDictionary *_stateDurations;
}

@property(retain, nonatomic) NSMutableDictionary *stateDurations; // @synthesize stateDurations=_stateDurations;
@property(retain, nonatomic) NSMutableDictionary *stateImages; // @synthesize stateImages=_stateImages;
@property(nonatomic) __weak UIImageView *gifView; // @synthesize gifView=_gifView;
- (void).cxx_destruct;
- (void)setState:(int)arg1;
- (void)placeSubviews;
- (void)setImages:(id)arg1 forState:(int)arg2;
- (void)setImages:(id)arg1 duration:(double)arg2 forState:(int)arg3;

@end
