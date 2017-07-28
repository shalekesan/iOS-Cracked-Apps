//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSValue;

@interface MAMapScrollView : UIScrollView
{
    id <MAMapScrollViewDelegate> mapScrollViewDelegate;
    NSValue *_scrollableRect;
}

@property(retain, nonatomic) NSValue *scrollableRect; // @synthesize scrollableRect=_scrollableRect;
@property(nonatomic) __weak id <MAMapScrollViewDelegate> mapScrollViewDelegate; // @synthesize mapScrollViewDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)calculateNewContentOffset:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;

@end

