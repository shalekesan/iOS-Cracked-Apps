//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MJRefreshHeader.h"

@class FMRefreshLoadingView, UILabel;

@interface FMLoadMoreHeader : MJRefreshHeader
{
    UILabel *_titleLabel;
    FMRefreshLoadingView *_loadingView;
}

@property(retain, nonatomic) FMRefreshLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (void)prepare;

@end

