//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMSharePhraseView, NSNumber, NSString;

@protocol FMSharePhraseViewDelegate <NSObject>
- (void)sharePhraseViewSelfHideButtonClick:(NSNumber *)arg1;
- (void)sharePhraseViewLabelLongPress:(FMSharePhraseView *)arg1 withContent:(NSString *)arg2;
- (void)sharePhraseViewButtonClick:(FMSharePhraseView *)arg1 buttonText:(NSString *)arg2;
@end

