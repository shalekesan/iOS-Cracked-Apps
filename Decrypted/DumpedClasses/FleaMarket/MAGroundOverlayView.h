//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAOverlayView.h"

@class MAGroundOverlay;

@interface MAGroundOverlayView : MAOverlayView
{
}

- (id)initWithGroundOverlay:(id)arg1;
- (void)drawMapRect:(struct MAMapRect)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
@property(readonly, nonatomic) MAGroundOverlay *groundOverlay;

@end

