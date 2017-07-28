//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface WXIndicatorView : UIView
{
    int _alignStyle;
    long long _pointCount;
    long long _currentPoint;
    UIColor *_pointColor;
    UIColor *_lightColor;
    double _pointSize;
    double _pointSpace;
}

@property(nonatomic) double pointSpace; // @synthesize pointSpace=_pointSpace;
@property(nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
@property(nonatomic) int alignStyle; // @synthesize alignStyle=_alignStyle;
@property(retain, nonatomic) UIColor *lightColor; // @synthesize lightColor=_lightColor;
@property(retain, nonatomic) UIColor *pointColor; // @synthesize pointColor=_pointColor;
@property(nonatomic) long long currentPoint; // @synthesize currentPoint=_currentPoint;
@property(nonatomic) long long pointCount; // @synthesize pointCount=_pointCount;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

