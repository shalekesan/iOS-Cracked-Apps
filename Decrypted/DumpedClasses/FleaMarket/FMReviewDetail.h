//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMReviewItemDO, FMReviewItemDOList, NSString;

@interface FMReviewDetail : NSObject
{
    _Bool _rateEffective;
    _Bool _allowAppendRate;
    _Bool _showTradeInfo;
    NSString *_tradeId;
    NSString *_itemId;
    NSString *_buyerUid;
    NSString *_sellerUid;
    NSString *_currentLoginUid;
    NSString *_ratedUid;
    FMReviewItemDO *_idleRateDO;
    NSString *_itemMainPictCdnUrl;
    NSString *_itemTitle;
    NSString *_tradeTime;
    FMReviewItemDOList *_idleAppendRateDOResult;
    NSString *_tips;
}

@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) _Bool showTradeInfo; // @synthesize showTradeInfo=_showTradeInfo;
@property(nonatomic) _Bool allowAppendRate; // @synthesize allowAppendRate=_allowAppendRate;
@property(nonatomic) _Bool rateEffective; // @synthesize rateEffective=_rateEffective;
@property(retain, nonatomic) FMReviewItemDOList *idleAppendRateDOResult; // @synthesize idleAppendRateDOResult=_idleAppendRateDOResult;
@property(copy, nonatomic) NSString *tradeTime; // @synthesize tradeTime=_tradeTime;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *itemMainPictCdnUrl; // @synthesize itemMainPictCdnUrl=_itemMainPictCdnUrl;
@property(retain, nonatomic) FMReviewItemDO *idleRateDO; // @synthesize idleRateDO=_idleRateDO;
@property(copy, nonatomic) NSString *ratedUid; // @synthesize ratedUid=_ratedUid;
@property(copy, nonatomic) NSString *currentLoginUid; // @synthesize currentLoginUid=_currentLoginUid;
@property(copy, nonatomic) NSString *sellerUid; // @synthesize sellerUid=_sellerUid;
@property(copy, nonatomic) NSString *buyerUid; // @synthesize buyerUid=_buyerUid;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
- (void).cxx_destruct;

@end

