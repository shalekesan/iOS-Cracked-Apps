//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface SBBPageControl : UIView
{
    long long _numberOfPages;
    long long _currentPage;
    NSMutableArray *_dotImageViewMuteArray;
}

@property(retain, nonatomic) NSMutableArray *dotImageViewMuteArray; // @synthesize dotImageViewMuteArray=_dotImageViewMuteArray;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadAllImages;
- (void)regenerateAllImages;
- (id)init;

@end
