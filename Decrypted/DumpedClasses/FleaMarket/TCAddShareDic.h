//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCAPIRequest.h"

@class NSString;

@interface TCAddShareDic : TCAPIRequest
{
    NSString *_paramTitle;
    NSString *_paramUrl;
    NSString *_paramComment;
    NSString *_paramSummary;
    NSString *_paramImages;
    NSString *_paramType;
    NSString *_paramPlayurl;
    NSString *_paramSite;
    NSString *_paramFromurl;
    NSString *_paramNswb;
    int _xo;
}

+ (id)dictionary;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *paramFromurl; // @dynamic paramFromurl;
@property(retain, nonatomic) NSString *paramSite; // @dynamic paramSite;
@property(retain, nonatomic) NSString *paramPlayurl; // @dynamic paramPlayurl;
@property(retain, nonatomic) NSString *paramType; // @dynamic paramType;
@property(retain, nonatomic) NSString *paramImages; // @dynamic paramImages;
@property(retain, nonatomic) NSString *paramSummary; // @dynamic paramSummary;
@property(retain, nonatomic) NSString *paramComment; // @dynamic paramComment;
@property(retain, nonatomic) NSString *paramUrl; // @dynamic paramUrl;
@property(retain, nonatomic) NSString *paramTitle; // @dynamic paramTitle;

// Remaining properties
@property(retain, nonatomic) NSString *paramNswb; // @dynamic paramNswb;

@end

