//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<FMLogisticPackageItemDO>, NSArray<FMLogisticTransitDO>, NSString;

@interface FMLogisticOrderDO : NSObject
{
    _Bool _tbPackage;
    _Bool _stationPackage;
    _Bool _showEvaluation;
    NSString *_subtitle1;
    NSString *_subTitle2;
    NSString *_logisticStatusDesc;
    NSString *_logisticStatus;
    NSString *_partnerName;
    NSArray<FMLogisticPackageItemDO> *_packageItemList;
    NSArray<FMLogisticTransitDO> *_transitList;
    NSString *_logisticsOrderGmtCreate;
    NSString *_packageTitle;
    NSString *_taobaoTradeId;
    NSString *_partnerCode;
    NSString *_mailNo;
    NSString *_evaluateStatus;
    NSString *_orderCode;
}

@property(copy, nonatomic) NSString *orderCode; // @synthesize orderCode=_orderCode;
@property(copy, nonatomic) NSString *evaluateStatus; // @synthesize evaluateStatus=_evaluateStatus;
@property(copy, nonatomic) NSString *mailNo; // @synthesize mailNo=_mailNo;
@property(copy, nonatomic) NSString *partnerCode; // @synthesize partnerCode=_partnerCode;
@property(copy, nonatomic) NSString *taobaoTradeId; // @synthesize taobaoTradeId=_taobaoTradeId;
@property(copy, nonatomic) NSString *packageTitle; // @synthesize packageTitle=_packageTitle;
@property(copy, nonatomic) NSString *logisticsOrderGmtCreate; // @synthesize logisticsOrderGmtCreate=_logisticsOrderGmtCreate;
@property(nonatomic) _Bool showEvaluation; // @synthesize showEvaluation=_showEvaluation;
@property(retain, nonatomic) NSArray<FMLogisticTransitDO> *transitList; // @synthesize transitList=_transitList;
@property(retain, nonatomic) NSArray<FMLogisticPackageItemDO> *packageItemList; // @synthesize packageItemList=_packageItemList;
@property(nonatomic) _Bool stationPackage; // @synthesize stationPackage=_stationPackage;
@property(nonatomic) _Bool tbPackage; // @synthesize tbPackage=_tbPackage;
@property(copy, nonatomic) NSString *partnerName; // @synthesize partnerName=_partnerName;
@property(copy, nonatomic) NSString *logisticStatus; // @synthesize logisticStatus=_logisticStatus;
@property(copy, nonatomic) NSString *logisticStatusDesc; // @synthesize logisticStatusDesc=_logisticStatusDesc;
@property(copy, nonatomic) NSString *subTitle2; // @synthesize subTitle2=_subTitle2;
@property(copy, nonatomic) NSString *subtitle1; // @synthesize subtitle1=_subtitle1;
- (void).cxx_destruct;

@end

