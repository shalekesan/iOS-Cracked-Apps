//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface TBLiveLoadingView : UIView
{
    UIImageView *_loadingImgView;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *loadingImgView; // @synthesize loadingImgView=_loadingImgView;
- (void).cxx_destruct;
- (void)layoutView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

