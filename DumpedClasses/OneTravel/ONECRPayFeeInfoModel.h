//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface ONECRPayFeeInfoModel : JSONModel
{
    NSString<Optional> *_payFeeName;
    NSString<Optional> *_payFeePrice;
    NSNumber<Optional> *_notice;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSNumber<Optional> *notice; // @synthesize notice=_notice;
@property(copy, nonatomic) NSString<Optional> *payFeePrice; // @synthesize payFeePrice=_payFeePrice;
@property(copy, nonatomic) NSString<Optional> *payFeeName; // @synthesize payFeeName=_payFeeName;
- (void).cxx_destruct;

@end

