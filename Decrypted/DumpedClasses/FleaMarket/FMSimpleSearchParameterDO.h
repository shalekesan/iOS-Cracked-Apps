//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMSimpleSearchParameterDO.h"

@class NSArray, NSNumber, NSString;

@interface FMSimpleSearchParameterDO : NSObject <FMSimpleSearchParameterDO>
{
    _Bool _voice;
    NSNumber *_abTestRuleId;
    NSString *_area;
    NSString *_auctionType;
    NSNumber *_categoryId;
    NSString *_city;
    NSNumber *_endDiscount;
    NSNumber *_endPrice;
    NSString *_errorMessage;
    NSArray *_errorMessages;
    NSNumber *_fishpoolId;
    NSString *_gps;
    NSString *_keyword;
    double _lat;
    double _lng;
    NSNumber *_offline;
    NSNumber *_originalPageNumber;
    NSNumber *_pageNumber;
    NSString *_province;
    NSNumber *_range;
    NSNumber *_rowsPerPage;
    NSNumber *_sellerId;
    NSString *_sellerNick;
    NSString *_sortField;
    NSString *_sortValue;
    NSNumber *_startDiscount;
    NSNumber *_startPrice;
    NSNumber *_stuffStatus;
    NSString *_themeId;
    NSNumber *_userId;
}

@property(nonatomic) _Bool voice; // @synthesize voice=_voice;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;
@property(retain, nonatomic) NSNumber *stuffStatus; // @synthesize stuffStatus=_stuffStatus;
@property(retain, nonatomic) NSNumber *startPrice; // @synthesize startPrice=_startPrice;
@property(retain, nonatomic) NSNumber *startDiscount; // @synthesize startDiscount=_startDiscount;
@property(copy, nonatomic) NSString *sortValue; // @synthesize sortValue=_sortValue;
@property(copy, nonatomic) NSString *sortField; // @synthesize sortField=_sortField;
@property(copy, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(retain, nonatomic) NSNumber *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSNumber *rowsPerPage; // @synthesize rowsPerPage=_rowsPerPage;
@property(retain, nonatomic) NSNumber *range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSNumber *pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) NSNumber *originalPageNumber; // @synthesize originalPageNumber=_originalPageNumber;
@property(retain, nonatomic) NSNumber *offline; // @synthesize offline=_offline;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *gps; // @synthesize gps=_gps;
@property(retain, nonatomic) NSNumber *fishpoolId; // @synthesize fishpoolId=_fishpoolId;
@property(retain, nonatomic) NSArray *errorMessages; // @synthesize errorMessages=_errorMessages;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSNumber *endPrice; // @synthesize endPrice=_endPrice;
@property(retain, nonatomic) NSNumber *endDiscount; // @synthesize endDiscount=_endDiscount;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSNumber *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *auctionType; // @synthesize auctionType=_auctionType;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(retain, nonatomic) NSNumber *abTestRuleId; // @synthesize abTestRuleId=_abTestRuleId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

