//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "VZInteractiveViewProtocol.h"

@class NSString, VZInteractiveAnimation;

@interface O2OEyePageMenuScrollView : UIScrollView <VZInteractiveViewProtocol>
{
    double _progress;
    double _minValue;
    double _maxValue;
    VZInteractiveAnimation *_interactiveAnimation;
}

@property(retain, nonatomic) VZInteractiveAnimation *interactiveAnimation; // @synthesize interactiveAnimation=_interactiveAnimation;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)layoutViewIfNeed;
- (void)interactiveWithProgress:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
