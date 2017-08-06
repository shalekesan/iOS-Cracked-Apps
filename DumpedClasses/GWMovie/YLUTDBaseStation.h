//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YLUTDBaseModel.h"

@class NSString, YLUTDLocation;

@interface YLUTDBaseStation : YLUTDBaseModel
{
    int _systemId;
    int _networkId;
    int _bastationId;
    int _asuLevel;
    NSString *_type;
    NSString *_mcc;
    NSString *_mnc;
    NSString *_operator;
    YLUTDLocation *_location;
}

@property(nonatomic) int asuLevel; // @synthesize asuLevel=_asuLevel;
@property(retain, nonatomic) YLUTDLocation *location; // @synthesize location=_location;
@property(nonatomic) int bastationId; // @synthesize bastationId=_bastationId;
@property(nonatomic) int networkId; // @synthesize networkId=_networkId;
@property(nonatomic) int systemId; // @synthesize systemId=_systemId;
@property(retain, nonatomic) NSString *operator; // @synthesize operator=_operator;
@property(retain, nonatomic) NSString *mnc; // @synthesize mnc=_mnc;
@property(retain, nonatomic) NSString *mcc; // @synthesize mcc=_mcc;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end
