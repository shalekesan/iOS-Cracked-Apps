//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NWUTAts : NSObject
{
    int _port;
    int _ret;
    int _ecode;
    int _type;
    double _begin;
    NSString *_host;
    NSString *_url;
    NSString *_ip;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int ecode; // @synthesize ecode=_ecode;
@property(nonatomic) int ret; // @synthesize ret=_ret;
@property(nonatomic) int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) double begin; // @synthesize begin=_begin;
- (void).cxx_destruct;
- (void)commitUT;
- (id)dictionary;

@end

