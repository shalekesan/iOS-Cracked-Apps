//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMItemGuideDO, NSMutableArray<FMUserDO>, NSString;

@interface FMApplyInfoDO : NSObject
{
    NSString *_title;
    FMItemGuideDO *_secuGuide;
    NSString *_total;
    NSMutableArray<FMUserDO> *_users;
    NSString *_moreRedirectUrl;
}

@property(retain, nonatomic) NSString *moreRedirectUrl; // @synthesize moreRedirectUrl=_moreRedirectUrl;
@property(retain, nonatomic) NSMutableArray<FMUserDO> *users; // @synthesize users=_users;
@property(copy, nonatomic) NSString *total; // @synthesize total=_total;
@property(retain, nonatomic) FMItemGuideDO *secuGuide; // @synthesize secuGuide=_secuGuide;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

