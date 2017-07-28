//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSMutableDictionary, NSString;

@interface MirrorMakeUpModel : NSObject <NSCoding>
{
    _Bool _isCache;
    int _makeUpType;
    NSString *_action;
    NSString *_cspuId;
    long long *_tmplId;
    NSString *_cspuVersion;
    double _weight;
    NSString *_datUrl;
    NSString *_md5FromServer;
    NSMutableDictionary *_feature;
    NSMutableDictionary *_attribute;
    NSData *_fileData;
}

@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSMutableDictionary *attribute; // @synthesize attribute=_attribute;
@property(retain, nonatomic) NSMutableDictionary *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) NSString *md5FromServer; // @synthesize md5FromServer=_md5FromServer;
@property(retain, nonatomic) NSString *datUrl; // @synthesize datUrl=_datUrl;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *cspuVersion; // @synthesize cspuVersion=_cspuVersion;
@property(nonatomic) long long *tmplId; // @synthesize tmplId=_tmplId;
@property(retain, nonatomic) NSString *cspuId; // @synthesize cspuId=_cspuId;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(nonatomic) int makeUpType; // @synthesize makeUpType=_makeUpType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

