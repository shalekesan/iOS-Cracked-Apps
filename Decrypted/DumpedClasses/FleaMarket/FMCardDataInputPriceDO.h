//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCardDataDO.h"

#import "NSCopying.h"

@class NSString;

@interface FMCardDataInputPriceDO : FMCardDataDO <NSCopying>
{
    NSString *_max;
    NSString *_min;
    NSString *_currency;
    NSString *_unit;
    NSString *_valueData;
}

@property(copy, nonatomic) NSString *valueData; // @synthesize valueData=_valueData;
@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSString *min; // @synthesize min=_min;
@property(copy, nonatomic) NSString *max; // @synthesize max=_max;
- (void).cxx_destruct;
- (id)checkReqParams;
- (id)propertyValueString;
- (id)getPriceAttributedStringWithSymbolUnit;
- (id)getPriceStringWithSymbolUnit;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

